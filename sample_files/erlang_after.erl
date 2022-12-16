%% Copyright (c) 2016-2017, Loïc Hoguin <essen@ninenines.eu>
%%
%% Permission to use, copy, modify, and/or distribute this software for any
%% purpose with or without fee is hereby granted, provided that the above
%% copyright notice and this permission notice appear in all copies.
%%
%% THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
%% WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
%% MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
%% ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
%% WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
%% ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
%% OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

-module(cowboy_http).

-export([init/6]).

-export([system_continue/3]).
-export([system_terminate/4]).
-export([system_code_change/4]).

-type opts() :: #{
	active_n => pos_integer(),
	chunked => boolean(),
	compress_buffering => boolean(),
	compress_threshold => non_neg_integer(),
	connection_type => worker | supervisor,
	env => cowboy_middleware:env(),
	http10_keepalive => boolean(),
	idle_timeout => timeout(),
	inactivity_timeout => timeout(),
	initial_stream_flow_size => non_neg_integer(),
	linger_timeout => timeout(),
	logger => module(),
	max_authority_length => non_neg_integer(),
	max_empty_lines => non_neg_integer(),
	max_header_name_length => non_neg_integer(),
	max_header_value_length => non_neg_integer(),
	max_headers => non_neg_integer(),
	max_keepalive => non_neg_integer(),
	max_method_length => non_neg_integer(),
	max_request_line_length => non_neg_integer(),
	metrics_callback => cowboy_metrics_h:metrics_callback(),
	metrics_req_filter => fun((cowboy_req:req()) -> map()),
	metrics_resp_headers_filter => fun((cowboy:http_headers()) -> cowboy:http_headers()),
	middlewares => [module()],
	proxy_header => boolean(),
	request_timeout => timeout(),
	sendfile => boolean(),
	shutdown_timeout => timeout(),
	stream_handlers => [module()],
	tracer_callback => cowboy_tracer_h:tracer_callback(),
	tracer_flags => [atom()],
	tracer_match_specs => cowboy_tracer_h:tracer_match_specs(),
	%% Open ended because configured stream handlers might add options.
	_ => _
}.
-export_type([opts/0]).

-record(ps_request_line, {
	empty_lines = 0 :: non_neg_integer()
}).

-record(ps_header, {
	method = undefined :: binary(),
	authority = undefined :: binary() | undefined,
	path = undefined :: binary(),
	qs = undefined :: binary(),
	version = undefined :: cowboy:http_version(),
	headers = undefined :: cowboy:http_headers() | undefined,
	name = undefined :: binary() | undefined
}).

-record(ps_body, {
	length :: non_neg_integer() | undefined,
	received = 0 :: non_neg_integer(),
	transfer_decode_fun :: fun((binary(), cow_http_te:state()) -> cow_http_te:decode_ret()),
	transfer_decode_state :: cow_http_te:state()
}).

-record(stream, {
	id = undefined :: cowboy_stream:streamid(),
	%% Stream handlers and their state.
	state = undefined :: {module(), any()},
	%% Request method.
	method = undefined :: binary(),
	%% Client HTTP version for this stream.
	version = undefined :: cowboy:http_version(),
	%% Unparsed te header. Used to know if we can send trailers.
	te :: undefined | binary(),
	%% Expected body size.
	local_expected_size = undefined :: undefined | non_neg_integer(),
	%% Sent body size.
	local_sent_size = 0 :: non_neg_integer(),
	%% Commands queued.
	queue = [] :: cowboy_stream:commands()
}).

-type stream() :: #stream{}.

-record(state, {
	parent :: pid(),
	ref :: ranch:ref(),
	socket :: inet:socket(),
	transport :: module(),
	proxy_header :: undefined | ranch_proxy_header:proxy_info(),
	opts = #{} :: cowboy:opts(),
	buffer = <<>> :: binary(),

	%% Some options may be overriden for the current stream.
	overriden_opts = #{} :: cowboy:opts(),

	%% Remote address and port for the connection.
	peer = undefined :: {inet:ip_address(), inet:port_number()},

	%% Local address and port for the connection.
	sock = undefined :: {inet:ip_address(), inet:port_number()},

	%% Client certificate (TLS only).
	cert :: undefined | binary(),

	timer = undefined :: undefined | reference(),

	%% Whether we are currently receiving data from the socket.
	active = true :: boolean(),

	%% Identifier for the stream currently being read (or waiting to be received).
	in_streamid = 1 :: pos_integer(),

	%% Parsing state for the current stream or stream-to-be.
	in_state = #ps_request_line{} :: #ps_request_line{} | #ps_header{} | #ps_body{},

	%% Flow requested for the current stream.
	flow = infinity :: non_neg_integer() | infinity,

	%% Identifier for the stream currently being written.
	%% Note that out_streamid =< in_streamid.
	out_streamid = 1 :: pos_integer(),

	%% Whether we finished writing data for the current stream.
	out_state = wait :: wait | chunked | streaming | done,

	%% The connection will be closed after this stream.
	last_streamid = undefined :: pos_integer(),

	%% Currently active HTTP/1.1 streams.
	streams = [] :: [stream()],

	%% Children processes created by streams.
	children = cowboy_children:init() :: cowboy_children:children()
}).

-include_lib("cowlib/include/cow_inline.hrl").
-include_lib("cowlib/include/cow_parse.hrl").

-spec init(pid(), ranch:ref(), inet:socket(), module(),
	ranch_proxy_header:proxy_info(), cowboy:opts()) -> ok.
init(Parent, Ref, Socket, Transport, ProxyHeader, Opts) ->
	Peer0 = Transport:peername(Socket),
	Sock0 = Transport:sockname(Socket),
	Cert1 = case Transport:name() of
		ssl ->
			case ssl:peercert(Socket) of
				{error, no_peercert} ->
					{ok, undefined};
				Cert0 ->
					Cert0
			end;
		_ ->
			{ok, undefined}
	end,
	case {Peer0, Sock0, Cert1} of
		{{ok, Peer}, {ok, Sock}, {ok, Cert}} ->
			State = #state{
				parent=Parent, ref=Ref, socket=Socket,
				transport=Transport, proxy_header=ProxyHeader, opts=Opts,
				peer=Peer, sock=Sock, cert=Cert,
				last_streamid=maps:get(max_keepalive, Opts, 100)},
			setopts_active(State),
			loop(set_timeout(State, request_timeout));
		{{error, Reason}, _, _} ->
			terminate(undefined, {socket_error, Reason,
				'A socket error occurred when retrieving the peer name.'});
		{_, {error, Reason}, _} ->
			terminate(undefined, {socket_error, Reason,
				'A socket error occurred when retrieving the sock name.'});
		{_, _, {error, Reason}} ->
			terminate(undefined, {socket_error, Reason,
				'A socket error occurred when retrieving the client TLS certificate.'})
	end.

setopts_active(#state{socket=Socket, transport=Transport, opts=Opts}) ->
	N = maps:get(active_n, Opts, 100),
	Transport:setopts(Socket, [{active, N}]).

active(State) ->
	setopts_active(State),
	State#state{active=true}.

passive(State=#state{socket=Socket, transport=Transport}) ->
	Transport:setopts(Socket, [{active, false}]),
	Messages = Transport:messages(),
	flush_passive(Socket, Messages),
	State#state{active=false}.

flush_passive(Socket, Messages) ->
	receive
		{Passive, Socket} when Passive =:= element(4, Messages);
				%% Hardcoded for compatibility with Ranch 1.x.
				Passive =:= tcp_passive; Passive =:= ssl_passive ->
			flush_passive(Socket, Messages)
	after 0 ->
		ok
	end.

loop(State=#state{parent=Parent, socket=Socket, transport=Transport, opts=Opts,
		buffer=Buffer, timer=TimerRef, children=Children, in_streamid=InStreamID,
		last_streamid=LastStreamID}) ->
	Messages = Transport:messages(),
	InactivityTimeout = maps:get(inactivity_timeout, Opts, 300000),
	receive
		%% Discard data coming in after the last request
		%% we want to process was received fully.
		{OK, Socket, _} when OK =:= element(1, Messages), InStreamID > LastStreamID ->
			loop(State);
		%% Socket messages.
		{OK, Socket, Data} when OK =:= element(1, Messages) ->
			parse(<< Buffer/binary, Data/binary >>, State);
		{Closed, Socket} when Closed =:= element(2, Messages) ->
			terminate(State, {socket_error, closed, 'The socket has been closed.'});
		{Error, Socket, Reason} when Error =:= element(3, Messages) ->
			terminate(State, {socket_error, Reason, 'An error has occurred on the socket.'});
		{Passive, Socket} when Passive =:= element(4, Messages);
				%% Hardcoded for compatibility with Ranch 1.x.
				Passive =:= tcp_passive; Passive =:= ssl_passive ->
			setopts_active(State),
			loop(State);
		%% Timeouts.
		{timeout, Ref, {shutdown, Pid}} ->
			cowboy_children:shutdown_timeout(Children, Ref, Pid),
			loop(State);
		{timeout, TimerRef, Reason} ->
			timeout(State, Reason);
		{timeout, _, _} ->
			loop(State);
		%% System messages.
		{'EXIT', Parent, Reason} ->
			terminate(State, {stop, {exit, Reason}, 'Parent process terminated.'});
		{system, From, Request} ->
			sys:handle_system_msg(Request, From, Parent, ?MODULE, [], State);
		%% Messages pertaining to a stream.
		{{Pid, StreamID}, Msg} when Pid =:= self() ->
			loop(info(State, StreamID, Msg));
		%% Exit signal from children.
		Msg = {'EXIT', Pid, _} ->
			loop(down(State, Pid, Msg));
		%% Calls from supervisor module.
		{'$gen_call', From, Call} ->
			cowboy_children:handle_supervisor_call(Call, From, Children, ?MODULE),
			loop(State);
		%% Unknown messages.
		Msg ->
			cowboy:log(warning, "Received stray message ~p.~n", [Msg], Opts),
			loop(State)
	after InactivityTimeout ->
		terminate(State, {internal_error, timeout, 'No message or data received before timeout.'})
	end.

%% We do not set request_timeout if there are active streams.
set_timeout(State=#state{streams=[_|_]}, request_timeout) ->
	State;
%% We do not set request_timeout if we are skipping a body.
set_timeout(State=#state{in_state=#ps_body{}}, request_timeout) ->
	State;
%% We do not set idle_timeout if there are no active streams,
%% unless when we are skipping a body.
set_timeout(State=#state{streams=[], in_state=InState}, idle_timeout)
		when element(1, InState) =/= ps_body ->
	State;
%% Otherwise we can set the timeout.
set_timeout(State0=#state{opts=Opts, overriden_opts=Override}, Name) ->
	State = cancel_timeout(State0),
	Default = case Name of
		request_timeout -> 5000;
		idle_timeout -> 60000
	end,
	Timeout = case Override of
		%% The timeout may have been overriden for the current stream.
		#{Name := Timeout0} -> Timeout0;
		_ -> maps:get(Name, Opts, Default)
	end,
	TimerRef = case Timeout of
		infinity -> undefined;
		Timeout -> erlang:start_timer(Timeout, self(), Name)
	end,
	State#state{timer=TimerRef}.

cancel_timeout(State=#state{timer=TimerRef}) ->
	ok = case TimerRef of
		undefined ->
			ok;
		_ ->
			%% Do a synchronous cancel and remove the message if any
			%% to avoid receiving stray messages.
			_ = erlang:cancel_timer(TimerRef),
			receive
				{timeout, TimerRef, _} -> ok
			after 0 ->
				ok
			end
	end,
	State#state{timer=undefined}.

-spec timeout(_, _) -> no_return().
timeout(State=#state{in_state=#ps_request_line{}}, request_timeout) ->
	terminate(State, {connection_error, timeout,
		'No request-line received before timeout.'});
timeout(State=#state{in_state=#ps_header{}}, request_timeout) ->
	error_terminate(408, State, {connection_error, timeout,
		'Request headers not received before timeout.'});
timeout(State, idle_timeout) ->
	terminate(State, {connection_error, timeout,
		'Connection idle longer than configuration allows.'}).

parse(<<>>, State) ->
	loop(State#state{buffer= <<>>});
%% Do not process requests that come in after the last request
%% and discard the buffer if any to save memory.
parse(_, State=#state{in_streamid=InStreamID, in_state=#ps_request_line{},
		last_streamid=LastStreamID}) when InStreamID > LastStreamID ->
	loop(State#state{buffer= <<>>});
parse(Buffer, State=#state{in_state=#ps_request_line{empty_lines=EmptyLines}}) ->
	after_parse(parse_request(Buffer, State, EmptyLines));
parse(Buffer, State=#state{in_state=PS=#ps_header{headers=Headers, name=undefined}}) ->
	after_parse(parse_header(Buffer,
		State#state{in_state=PS#ps_header{headers=undefined}},
		Headers));
parse(Buffer, State=#state{in_state=PS=#ps_header{headers=Headers, name=Name}}) ->
	after_parse(parse_hd_before_value(Buffer,
		State#state{in_state=PS#ps_header{headers=undefined, name=undefined}},
		Headers, Name));
parse(Buffer, State=#state{in_state=#ps_body{}}) ->
	after_parse(parse_body(Buffer, State)).

after_parse({request, Req=#{streamid := StreamID, method := Method,
		headers := Headers, version := Version},
		State0=#state{opts=Opts, buffer=Buffer, streams=Streams0}}) ->
	try cowboy_stream:init(StreamID, Req, Opts) of
		{Commands, StreamState} ->
			Flow = maps:get(initial_stream_flow_size, Opts, 65535),
			TE = maps:get(<<"te">>, Headers, undefined),
			Streams = [#stream{id=StreamID, state=StreamState,
				method=Method, version=Version, te=TE}|Streams0],
			State1 = case maybe_req_close(State0, Headers, Version) of
				close -> State0#state{streams=Streams, last_streamid=StreamID, flow=Flow};
				keepalive -> State0#state{streams=Streams, flow=Flow}
			end,
			State = set_timeout(State1, idle_timeout),
			parse(Buffer, commands(State, StreamID, Commands))
	catch Class:Exception:Stacktrace ->
		cowboy:log(cowboy_stream:make_error_log(init,
			[StreamID, Req, Opts],
			Class, Exception, Stacktrace), Opts),
		early_error(500, State0, {internal_error, {Class, Exception},
			'Unhandled exception in cowboy_stream:init/3.'}, Req),
		parse(Buffer, State0)
	end;
%% Streams are sequential so the body is always about the last stream created
%% unless that stream has terminated.
after_parse({data, StreamID, IsFin, Data, State0=#state{opts=Opts, buffer=Buffer,
		streams=Streams0=[Stream=#stream{id=StreamID, state=StreamState0}|_]}}) ->
	try cowboy_stream:data(StreamID, IsFin, Data, StreamState0) of
		{Commands, StreamState} ->
			Streams = lists:keyreplace(StreamID, #stream.id, Streams0,
				Stream#stream{state=StreamState}),
			State1 = set_timeout(State0, case IsFin of
				fin -> request_timeout;
				nofin -> idle_timeout
			end),
			State = update_flow(IsFin, Data, State1#state{streams=Streams}),
			parse(Buffer, commands(State, StreamID, Commands))
	catch Class:Exception:Stacktrace ->
		cowboy:log(cowboy_stream:make_error_log(data,
			[StreamID, IsFin, Data, StreamState0],
			Class, Exception, Stacktrace), Opts),
		%% @todo Should call parse after this.
		stream_terminate(State0, StreamID, {internal_error, {Class, Exception},
			'Unhandled exception in cowboy_stream:data/4.'})
	end;
%% No corresponding stream. We must skip the body of the previous request
%% in order to process the next one.
after_parse({data, _, IsFin, _, State}) ->
	loop(set_timeout(State, case IsFin of
		fin -> request_timeout;
		nofin -> idle_timeout
	end));
after_parse({more, State}) ->
	loop(set_timeout(State, idle_timeout)).

update_flow(fin, _, State) ->
	%% This function is only called after parsing, therefore we
	%% are expecting to be in active mode already.
	State#state{flow=infinity};
update_flow(nofin, Data, State0=#state{flow=Flow0}) ->
	Flow = Flow0 - byte_size(Data),
	State = State0#state{flow=Flow},
	if
		Flow0 > 0, Flow =< 0 ->
			passive(State);
		true ->
			State
	end.

%% Request-line.

-spec parse_request(Buffer, State, non_neg_integer())
	-> {request, cowboy_req:req(), State}
	| {data, cowboy_stream:streamid(), cowboy_stream:fin(), binary(), State}
	| {more, State}
	when Buffer::binary(), State::#state{}.
%% Empty lines must be using \r\n.
parse_request(<< $\n, _/bits >>, State, _) ->
	error_terminate(400, State, {connection_error, protocol_error,
		'Empty lines between requests must use the CRLF line terminator. (RFC7230 3.5)'});
parse_request(<< $\s, _/bits >>, State, _) ->
	error_terminate(400, State, {connection_error, protocol_error,
		'The request-line must not begin with a space. (RFC7230 3.1.1, RFC7230 3.5)'});
%% We limit the length of the Request-line to MaxLength to avoid endlessly
%% reading from the socket and eventually crashing.
parse_request(Buffer, State=#state{opts=Opts, in_streamid=InStreamID}, EmptyLines) ->
	MaxLength = maps:get(max_request_line_length, Opts, 8000),
	MaxEmptyLines = maps:get(max_empty_lines, Opts, 5),
	case match_eol(Buffer, 0) of
		nomatch when byte_size(Buffer) > MaxLength ->
			error_terminate(414, State, {connection_error, limit_reached,
				'The request-line length is larger than configuration allows. (RFC7230 3.1.1)'});
		nomatch ->
			{more, State#state{buffer=Buffer, in_state=#ps_request_line{empty_lines=EmptyLines}}};
		1 when EmptyLines =:= MaxEmptyLines ->
			error_terminate(400, State, {connection_error, limit_reached,
				'More empty lines were received than configuration allows. (RFC7230 3.5)'});
		1 ->
			<< _:16, Rest/bits >> = Buffer,
			parse_request(Rest, State, EmptyLines + 1);
		_ ->
			case Buffer of
				%% @todo * is only for server-wide OPTIONS request (RFC7230 5.3.4); tests
				<< "OPTIONS * ", Rest/bits >> ->
					parse_version(Rest, State, <<"OPTIONS">>, undefined, <<"*">>, <<>>);
				<<"CONNECT ", _/bits>> ->
					error_terminate(501, State, {connection_error, no_error,
						'The CONNECT method is currently not implemented. (RFC7231 4.3.6)'});
				<<"TRACE ", _/bits>> ->
					error_terminate(501, State, {connection_error, no_error,
						'The TRACE method is currently not implemented. (RFC7231 4.3.8)'});
				%% Accept direct HTTP/2 only at the beginning of the connection.
				<< "PRI * HTTP/2.0\r\n", _/bits >> when InStreamID =:= 1 ->
					%% @todo Might be worth throwing to get a clean stacktrace.
					http2_upgrade(State, Buffer);
				_ ->
					parse_method(Buffer, State, <<>>,
						maps:get(max_method_length, Opts, 32))
			end
	end.

match_eol(<< $\n, _/bits >>, N) ->
	N;
match_eol(<< _, Rest/bits >>, N) ->
	match_eol(Rest, N + 1);
match_eol(_, _) ->
	nomatch.

parse_method(_, State, _, 0) ->
	error_terminate(501, State, {connection_error, limit_reached,
		'The method name is longer than configuration allows. (RFC7230 3.1.1)'});
parse_method(<< C, Rest/bits >>, State, SoFar, Remaining) ->
	case C of
		$\r -> error_terminate(400, State, {connection_error, protocol_error,
			'The method name must not be followed with a line break. (RFC7230 3.1.1)'});
		$\s -> parse_uri(Rest, State, SoFar);
		_ when ?IS_TOKEN(C) -> parse_method(Rest, State, << SoFar/binary, C >>, Remaining - 1);
		_ -> error_terminate(400, State, {connection_error, protocol_error,
			'The method name must contain only valid token characters. (RFC7230 3.1.1)'})
	end.

parse_uri(<< H, T, T, P, "://", Rest/bits >>, State, Method)
		when H =:= $h orelse H =:= $H, T =:= $t orelse T =:= $T;
			P =:= $p orelse P =:= $P ->
	parse_uri_authority(Rest, State, Method);
parse_uri(<< H, T, T, P, S, "://", Rest/bits >>, State, Method)
		when H =:= $h orelse H =:= $H, T =:= $t orelse T =:= $T;
			P =:= $p orelse P =:= $P; S =:= $s orelse S =:= $S ->
	parse_uri_authority(Rest, State, Method);
parse_uri(<< $/, Rest/bits >>, State, Method) ->
	parse_uri_path(Rest, State, Method, undefined, <<$/>>);
parse_uri(_, State, _) ->
	error_terminate(400, State, {connection_error, protocol_error,
		'Invalid request-line or request-target. (RFC7230 3.1.1, RFC7230 5.3)'}).

%% @todo We probably want to apply max_authority_length also
%% to the host header and to document this option. It might
%% also be useful for HTTP/2 requests.
parse_uri_authority(Rest, State=#state{opts=Opts}, Method) ->
	parse_uri_authority(Rest, State, Method, <<>>,
		maps:get(max_authority_length, Opts, 255)).

parse_uri_authority(_, State, _, _, 0) ->
	error_terminate(414, State, {connection_error, limit_reached,
		'The authority component of the absolute URI is longer than configuration allows. (RFC7230 2.7.1)'});
parse_uri_authority(<<C, Rest/bits>>, State, Method, SoFar, Remaining) ->
	case C of
		$\r ->
			error_terminate(400, State, {connection_error, protocol_error,
				'The request-target must not be followed by a line break. (RFC7230 3.1.1)'});
		$@ ->
			error_terminate(400, State, {connection_error, protocol_error,
				'Absolute URIs must not include a userinfo component. (RFC7230 2.7.1)'});
		C when SoFar =:= <<>> andalso
				((C =:= $/) orelse (C =:= $\s) orelse (C =:= $?) orelse (C =:= $#)) ->
			error_terminate(400, State, {connection_error, protocol_error,
				'Absolute URIs must include a non-empty host component. (RFC7230 2.7.1)'});
		$: when SoFar =:= <<>> ->
			error_terminate(400, State, {connection_error, protocol_error,
				'Absolute URIs must include a non-empty host component. (RFC7230 2.7.1)'});
		$/ -> parse_uri_path(Rest, State, Method, SoFar, <<"/">>);
		$\s -> parse_version(Rest, State, Method, SoFar, <<"/">>, <<>>);
		$? -> parse_uri_query(Rest, State, Method, SoFar, <<"/">>, <<>>);
		$# -> skip_uri_fragment(Rest, State, Method, SoFar, <<"/">>, <<>>);
		C -> parse_uri_authority(Rest, State, Method, <<SoFar/binary, C>>, Remaining - 1)
	end.

parse_uri_path(<<C, Rest/bits>>, State, Method, Authority, SoFar) ->
	case C of
		$\r -> error_terminate(400, State, {connection_error, protocol_error,
			'The request-target must not be followed by a line break. (RFC7230 3.1.1)'});
		$\s -> parse_version(Rest, State, Method, Authority, SoFar, <<>>);
		$? -> parse_uri_query(Rest, State, Method, Authority, SoFar, <<>>);
		$# -> skip_uri_fragment(Rest, State, Method, Authority, SoFar, <<>>);
		_ -> parse_uri_path(Rest, State, Method, Authority, <<SoFar/binary, C>>)
	end.

parse_uri_query(<<C, Rest/bits>>, State, M, A, P, SoFar) ->
	case C of
		$\r -> error_terminate(400, State, {connection_error, protocol_error,
			'The request-target must not be followed by a line break. (RFC7230 3.1.1)'});
		$\s -> parse_version(Rest, State, M, A, P, SoFar);
		$# -> skip_uri_fragment(Rest, State, M, A, P, SoFar);
		_ -> parse_uri_query(Rest, State, M, A, P, <<SoFar/binary, C>>)
	end.

skip_uri_fragment(<<C, Rest/bits>>, State, M, A, P, Q) ->
	case C of
		$\r -> error_terminate(400, State, {connection_error, protocol_error,
			'The request-target must not be followed by a line break. (RFC7230 3.1.1)'});
		$\s -> parse_version(Rest, State, M, A, P, Q);
		_ -> skip_uri_fragment(Rest, State, M, A, P, Q)
	end.

parse_version(<< "HTTP/1.1\r\n", Rest/bits >>, State, M, A, P, Q) ->
	before_parse_headers(Rest, State, M, A, P, Q, 'HTTP/1.1');
parse_version(<< "HTTP/1.0\r\n", Rest/bits >>, State, M, A, P, Q) ->
	before_parse_headers(Rest, State, M, A, P, Q, 'HTTP/1.0');
parse_version(<< "HTTP/1.", _, C, _/bits >>, State, _, _, _, _) when C =:= $\s; C =:= $\t ->
	error_terminate(400, State, {connection_error, protocol_error,
		'Whitespace is not allowed after the HTTP version. (RFC7230 3.1.1)'});
parse_version(<< C, _/bits >>, State, _, _, _, _) when C =:= $\s; C =:= $\t ->
	error_terminate(400, State, {connection_error, protocol_error,
		'The separator between request target and version must be a single SP. (RFC7230 3.1.1)'});
parse_version(_, State, _, _, _, _) ->
	error_terminate(505, State, {connection_error, protocol_error,
		'Unsupported HTTP version. (RFC7230 2.6)'}).

before_parse_headers(Rest, State, M, A, P, Q, V) ->
	parse_header(Rest, State#state{in_state=#ps_header{
		method=M, authority=A, path=P, qs=Q, version=V}}, #{}).

%% Headers.

%% We need two or more bytes in the buffer to continue.
parse_header(Rest, State=#state{in_state=PS}, Headers) when byte_size(Rest) < 2 ->
	{more, State#state{buffer=Rest, in_state=PS#ps_header{headers=Headers}}};
parse_header(<< $\r, $\n, Rest/bits >>, S, Headers) ->
	request(Rest, S, Headers);
parse_header(Buffer, State=#state{opts=Opts, in_state=PS}, Headers) ->
	MaxHeaders = maps:get(max_headers, Opts, 100),
	NumHeaders = maps:size(Headers),
	if
		NumHeaders >= MaxHeaders ->
			error_terminate(431, State#state{in_state=PS#ps_header{headers=Headers}},
				{connection_error, limit_reached,
					'The number of headers is larger than configuration allows. (RFC7230 3.2.5, RFC6585 5)'});
		true ->
			parse_header_colon(Buffer, State, Headers)
	end.

parse_header_colon(Buffer, State=#state{opts=Opts, in_state=PS}, Headers) ->
	MaxLength = maps:get(max_header_name_length, Opts, 64),
	case match_colon(Buffer, 0) of
		nomatch when byte_size(Buffer) > MaxLength ->
			error_terminate(431, State#state{in_state=PS#ps_header{headers=Headers}},
				{connection_error, limit_reached,
					'A header name is larger than configuration allows. (RFC7230 3.2.5, RFC6585 5)'});
		nomatch ->
			%% We don't have a colon but we might have an invalid header line,
			%% so check if we have an LF and abort with an error if we do.
			case match_eol(Buffer, 0) of
				nomatch ->
					{more, State#state{buffer=Buffer, in_state=PS#ps_header{headers=Headers}}};
				_ ->
					error_terminate(400, State#state{in_state=PS#ps_header{headers=Headers}},
						{connection_error, protocol_error,
							'A header line is missing a colon separator. (RFC7230 3.2.4)'})
			end;
		_ ->
			parse_hd_name(Buffer, State, Headers, <<>>)
	end.

match_colon(<< $:, _/bits >>, N) ->
	N;
match_colon(<< _, Rest/bits >>, N) ->
	match_colon(Rest, N + 1);
match_colon(_, _) ->
	nomatch.

parse_hd_name(<< $:, Rest/bits >>, State, H, SoFar) ->
	parse_hd_before_value(Rest, State, H, SoFar);
parse_hd_name(<< C, _/bits >>, State=#state{in_state=PS}, H, <<>>) when ?IS_WS(C) ->
	error_terminate(400, State#state{in_state=PS#ps_header{headers=H}},
		{connection_error, protocol_error,
			'Whitespace is not allowed before the header name. (RFC7230 3.2)'});
parse_hd_name(<< C, _/bits >>, State=#state{in_state=PS}, H, _) when ?IS_WS(C) ->
	error_terminate(400, State#state{in_state=PS#ps_header{headers=H}},
		{connection_error, protocol_error,
			'Whitespace is not allowed between the header name and the colon. (RFC7230 3.2.4)'});
parse_hd_name(<< C, Rest/bits >>, State, H, SoFar) ->
	?LOWER(parse_hd_name, Rest, State, H, SoFar).

parse_hd_before_value(<< $\s, Rest/bits >>, S, H, N) ->
	parse_hd_before_value(Rest, S, H, N);
parse_hd_before_value(<< $\t, Rest/bits >>, S, H, N) ->
	parse_hd_before_value(Rest, S, H, N);
parse_hd_before_value(Buffer, State=#state{opts=Opts, in_state=PS}, H, N) ->
	MaxLength = maps:get(max_header_value_length, Opts, 4096),
	case match_eol(Buffer, 0) of
		nomatch when byte_size(Buffer) > MaxLength ->
			error_terminate(431, State#state{in_state=PS#ps_header{headers=H}},
				{connection_error, limit_reached,
					'A header value is larger than configuration allows. (RFC7230 3.2.5, RFC6585 5)'});
		nomatch ->
			{more, State#state{buffer=Buffer, in_state=PS#ps_header{headers=H, name=N}}};
		_ ->
			parse_hd_value(Buffer, State, H, N, <<>>)
	end.

parse_hd_value(<< $\r, $\n, Rest/bits >>, S, Headers0, Name, SoFar) ->
	Value = clean_value_ws_end(SoFar, byte_size(SoFar) - 1),
	Headers = case maps:get(Name, Headers0, undefined) of
		undefined -> Headers0#{Name => Value};
		%% The cookie header does not use proper HTTP header lists.
		Value0 when Name =:= <<"cookie">> -> Headers0#{Name => << Value0/binary, "; ", Value/binary >>};
		Value0 -> Headers0#{Name => << Value0/binary, ", ", Value/binary >>}
	end,
	parse_header(Rest, S, Headers);
parse_hd_value(<< C, Rest/bits >>, S, H, N, SoFar) ->
	parse_hd_value(Rest, S, H, N, << SoFar/binary, C >>).

clean_value_ws_end(_, -1) ->
	<<>>;
clean_value_ws_end(Value, N) ->
	case binary:at(Value, N) of
		$\s -> clean_value_ws_end(Value, N - 1);
		$\t -> clean_value_ws_end(Value, N - 1);
		_ ->
			S = N + 1,
			<< Value2:S/binary, _/bits >> = Value,
			Value2
	end.

-ifdef(TEST).
clean_value_ws_end_test_() ->
	Tests = [
		{<<>>, <<>>},
		{<<"     ">>, <<>>},
		{<<"text/*;q=0.3, text/html;q=0.7, text/html;level=1, "
			"text/html;level=2;q=0.4, */*;q=0.5   \t   \t    ">>,
			<<"text/*;q=0.3, text/html;q=0.7, text/html;level=1, "
				"text/html;level=2;q=0.4, */*;q=0.5">>}
	],
	[{V, fun() -> R = clean_value_ws_end(V, byte_size(V) - 1) end} || {V, R} <- Tests].

horse_clean_value_ws_end() ->
	horse:repeat(200000,
		clean_value_ws_end(
			<<"text/*;q=0.3, text/html;q=0.7, text/html;level=1, "
				"text/html;level=2;q=0.4, */*;q=0.5          ">>,
			byte_size(<<"text/*;q=0.3, text/html;q=0.7, text/html;level=1, "
				"text/html;level=2;q=0.4, */*;q=0.5          ">>) - 1)
	).
-endif.

request(Buffer, State=#state{transport=Transport,
		in_state=PS=#ps_header{authority=Authority, version=Version}}, Headers) ->
	case maps:get(<<"host">>, Headers, undefined) of
		undefined when Version =:= 'HTTP/1.1' ->
			%% @todo Might want to not close the connection on this and next one.
			error_terminate(400, State#state{in_state=PS#ps_header{headers=Headers}},
				{stream_error, protocol_error,
					'HTTP/1.1 requests must include a host header. (RFC7230 5.4)'});
		undefined ->
			request(Buffer, State, Headers, <<>>, default_port(Transport:secure()));
		%% @todo When CONNECT requests come in we need to ignore the RawHost
		%% and instead use the Authority as the source of host.
		RawHost when Authority =:= undefined; Authority =:= RawHost ->
			request_parse_host(Buffer, State, Headers, RawHost);
		%% RFC7230 does not explicitly ask us to reject requests
		%% that have a different authority component and host header.
		%% However it DOES ask clients to set them to the same value,
		%% so we enforce that.
		_ ->
			error_terminate(400, State#state{in_state=PS#ps_header{headers=Headers}},
				{stream_error, protocol_error,
					'The host header is different than the absolute-form authority component. (RFC7230 5.4)'})
	end.

request_parse_host(Buffer, State=#state{transport=Transport, in_state=PS}, Headers, RawHost) ->
	try cow_http_hd:parse_host(RawHost) of
		{Host, undefined} ->
			request(Buffer, State, Headers, Host, default_port(Transport:secure()));
		{Host, Port} when Port > 0, Port =< 65535 ->
			request(Buffer, State, Headers, Host, Port);
		_ ->
			error_terminate(400, State, {stream_error, protocol_error,
				'The port component of the absolute-form is not in the range 0..65535. (RFC7230 2.7.1)'})
	catch _:_ ->
		error_terminate(400, State#state{in_state=PS#ps_header{headers=Headers}},
			{stream_error, protocol_error,
				'The host header is invalid. (RFC7230 5.4)'})
	end.

-spec default_port(boolean()) -> 80 | 443.
default_port(true) -> 443;
default_port(_) -> 80.

%% End of request parsing.

request(Buffer, State0=#state{ref=Ref, transport=Transport, peer=Peer, sock=Sock, cert=Cert,
		proxy_header=ProxyHeader, in_streamid=StreamID, in_state=
			PS=#ps_header{method=Method, path=Path, qs=Qs, version=Version}},
		Headers0, Host, Port) ->
	Scheme = case Transport:secure() of
		true -> <<"https">>;
		false -> <<"http">>
	end,
	{Headers, HasBody, BodyLength, TDecodeFun, TDecodeState} = case Headers0 of
		#{<<"transfer-encoding">> := TransferEncoding0} ->
			try cow_http_hd:parse_transfer_encoding(TransferEncoding0) of
				[<<"chunked">>] ->
					{maps:remove(<<"content-length">>, Headers0),
						true, undefined, fun cow_http_te:stream_chunked/2, {0, 0}};
				_ ->
					error_terminate(400, State0#state{in_state=PS#ps_header{headers=Headers0}},
						{stream_error, protocol_error,
							'Cowboy only supports transfer-encoding: chunked. (RFC7230 3.3.1)'})
			catch _:_ ->
				error_terminate(400, State0#state{in_state=PS#ps_header{headers=Headers0}},
					{stream_error, protocol_error,
						'The transfer-encoding header is invalid. (RFC7230 3.3.1)'})
			end;
		#{<<"content-length">> := <<"0">>} ->
			{Headers0, false, 0, undefined, undefined};
		#{<<"content-length">> := BinLength} ->
			Length = try
				cow_http_hd:parse_content_length(BinLength)
			catch _:_ ->
				error_terminate(400, State0#state{in_state=PS#ps_header{headers=Headers0}},
					{stream_error, protocol_error,
						'The content-length header is invalid. (RFC7230 3.3.2)'})
			end,
			{Headers0, true, Length, fun cow_http_te:stream_identity/2, {0, Length}};
		_ ->
			{Headers0, false, 0, undefined, undefined}
	end,
	Req0 = #{
		ref => Ref,
		pid => self(),
		streamid => StreamID,
		peer => Peer,
		sock => Sock,
		cert => Cert,
		method => Method,
		scheme => Scheme,
		host => Host,
		port => Port,
		path => Path,
		qs => Qs,
		version => Version,
		%% We are transparently taking care of transfer-encodings so
		%% the user code has no need to know about it.
		headers => maps:remove(<<"transfer-encoding">>, Headers),
		has_body => HasBody,
		body_length => BodyLength
	},
	%% We add the PROXY header information if any.
	Req = case ProxyHeader of
		undefined -> Req0;
		_ -> Req0#{proxy_header => ProxyHeader}
	end,
	case is_http2_upgrade(Headers, Version) of
		false ->
			State = case HasBody of
				true ->
					State0#state{in_state=#ps_body{
						length = BodyLength,
						transfer_decode_fun = TDecodeFun,
						transfer_decode_state = TDecodeState
					}};
				false ->
					State0#state{in_streamid=StreamID + 1, in_state=#ps_request_line{}}
			end,
			{request, Req, State#state{buffer=Buffer}};
		{true, HTTP2Settings} ->
			%% We save the headers in case the upgrade will fail
			%% and we need to pass them to cowboy_stream:early_error.
			http2_upgrade(State0#state{in_state=PS#ps_header{headers=Headers}},
				Buffer, HTTP2Settings, Req)
	end.

%% HTTP/2 upgrade.

%% @todo We must not upgrade to h2c over a TLS connection.
is_http2_upgrade(#{<<"connection">> := Conn, <<"upgrade">> := Upgrade,
		<<"http2-settings">> := HTTP2Settings}, 'HTTP/1.1') ->
	Conns = cow_http_hd:parse_connection(Conn),
	case {lists:member(<<"upgrade">>, Conns), lists:member(<<"http2-settings">>, Conns)} of
		{true, true} ->
			Protocols = cow_http_hd:parse_upgrade(Upgrade),
			case lists:member(<<"h2c">>, Protocols) of
				true ->
					{true, HTTP2Settings};
				false ->
					false
			end;
		_ ->
			false
	end;
is_http2_upgrade(_, _) ->
	false.

%% Prior knowledge upgrade, without an HTTP/1.1 request.
http2_upgrade(State=#state{parent=Parent, ref=Ref, socket=Socket, transport=Transport,
		proxy_header=ProxyHeader, opts=Opts, peer=Peer, sock=Sock, cert=Cert}, Buffer) ->
	case Transport:secure() of
		false ->
			_ = cancel_timeout(State),
			cowboy_http2:init(Parent, Ref, Socket, Transport,
				ProxyHeader, Opts, Peer, Sock, Cert, Buffer);
		true ->
			error_terminate(400, State, {connection_error, protocol_error,
				'Clients that support HTTP/2 over TLS MUST use ALPN. (RFC7540 3.4)'})
	end.

%% Upgrade via an HTTP/1.1 request.
http2_upgrade(State=#state{parent=Parent, ref=Ref, socket=Socket, transport=Transport,
		proxy_header=ProxyHeader, opts=Opts, peer=Peer, sock=Sock, cert=Cert},
		Buffer, HTTP2Settings, Req) ->
	%% @todo
	%% However if the client sent a body, we need to read the body in full
	%% and if we can't do that, return a 413 response. Some options are in order.
	%% Always half-closed stream coming from this side.
	try cow_http_hd:parse_http2_settings(HTTP2Settings) of
		Settings ->
			_ = cancel_timeout(State),
			cowboy_http2:init(Parent, Ref, Socket, Transport,
				ProxyHeader, Opts, Peer, Sock, Cert, Buffer, Settings, Req)
	catch _:_ ->
		error_terminate(400, State, {connection_error, protocol_error,
			'The HTTP2-Settings header must contain a base64 SETTINGS payload. (RFC7540 3.2, RFC7540 3.2.1)'})
	end.

%% Request body parsing.

parse_body(Buffer, State=#state{in_streamid=StreamID, in_state=
		PS=#ps_body{received=Received, transfer_decode_fun=TDecode,
			transfer_decode_state=TState0}}) ->
	%% @todo Proper trailers.
	try TDecode(Buffer, TState0) of
		more ->
			{more, State#state{buffer=Buffer}};
		{more, Data, TState} ->
			{data, StreamID, nofin, Data, State#state{buffer= <<>>,
				in_state=PS#ps_body{received=Received + byte_size(Data),
					transfer_decode_state=TState}}};
		{more, Data, _Length, TState} when is_integer(_Length) ->
			{data, StreamID, nofin, Data, State#state{buffer= <<>>,
				in_state=PS#ps_body{received=Received + byte_size(Data),
					transfer_decode_state=TState}}};
		{more, Data, Rest, TState} ->
			{data, StreamID, nofin, Data, State#state{buffer=Rest,
				in_state=PS#ps_body{received=Received + byte_size(Data),
					transfer_decode_state=TState}}};
		{done, _HasTrailers, Rest} ->
			{data, StreamID, fin, <<>>,
				State#state{buffer=Rest, in_streamid=StreamID + 1, in_state=#ps_request_line{}}};
		{done, Data, _HasTrailers, Rest} ->
			{data, StreamID, fin, Data,
				State#state{buffer=Rest, in_streamid=StreamID + 1, in_state=#ps_request_line{}}}
	catch _:_ ->
		Reason = {connection_error, protocol_error,
			'Failure to decode the content. (RFC7230 4)'},
		terminate(stream_terminate(State, StreamID, Reason), Reason)
	end.

%% Message handling.

down(State=#state{opts=Opts, children=Children0}, Pid, Msg) ->
	case cowboy_children:down(Children0, Pid) of
		%% The stream was terminated already.
		{ok, undefined, Children} ->
			State#state{children=Children};
		%% The stream is still running.
		{ok, StreamID, Children} ->
			info(State#state{children=Children}, StreamID, Msg);
		%% The process was unknown.
		error ->
			cowboy:log(warning, "Received EXIT signal ~p for unknown process ~p.~n",
				[Msg, Pid], Opts),
			State
	end.

info(State=#state{opts=Opts, streams=Streams0}, StreamID, Msg) ->
	case lists:keyfind(StreamID, #stream.id, Streams0) of
		Stream = #stream{state=StreamState0} ->
			try cowboy_stream:info(StreamID, Msg, StreamState0) of
				{Commands, StreamState} ->
					Streams = lists:keyreplace(StreamID, #stream.id, Streams0,
						Stream#stream{state=StreamState}),
					commands(State#state{streams=Streams}, StreamID, Commands)
			catch Class:Exception:Stacktrace ->
				cowboy:log(cowboy_stream:make_error_log(info,
					[StreamID, Msg, StreamState0],
					Class, Exception, Stacktrace), Opts),
				stream_terminate(State, StreamID, {internal_error, {Class, Exception},
					'Unhandled exception in cowboy_stream:info/3.'})
			end;
		false ->
			cowboy:log(warning, "Received message ~p for unknown stream ~p.~n",
				[Msg, StreamID], Opts),
			State
	end.

%% Commands.

commands(State, _, []) ->
	State;
%% Supervise a child process.
commands(State=#state{children=Children}, StreamID, [{spawn, Pid, Shutdown}|Tail]) ->
	commands(State#state{children=cowboy_children:up(Children, Pid, StreamID, Shutdown)},
		StreamID, Tail);
%% Error handling.
commands(State, StreamID, [Error = {internal_error, _, _}|Tail]) ->
	commands(stream_terminate(State, StreamID, Error), StreamID, Tail);
%% Commands for a stream currently inactive.
commands(State=#state{out_streamid=Current, streams=Streams0}, StreamID, Commands)
		when Current =/= StreamID ->

	%% @todo We still want to handle some commands...

	Stream = #stream{queue=Queue} = lists:keyfind(StreamID, #stream.id, Streams0),
	Streams = lists:keyreplace(StreamID, #stream.id, Streams0,
		Stream#stream{queue=Queue ++ Commands}),
	State#state{streams=Streams};
%% When we have finished reading the request body, do nothing.
commands(State=#state{flow=infinity}, StreamID, [{flow, _}|Tail]) ->
	commands(State, StreamID, Tail);
%% Read the request body.
commands(State0=#state{flow=Flow0}, StreamID, [{flow, Size}|Tail]) ->
	%% We must read *at least* Size of data otherwise functions
	%% like cowboy_req:read_body/1,2 will wait indefinitely.
	Flow = if
		Flow0 < 0 -> Size;
		true -> Flow0 + Size
	end,
	%% Reenable active mode if necessary.
	State = if
		Flow0 =< 0, Flow > 0 ->
			active(State0);
		true ->
			State0
	end,
	commands(State#state{flow=Flow}, StreamID, Tail);
%% Error responses are sent only if a response wasn't sent already.
commands(State=#state{out_state=wait, out_streamid=StreamID}, StreamID,
		[{error_response, Status, Headers0, Body}|Tail]) ->
	%% We close the connection when the error response is 408, as it
	%% indicates a timeout and the RFC recommends that we stop here. (RFC7231 6.5.7)
	Headers = case Status of
		408 -> Headers0#{<<"connection">> => <<"close">>};
		<<"408", _/bits>> -> Headers0#{<<"connection">> => <<"close">>};
		_ -> Headers0
	end,
	commands(State, StreamID, [{response, Status, Headers, Body}|Tail]);
commands(State, StreamID, [{error_response, _, _, _}|Tail]) ->
	commands(State, StreamID, Tail);
%% Send an informational response.
commands(State=#state{socket=Socket, transport=Transport, out_state=wait, streams=Streams},
		StreamID, [{inform, StatusCode, Headers}|Tail]) ->
	%% @todo I'm pretty sure the last stream in the list is the one we want
	%% considering all others are queued.
	#stream{version=Version} = lists:keyfind(StreamID, #stream.id, Streams),
	_ = case Version of
		'HTTP/1.1' ->
			Transport:send(Socket, cow_http:response(StatusCode, 'HTTP/1.1',
				headers_to_list(Headers)));
		%% Do not send informational responses to HTTP/1.0 clients. (RFC7231 6.2)
		'HTTP/1.0' ->
			ok
	end,
	commands(State, StreamID, Tail);
%% Send a full response.
%%
%% @todo Kill the stream if it sent a response when one has already been sent.
%% @todo Keep IsFin in the state.
%% @todo Same two things above apply to DATA, possibly promise too.
commands(State0=#state{socket=Socket, transport=Transport, out_state=wait, streams=Streams}, StreamID,
		[{response, StatusCode, Headers0, Body}|Tail]) ->
	%% @todo I'm pretty sure the last stream in the list is the one we want
	%% considering all others are queued.
	#stream{version=Version} = lists:keyfind(StreamID, #stream.id, Streams),
	{State1, Headers} = connection(State0, Headers0, StreamID, Version),
	State = State1#state{out_state=done},
	%% @todo Ensure content-length is set.
	Response = cow_http:response(StatusCode, 'HTTP/1.1', headers_to_list(Headers)),
	case Body of
		{sendfile, _, _, _} ->
			Transport:send(Socket, Response),
			sendfile(State, Body);
		_ ->
			Transport:send(Socket, [Response, Body])
	end,
	commands(State, StreamID, Tail);
%% Send response headers and initiate chunked encoding or streaming.
commands(State0=#state{socket=Socket, transport=Transport,
		opts=Opts, overriden_opts=Override, streams=Streams0, out_state=OutState},
		StreamID, [{headers, StatusCode, Headers0}|Tail]) ->
	%% @todo Same as above (about the last stream in the list).
	Stream = #stream{version=Version} = lists:keyfind(StreamID, #stream.id, Streams0),
	Status = cow_http:status_to_integer(StatusCode),
	ContentLength = maps:get(<<"content-length">>, Headers0, undefined),
	%% Chunked transfer-encoding can be disabled on a per-request basis.
	Chunked = case Override of
		#{chunked := Chunked0} -> Chunked0;
		_ -> maps:get(chunked, Opts, true)
	end,
	{State1, Headers1} = case {Status, ContentLength, Version} of
		{204, _, 'HTTP/1.1'} ->
			{State0#state{out_state=done}, Headers0};
		{304, _, 'HTTP/1.1'} ->
			{State0#state{out_state=done}, Headers0};
		{_, undefined, 'HTTP/1.1'} when Chunked ->
			{State0#state{out_state=chunked}, Headers0#{<<"transfer-encoding">> => <<"chunked">>}};
		%% Close the connection after streaming without content-length
		%% to all HTTP/1.0 clients and to HTTP/1.1 clients when chunked is disabled.
		{_, undefined, _} ->
			{State0#state{out_state=streaming, last_streamid=StreamID}, Headers0};
		%% Stream the response body without chunked transfer-encoding.
		_ ->
			ExpectedSize = cow_http_hd:parse_content_length(ContentLength),
			Streams = lists:keyreplace(StreamID, #stream.id, Streams0,
				Stream#stream{local_expected_size=ExpectedSize}),
			{State0#state{out_state=streaming, streams=Streams}, Headers0}
	end,
	Headers2 = case stream_te(OutState, Stream) of
		trailers -> Headers1;
		_ -> maps:remove(<<"trailer">>, Headers1)
	end,
	{State, Headers} = connection(State1, Headers2, StreamID, Version),
	Transport:send(Socket, cow_http:response(StatusCode, 'HTTP/1.1', headers_to_list(Headers))),
	commands(State, StreamID, Tail);
%% Send a response body chunk.
%% @todo We need to kill the stream if it tries to send data before headers.
commands(State0=#state{socket=Socket, transport=Transport, streams=Streams0, out_state=OutState},
		StreamID, [{data, IsFin, Data}|Tail]) ->
	%% Do not send anything when the user asks to send an empty
	%% data frame, as that would break the protocol.
	Size = case Data of
		{sendfile, _, B, _} -> B;
		_ -> iolist_size(Data)
	end,
	%% Depending on the current state we may need to send nothing,
	%% the last chunk, chunked data with/without the last chunk,
	%% or just the data as-is.
	Stream = case lists:keyfind(StreamID, #stream.id, Streams0) of
		Stream0=#stream{method= <<"HEAD">>} ->
			Stream0;
		Stream0 when Size =:= 0, IsFin =:= fin, OutState =:= chunked ->
			Transport:send(Socket, <<"0\r\n\r\n">>),
			Stream0;
		Stream0 when Size =:= 0 ->
			Stream0;
		Stream0 when is_tuple(Data), OutState =:= chunked ->
			Transport:send(Socket, [integer_to_binary(Size, 16), <<"\r\n">>]),
			sendfile(State0, Data),
			Transport:send(Socket,
				case IsFin of
					fin -> <<"\r\n0\r\n\r\n">>;
					nofin -> <<"\r\n">>
				end),
			Stream0;
		Stream0 when OutState =:= chunked ->
			Transport:send(Socket, [
				integer_to_binary(Size, 16), <<"\r\n">>, Data,
				case IsFin of
					fin -> <<"\r\n0\r\n\r\n">>;
					nofin -> <<"\r\n">>
				end
			]),
			Stream0;
		Stream0 when OutState =:= streaming ->
			#stream{local_sent_size=SentSize0, local_expected_size=ExpectedSize} = Stream0,
			SentSize = SentSize0 + Size,
			if
				%% ExpectedSize may be undefined, which is > any integer value.
				SentSize > ExpectedSize ->
					terminate(State0, response_body_too_large);
				is_tuple(Data) ->
					sendfile(State0, Data);
				true ->
					Transport:send(Socket, Data)
			end,
			Stream0#stream{local_sent_size=SentSize}
	end,
	State = case IsFin of
		fin -> State0#state{out_state=done};
		nofin -> State0
	end,
	Streams = lists:keyreplace(StreamID, #stream.id, Streams0, Stream),
	commands(State#state{streams=Streams}, StreamID, Tail);
commands(State=#state{socket=Socket, transport=Transport, streams=Streams, out_state=OutState},
		StreamID, [{trailers, Trailers}|Tail]) ->
	case stream_te(OutState, lists:keyfind(StreamID, #stream.id, Streams)) of
		trailers ->
			Transport:send(Socket, [
				<<"0\r\n">>,
				cow_http:headers(maps:to_list(Trailers)),
				<<"\r\n">>
			]);
		no_trailers ->
			Transport:send(Socket, <<"0\r\n\r\n">>);
		not_chunked ->
			ok
	end,
	commands(State#state{out_state=done}, StreamID, Tail);
%% Protocol takeover.
commands(State0=#state{ref=Ref, parent=Parent, socket=Socket, transport=Transport,
		out_state=OutState, opts=Opts, buffer=Buffer, children=Children}, StreamID,
		[{switch_protocol, Headers, Protocol, InitialState}|_Tail]) ->
	%% @todo If there's streams opened after this one, fail instead of 101.
	State1 = cancel_timeout(State0),
	%% Before we send the 101 response we need to stop receiving data
	%% from the socket, otherwise the data might be receive before the
	%% call to flush/0 and we end up inadvertently dropping a packet.
	%%
	%% @todo Handle cases where the request came with a body. We need
	%% to process or skip the body before the upgrade can be completed.
	State = passive(State1),
	%% Send a 101 response if necessary, then terminate the stream.
	#state{streams=Streams} = case OutState of
		wait -> info(State, StreamID, {inform, 101, Headers});
		_ -> State
	end,
	#stream{state=StreamState} = lists:keyfind(StreamID, #stream.id, Streams),
	%% @todo We need to shutdown processes here first.
	stream_call_terminate(StreamID, switch_protocol, StreamState, State),
	%% Terminate children processes and flush any remaining messages from the mailbox.
	cowboy_children:terminate(Children),
	flush(Parent),
	Protocol:takeover(Parent, Ref, Socket, Transport, Opts, Buffer, InitialState);
%% Set options dynamically.
commands(State0=#state{overriden_opts=Opts},
		StreamID, [{set_options, SetOpts}|Tail]) ->
	State1 = case SetOpts of
		#{idle_timeout := IdleTimeout} ->
			set_timeout(State0#state{overriden_opts=Opts#{idle_timeout => IdleTimeout}},
				idle_timeout);
		_ ->
			State0
	end,
	State = case SetOpts of
		#{chunked := Chunked} ->
			State1#state{overriden_opts=Opts#{chunked => Chunked}};
		_ ->
			State1
	end,
	commands(State, StreamID, Tail);
%% Stream shutdown.
commands(State, StreamID, [stop|Tail]) ->
	%% @todo Do we want to run the commands after a stop?
	%% @todo We currently wait for the stop command before we
	%% continue with the next request/response. In theory, if
	%% the request body was read fully and the response body
	%% was sent fully we should be able to start working on
	%% the next request concurrently. This can be done as a
	%% future optimization.
	maybe_terminate(State, StreamID, Tail);
%% Log event.
commands(State=#state{opts=Opts}, StreamID, [Log={log, _, _, _}|Tail]) ->
	cowboy:log(Log, Opts),
	commands(State, StreamID, Tail);
%% HTTP/1.1 does not support push; ignore.
commands(State, StreamID, [{push, _, _, _, _, _, _, _}|Tail]) ->
	commands(State, StreamID, Tail).

%% The set-cookie header is special; we can only send one cookie per header.
headers_to_list(Headers0=#{<<"set-cookie">> := SetCookies}) ->
	Headers1 = maps:to_list(maps:remove(<<"set-cookie">>, Headers0)),
	Headers1 ++ [{<<"set-cookie">>, Value} || Value <- SetCookies];
headers_to_list(Headers) ->
	maps:to_list(Headers).

%% We wrap the sendfile call into a try/catch because on OTP-20
%% and earlier a few different crashes could occur for sockets
%% that were closing or closed. For example a badarg in
%% erlang:port_get_data(#Port<...>) or a badmatch like
%% {{badmatch,{error,einval}},[{prim_file,sendfile,8,[]}...
%%
%% OTP-21 uses a NIF instead of a port so the implementation
%% and behavior has dramatically changed and it is unclear
%% whether it will be necessary in the future.
%%
%% This try/catch prevents some noisy logs to be written
%% when these errors occur.
sendfile(State=#state{socket=Socket, transport=Transport, opts=Opts},
		{sendfile, Offset, Bytes, Path}) ->
	try
		%% When sendfile is disabled we explicitly use the fallback.
		_ = case maps:get(sendfile, Opts, true) of
			true -> Transport:sendfile(Socket, Path, Offset, Bytes);
			false -> ranch_transport:sendfile(Transport, Socket, Path, Offset, Bytes, [])
		end,
		ok
	catch _:_ ->
		terminate(State, {socket_error, sendfile_crash,
			'An error occurred when using the sendfile function.'})
	end.

%% Flush messages specific to cowboy_http before handing over the
%% connection to another protocol.
flush(Parent) ->
	receive
		{timeout, _, _} ->
			flush(Parent);
		{{Pid, _}, _} when Pid =:= self() ->
			flush(Parent);
		{'EXIT', Pid, _} when Pid =/= Parent ->
			flush(Parent)
	after 0 ->
		ok
	end.

%% @todo In these cases I'm not sure if we should continue processing commands.
maybe_terminate(State=#state{last_streamid=StreamID}, StreamID, _Tail) ->
	terminate(stream_terminate(State, StreamID, normal), normal); %% @todo Reason ok?
maybe_terminate(State, StreamID, _Tail) ->
	stream_terminate(State, StreamID, normal).

stream_terminate(State0=#state{opts=Opts, in_streamid=InStreamID, in_state=InState,
		out_streamid=OutStreamID, out_state=OutState, streams=Streams0,
		children=Children0}, StreamID, Reason) ->
	#stream{version=Version, local_expected_size=ExpectedSize, local_sent_size=SentSize}
		= lists:keyfind(StreamID, #stream.id, Streams0),
	%% Send a response or terminate chunks depending on the current output state.
	State1 = #state{streams=Streams1} = case OutState of
		wait when element(1, Reason) =:= internal_error ->
			info(State0, StreamID, {response, 500, #{<<"content-length">> => <<"0">>}, <<>>});
		wait when element(1, Reason) =:= connection_error ->
			info(State0, StreamID, {response, 400, #{<<"content-length">> => <<"0">>}, <<>>});
		wait ->
			info(State0, StreamID, {response, 204, #{}, <<>>});
		chunked when Version =:= 'HTTP/1.1' ->
			info(State0, StreamID, {data, fin, <<>>});
		streaming when SentSize < ExpectedSize ->
			terminate(State0, response_body_too_small);
		_ -> %% done or Version =:= 'HTTP/1.0'
			State0
	end,
	%% Stop the stream, shutdown children and reset overriden options.
	{value, #stream{state=StreamState}, Streams}
		= lists:keytake(StreamID, #stream.id, Streams1),
	stream_call_terminate(StreamID, Reason, StreamState, State1),
	Children = cowboy_children:shutdown(Children0, StreamID),
	State = State1#state{overriden_opts=#{}, streams=Streams, children=Children},
	%% We want to drop the connection if the body was not read fully
	%% and we don't know its length or more remains to be read than
	%% configuration allows.
	MaxSkipBodyLength = maps:get(max_skip_body_length, Opts, 1000000),
	case InState of
		#ps_body{length=undefined}
				when InStreamID =:= OutStreamID ->
			terminate(State, skip_body_unknown_length);
		#ps_body{length=Len, received=Received}
				when InStreamID =:= OutStreamID, Received + MaxSkipBodyLength < Len ->
			terminate(State, skip_body_too_large);
		#ps_body{} when InStreamID =:= OutStreamID ->
			stream_next(State#state{flow=infinity});
		_ ->
			stream_next(State)
	end.

stream_next(State0=#state{opts=Opts, active=Active, out_streamid=OutStreamID, streams=Streams}) ->
	NextOutStreamID = OutStreamID + 1,
	case lists:keyfind(NextOutStreamID, #stream.id, Streams) of
		false ->
			State0#state{out_streamid=NextOutStreamID, out_state=wait};
		#stream{queue=Commands} ->
			State = case Active of
				true -> State0;
				false -> active(State0)
			end,
			%% @todo Remove queue from the stream.
			%% We set the flow to the initial flow size even though
			%% we might have sent some data through already due to pipelining.
			Flow = maps:get(initial_stream_flow_size, Opts, 65535),
			commands(State#state{flow=Flow, out_streamid=NextOutStreamID, out_state=wait},
				NextOutStreamID, Commands)
	end.

stream_call_terminate(StreamID, Reason, StreamState, #state{opts=Opts}) ->
	try
		cowboy_stream:terminate(StreamID, Reason, StreamState)
	catch Class:Exception:Stacktrace ->
		cowboy:log(cowboy_stream:make_error_log(terminate,
			[StreamID, Reason, StreamState],
			Class, Exception, Stacktrace), Opts)
	end.

maybe_req_close(#state{opts=#{http10_keepalive := false}}, _, 'HTTP/1.0') ->
	close;
maybe_req_close(_, #{<<"connection">> := Conn}, 'HTTP/1.0') ->
	Conns = cow_http_hd:parse_connection(Conn),
	case lists:member(<<"keep-alive">>, Conns) of
		true -> keepalive;
		false -> close
	end;
maybe_req_close(_, _, 'HTTP/1.0') ->
	close;
maybe_req_close(_, #{<<"connection">> := Conn}, 'HTTP/1.1') ->
	case connection_hd_is_close(Conn) of
		true -> close;
		false -> keepalive
	end;
maybe_req_close(_, _, _) ->
	keepalive.

connection(State=#state{last_streamid=StreamID}, Headers=#{<<"connection">> := Conn}, StreamID, _) ->
	case connection_hd_is_close(Conn) of
		true -> {State, Headers};
		%% @todo Here we need to remove keep-alive and add close, not just add close.
		false -> {State, Headers#{<<"connection">> => [<<"close, ">>, Conn]}}
	end;
connection(State=#state{last_streamid=StreamID}, Headers, StreamID, _) ->
	{State, Headers#{<<"connection">> => <<"close">>}};
connection(State, Headers=#{<<"connection">> := Conn}, StreamID, _) ->
	case connection_hd_is_close(Conn) of
		true -> {State#state{last_streamid=StreamID}, Headers};
		%% @todo Here we need to set keep-alive only if it wasn't set before.
		false -> {State, Headers}
	end;
connection(State, Headers, _, 'HTTP/1.0') ->
	{State, Headers#{<<"connection">> => <<"keep-alive">>}};
connection(State, Headers, _, _) ->
	{State, Headers}.

connection_hd_is_close(Conn) ->
	Conns = cow_http_hd:parse_connection(iolist_to_binary(Conn)),
	lists:member(<<"close">>, Conns).

stream_te(streaming, _) ->
	not_chunked;
%% No TE header was sent.
stream_te(_, #stream{te=undefined}) ->
	no_trailers;
stream_te(_, #stream{te=TE0}) ->
	try cow_http_hd:parse_te(TE0) of
		{TE1, _} -> TE1
	catch _:_ ->
		%% If we can't parse the TE header, assume we can't send trailers.
		no_trailers
	end.

%% This function is only called when an error occurs on a new stream.
-spec error_terminate(cowboy:http_status(), #state{}, _) -> no_return().
error_terminate(StatusCode, State=#state{ref=Ref, peer=Peer, in_state=StreamState}, Reason) ->
	PartialReq = case StreamState of
		#ps_request_line{} -> #{
			ref => Ref,
			peer => Peer
		};
		#ps_header{method=Method, path=Path, qs=Qs,
				version=Version, headers=ReqHeaders} -> #{
			ref => Ref,
			peer => Peer,
			method => Method,
			path => Path,
			qs => Qs,
			version => Version,
			headers => case ReqHeaders of
				undefined -> #{};
				_ -> ReqHeaders
			end
		}
	end,
	early_error(StatusCode, State, Reason, PartialReq, #{<<"connection">> => <<"close">>}),
	terminate(State, Reason).

early_error(StatusCode, State, Reason, PartialReq) ->
	early_error(StatusCode, State, Reason, PartialReq, #{}).

early_error(StatusCode0, #state{socket=Socket, transport=Transport,
		opts=Opts, in_streamid=StreamID}, Reason, PartialReq, RespHeaders0) ->
	RespHeaders1 = RespHeaders0#{<<"content-length">> => <<"0">>},
	Resp = {response, StatusCode0, RespHeaders1, <<>>},
	try cowboy_stream:early_error(StreamID, Reason, PartialReq, Resp, Opts) of
		{response, StatusCode, RespHeaders, RespBody} ->
			Transport:send(Socket, [
				cow_http:response(StatusCode, 'HTTP/1.1', maps:to_list(RespHeaders)),
				%% @todo We shouldn't send the body when the method is HEAD.
				%% @todo Technically we allow the sendfile tuple.
				RespBody
			])
	catch Class:Exception:Stacktrace ->
		cowboy:log(cowboy_stream:make_error_log(early_error,
			[StreamID, Reason, PartialReq, Resp, Opts],
			Class, Exception, Stacktrace), Opts),
		%% We still need to send an error response, so send what we initially
		%% wanted to send. It's better than nothing.
		Transport:send(Socket, cow_http:response(StatusCode0,
			'HTTP/1.1', maps:to_list(RespHeaders1)))
	end,
	ok.

-spec terminate(_, _) -> no_return().
terminate(undefined, Reason) ->
	exit({shutdown, Reason});
terminate(State=#state{streams=Streams, children=Children}, Reason) ->
	terminate_all_streams(State, Streams, Reason),
	cowboy_children:terminate(Children),
	terminate_linger(State),
	exit({shutdown, Reason}).

terminate_all_streams(_, [], _) ->
	ok;
terminate_all_streams(State, [#stream{id=StreamID, state=StreamState}|Tail], Reason) ->
	stream_call_terminate(StreamID, Reason, StreamState, State),
	terminate_all_streams(State, Tail, Reason).

terminate_linger(State=#state{socket=Socket, transport=Transport, opts=Opts}) ->
	case Transport:shutdown(Socket, write) of
		ok ->
			case maps:get(linger_timeout, Opts, 1000) of
				0 ->
					ok;
				infinity ->
					terminate_linger_before_loop(State, undefined, Transport:messages());
				Timeout ->
					TimerRef = erlang:start_timer(Timeout, self(), linger_timeout),
					terminate_linger_before_loop(State, TimerRef, Transport:messages())
			end;
		{error, _} ->
			ok
	end.

terminate_linger_before_loop(State, TimerRef, Messages) ->
	%% We may already be in active mode when we do this
	%% but it's OK because we are shutting down anyway.
	case setopts_active(State) of
		ok ->
			terminate_linger_loop(State, TimerRef, Messages);
		{error, _} ->
			ok
	end.

terminate_linger_loop(State=#state{socket=Socket}, TimerRef, Messages) ->
	receive
		{OK, Socket, _} when OK =:= element(1, Messages) ->
			terminate_linger_loop(State, TimerRef, Messages);
		{Closed, Socket} when Closed =:= element(2, Messages) ->
			ok;
		{Error, Socket, _} when Error =:= element(3, Messages) ->
			ok;
		{Passive, Socket} when Passive =:= tcp_passive; Passive =:= ssl_passive ->
			terminate_linger_before_loop(State, TimerRef, Messages);
		{timeout, TimerRef, linger_timeout} ->
			ok;
		_ ->
			terminate_linger_loop(State, TimerRef, Messages)
	end.

%% System callbacks.

-spec system_continue(_, _, #state{}) -> ok.
system_continue(_, _, State) ->
	loop(State).

-spec system_terminate(any(), _, _, {#state{}, binary()}) -> no_return().
system_terminate(Reason, _, _, State) ->
	terminate(State, {stop, {exit, Reason}, 'sys:terminate/2,3 was called.'}).

-spec system_code_change(Misc, _, _, _) -> {ok, Misc} when Misc::{#state{}, binary()}.
system_code_change(Misc, _, _, _) ->
	{ok, Misc}.
