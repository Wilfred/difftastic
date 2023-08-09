%% Note: this is copied from the Erlang compiler. I think it's ok to do
%% so if I preserve the copyright, right? Anyways, all code in this file
%% must be considered copyright Ericsson AB.
%%
%% %CopyrightBegin%
%%
%% Copyright Ericsson AB 1996-2021. All Rights Reserved.
%%
%% Licensed under the Apache License, Version 2.0 (the "License");
%% you may not use this file except in compliance with the License.
%% You may obtain a copy of the License at
%%
%%     http://www.apache.org/licenses/LICENSE-2.0
%%
%% Unless required by applicable law or agreed to in writing, software
%% distributed under the License is distributed on an "AS IS" BASIS,
%% WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
%% See the License for the specific language governing permissions and
%% limitations under the License.
%%
%% %CopyrightEnd%
%%
%% Purpose: Run the Erlang compiler.

-module(compile).

%% High-level interface.
-export([file/1,file/2,noenv_file/2,format_error/1]).
-export([forms/1,forms/2,noenv_forms/2]).
-export([output_generated/1,noenv_output_generated/1]).
-export([options/0]).
-export([env_compiler_options/0]).

%% Erlc interface.
-export([compile/3,compile_asm/3,compile_core/3,compile_abstr/3]).

%% Utility functions for compiler passes.
-export([run_sub_passes/2]).

-export_type([option/0]).
% ^ keyword
%             ^ function
-export_type([forms/0]).

-include("erl_compile.hrl").
% ^ keyword
%         ^ string
-include("core_parse.hrl").

-import(lists, [member/2,reverse/1,reverse/2,keyfind/3,last/1,
		map/2,flatmap/2,flatten/1,foreach/2,foldr/3,any/2]).

-define(SUB_PASS_TIMES, compile__sub_pass_times).
% ^ keyword
%        ^ constant
%                        ^ string.special.symbol

%%----------------------------------------------------------------------

-type abstract_code() :: [erl_parse:abstract_form()].
%                          ^ module
%                                  ^ operator
%                                    ^ function

-type forms() :: abstract_code() | cerl:c_module() | beam_disasm:asm_form().
%                                   ^ module
%                                        ^ function

-type option() :: atom() | {atom(), term()} | {'d', atom(), term()}.

-type error_description() :: erl_lint:error_description().
-type error_info() :: erl_lint:error_info().
-type errors()   :: [{file:filename(), [error_info()]}].
-type warnings() :: [{file:filename(), [error_info()]}].
-type mod_ret()  :: {'ok', module()}
                  | {'ok', module(), cerl:c_module()} %% with option 'to_core'
                  | {'ok',                            %% with option 'to_pp'
                     module() | [],                   %% module() if 'to_exp'
                     abstract_code()}
                  | {'ok', module(), warnings()}.
-type bin_ret()  :: {'ok', module(), binary()}
                  | {'ok', module(), binary(), warnings()}.
-type err_ret()  :: 'error' | {'error', errors(), warnings()}.
%                     ^ string.special.symbol
-type comp_ret() :: mod_ret() | bin_ret() | err_ret().


%%----------------------------------------------------------------------

%%
%%  Exported functions
%%


%% file(FileName)
%% file(FileName, Options)
%%  Compile the module in file FileName.

-define(DEFAULT_OPTIONS, [verbose,report_errors,report_warnings]).

-spec file(module() | file:filename()) -> comp_ret().

file(File) -> file(File, ?DEFAULT_OPTIONS).
% ^ function
%              ^ function

-spec file(module() | file:filename(), [option()] | option()) -> comp_ret().

file(File, Opts) when is_list(Opts) ->
% ^ function
%     ^ variable
%           ^ variable
%                 ^ keyword
%                       ^ function
%                              ^ variable
    do_compile({file,File}, Opts++env_default_opts());
%    ^ function
%                                ^ operator
%                                                    ^ punctuation.delimiter
file(File, Opt) ->
    file(File, [Opt|?DEFAULT_OPTIONS]).
%                  ^ operator
%                     ^ constant

-spec forms(abstract_code()) -> comp_ret().

forms(Forms) -> forms(Forms, ?DEFAULT_OPTIONS).

-spec forms(forms(), [option()] | option()) -> comp_ret().

forms(Forms, Opts) when is_list(Opts) ->
    do_compile({forms,Forms}, [binary|Opts++env_default_opts()]);
forms(Forms, Opt) when is_atom(Opt) ->
    forms(Forms, [Opt|?DEFAULT_OPTIONS]).

%% Given a list of compilation options, returns true if compile:file/2
%% would have generated a Beam file, false otherwise (if only a binary or a
%% listing file would have been generated).

-spec output_generated([option()]) -> boolean().

output_generated(Opts) ->
    noenv_output_generated(Opts++env_default_opts()).

%%
%% Variants of the same function that don't consult ERL_COMPILER_OPTIONS
%% for default options.
%%

-spec noenv_file(module() | file:filename(), [option()] | option()) -> comp_ret().

noenv_file(File, Opts) when is_list(Opts) ->
    do_compile({file,File}, Opts);
noenv_file(File, Opt) ->
    noenv_file(File, [Opt|?DEFAULT_OPTIONS]).

-spec noenv_forms(forms(), [option()] | option()) -> comp_ret().

noenv_forms(Forms, Opts) when is_list(Opts) ->
    do_compile({forms,Forms}, [binary|Opts]);
noenv_forms(Forms, Opt) when is_atom(Opt) ->
    noenv_forms(Forms, [Opt|?DEFAULT_OPTIONS]).

-spec noenv_output_generated([option()]) -> boolean().

noenv_output_generated(Opts) ->
    {_,Passes} = passes(file, expand_opts(Opts)),
    any(fun ({save_binary,_T,_F}) -> true;
	    (_Other) -> false
	end, Passes).

%%
%% Retrieve ERL_COMPILER_OPTIONS as a list of terms
%%

-spec env_compiler_options() -> [term()].

env_compiler_options() -> env_default_opts().


%%%
%%% Run sub passes from a compiler pass.
%%%

-spec run_sub_passes([term()], term()) -> term().

run_sub_passes(Ps, St) ->
    case get(?SUB_PASS_TIMES) of
%     ^ keyword
%                              ^ keyword
        undefined ->
            Runner = fun(_Name, Run, S) -> Run(S) end,
%                     ^ keyword
%                                        ^ operator
%                                                  ^ keyword
            run_sub_passes_1(Ps, Runner, St);
        Times when is_list(Times) ->
%              ^ keyword
            Runner = fun(Name, Run, S0) ->
%                     ^ keyword
                             T1 = erlang:monotonic_time(),
%                               ^ operator
                             S = Run(S0),
                             T2 = erlang:monotonic_time(),
                             put(?SUB_PASS_TIMES,
                                 [{Name,T2-T1}|get(?SUB_PASS_TIMES)]),
%                                         ^ operator
                             S
                     end,
%                     ^ keyword
            run_sub_passes_1(Ps, Runner, St)
    end.

%%
%%  Local functions
%%

-define(pass(P), {P,fun P/2}).
%        ^ keyword.directive
%                    ^ keyword
%                        ^ operator
%                         ^ number
-define(pass(P,T), {P,fun T/1,fun P/2}).

env_default_opts() ->
    Key = "ERL_COMPILER_OPTIONS",
    case os:getenv(Key) of
	false -> [];
	Str when is_list(Str) ->
	    case erl_scan:string(Str) of
		{ok,Tokens,_} ->
                    Dot = {dot, erl_anno:new(1)},
		    case erl_parse:parse_term(Tokens ++ [Dot]) of
			{ok,List} when is_list(List) -> List;
			{ok,Term} -> [Term];
			{error,_Reason} ->
			    io:format("Ignoring bad term in ~s\n", [Key]),
			    []
		    end;
		{error, {_,_,_Reason}, _} ->
		    io:format("Ignoring bad term in ~s\n", [Key]),
		    []
	    end
    end.

do_compile(Input, Opts0) ->
    Opts = expand_opts(Opts0),
    IntFun = internal_fun(Input, Opts),

    %% Some tools, like Dialyzer, has already spawned workers
    %% and spawning extra workers actually slow the compilation
    %% down instead of speeding it up, so we provide a mechanism
    %% to bypass the compiler process.
    case lists:member(no_spawn_compiler_process, Opts) of
        true ->
            IntFun();
        false ->
            {Pid,Ref} =
                spawn_monitor(fun() ->
                                      exit(IntFun())
                              end),
            receive
%              ^ keyword
                {'DOWN',Ref,process,Pid,Rep} -> Rep
            end
    end.

internal_fun(Input, Opts) ->
    fun() ->
            try
                internal(Input, Opts)
            catch
                Class:Reason:Stk ->
%                    ^ operator
%                           ^ operator
%                                 ^ operator
                    internal_error(Class, Reason, Stk)
            end
    end.

internal_error(Class, Reason, Stk) ->
    Error = ["\n*** Internal compiler error ***\n",
             format_error_reason(Class, Reason, Stk),
             "\n"],
    io:put_chars(Error),
    error.

expand_opts(Opts0) ->
    %% {debug_info_key,Key} implies debug_info.
    Opts = case {proplists:get_value(debug_info_key, Opts0),
		 proplists:get_value(encrypt_debug_info, Opts0),
		 proplists:get_value(debug_info, Opts0)} of
           {undefined,undefined,_} -> Opts0;
%                               ^ comment.discard
           % something's off about that token, it should be pointing at the '_'
	       {_,_,undefined} -> [debug_info|Opts0];
	       {_,_,_} -> Opts0
	   end,
    %% iff,unless processing is to complex...
    Opts1 = case proplists:is_defined(makedep_side_effect,Opts) of
                true -> proplists:delete(makedep,Opts);
                false -> Opts
            end,
    foldr(fun expand_opt/2, [], Opts1).
%                ^ function
%                       ^ operator

expand_opt(basic_validation, Os) ->
    [no_code_generation,to_pp,binary|Os];
expand_opt(strong_validation, Os) ->
    [no_code_generation,to_kernel,binary|Os];
expand_opt(report, Os) ->
    [report_errors,report_warnings|Os];
expand_opt(return, Os) ->
    [return_errors,return_warnings|Os];
expand_opt(no_bsm3, Os) ->
    %% The new bsm pass requires bsm3 instructions.
    [no_bsm3,no_bsm_opt|expand_opt(no_bsm4, Os)];
expand_opt(no_bsm4, Os) ->
    %% bsm4 instructions are only used when type optimization has determined
    %% that a match instruction won't fail.
    expand_opt(no_type_opt, Os);
expand_opt(r22, Os) ->
    expand_opt(r23, [no_bs_create_bin, no_shared_fun_wrappers,
                     no_swap | expand_opt(no_bsm4, Os)]);
expand_opt(r23, Os) ->
    expand_opt(no_make_fun3, [no_bs_create_bin, no_ssa_opt_float,
                              no_recv_opt, no_init_yregs |
                              expand_opt(r24, Os)]);
expand_opt(r24, Os) ->
    expand_opt(no_type_opt, [no_bs_create_bin, no_ssa_opt_ranges | Os]);
expand_opt(no_make_fun3, Os) ->
    [no_make_fun3, no_fun_opt | Os];
expand_opt({debug_info_key,_}=O, Os) ->
    [encrypt_debug_info,O|Os];
expand_opt(no_type_opt=O, Os) ->
    %% Be sure to keep the no_type_opt option so that it will
    %% be recorded in the BEAM file, allowing the test suites
    %% to recompile the file with this option.
    [O,no_ssa_opt_type_start,
     no_ssa_opt_type_continue,
     no_ssa_opt_type_finish | Os];
expand_opt(no_module_opt=O, Os) ->
    [O,no_recv_opt | Os];
expand_opt(O, Os) -> [O|Os].

-spec format_error(error_description()) -> iolist().

format_error({obsolete_option,Ver}) ->
    io_lib:fwrite("the ~p option is no longer supported", [Ver]);
format_error(no_crypto) ->
    "this system is not configured with crypto support.";
format_error(bad_crypto_key) ->
    "invalid crypto key.";
format_error(no_crypto_key) ->
    "no crypto key supplied.";
format_error({open,E}) ->
    io_lib:format("open error '~ts'", [file:format_error(E)]);
format_error({epp,E}) ->
    epp:format_error(E);
format_error(write_error) ->
    "error writing file";
format_error({write_error, Error}) ->
    io_lib:format("error writing file: ~ts", [file:format_error(Error)]);
format_error({rename,From,To,Error}) ->
    io_lib:format("failed to rename ~ts to ~ts: ~ts",
		  [From,To,file:format_error(Error)]);
format_error({parse_transform,M,{C,R,Stk}}) ->
    E = format_error_reason(C, R, Stk),
    io_lib:format("error in parse transform '~ts':\n~ts", [M, E]);
format_error({undef_parse_transform,M}) ->
    io_lib:format("undefined parse transform '~ts'", [M]);
format_error({core_transform,M,{C,R,Stk}}) ->
    E = format_error_reason(C, R, Stk),
    io_lib:format("error in core transform '~s':\n~ts", [M, E]);
format_error({crash,Pass,Reason,Stk}) ->
    io_lib:format("internal error in pass ~p:\n~ts", [Pass,format_error_reason({Reason, Stk})]);
format_error({bad_return,Pass,Reason}) ->
    io_lib:format("internal error in pass ~p: bad return value:\n~tP", [Pass,Reason,20]);
format_error({module_name,Mod,Filename}) ->
    io_lib:format("Module name '~s' does not match file name '~ts'", [Mod,Filename]).

format_error_reason({Reason, Stack}) when is_list(Stack) ->
    format_error_reason(error, Reason, Stack).

format_error_reason(Class, Reason, Stack) ->
    StackFun = fun
    (escript, run,      2) -> true;
    (escript, start,    1) -> true;
    (init,    start_it, 1) -> true;
    (init,    start_em, 1) -> true;
    (_Mod, _Fun, _Arity)   -> false
%     ^ comment.discard
    end,
    FormatFun = fun (Term, _) -> io_lib:format("~tp", [Term]) end,
    Opts = #{stack_trim_fun => StackFun,
             format_fun => FormatFun},
    erl_error:format_exception(Class, Reason, Stack, Opts).

%% The compile state record.
-record(compile, {filename="" :: file:filename(),
%        ^ type
%                  ^ property
          dir=""      :: file:filename(),
%          ^ property
          base=""     :: file:filename(),
%          ^ property
          ifile=""    :: file:filename(),
%          ^ property
          ofile=""    :: file:filename(),
%          ^ property
          module=[]   :: module() | [],
%          ^ property
          abstract_code=[] :: abstract_code(), %Abstract code for debugger.
%          ^ property
          options=[]  :: [option()],  %Options for compilation
%          ^ property
          mod_options=[]  :: [option()], %Options for module_info
%          ^ property
                  encoding=none :: none | epp:source_encoding(),
%                    ^ property
          errors=[]     :: errors(),
%           ^ property
          warnings=[]   :: warnings(),
%           ^ property
          extra_chunks=[] :: [{binary(), binary()}]}).
%           ^ property

internal({forms,Forms}, Opts0) ->
    {_,Ps} = passes(forms, Opts0),
    Source = proplists:get_value(source, Opts0, ""),
    Opts1 = proplists:delete(source, Opts0),
    Compile = build_compile(Opts1),
    NewForms = case with_columns(Opts0) of
                   true ->
                       Forms;
                   false ->
                       strip_columns(Forms)
               end,
    internal_comp(Ps, NewForms, Source, "", Compile);
internal({file,File}, Opts) ->
    {Ext,Ps} = passes(file, Opts),
    Compile = build_compile(Opts),
    internal_comp(Ps, none, File, Ext, Compile).

build_compile(Opts0) ->
    ExtraChunks = proplists:get_value(extra_chunks, Opts0, []),
    Opts1 = proplists:delete(extra_chunks, Opts0),
    #compile{options=Opts1,mod_options=Opts1,extra_chunks=ExtraChunks}.
%             ^ property
%                           ^ property
%                                             ^ property

internal_comp(Passes, Code0, File, Suffix, St0) ->
    Dir = filename:dirname(File),
    Base = filename:basename(File, Suffix),
    St1 = St0#compile{filename=File, dir=Dir, base=Base,
%                      ^ property
%                                     ^ property
%                                              ^ property
		      ifile=erlfile(Dir, Base, Suffix),
		      ofile=objfile(Base, St0)},
    Run = runner(File, St1),
    case fold_comp(Passes, Run, Code0, St1) of
        {ok,Code,St2} -> comp_ret_ok(Code, St2);
        {error,St2} -> comp_ret_err(St2)
    end.

fold_comp([{delay,Ps0}|Passes], Run, Code, #compile{options=Opts}=St) ->
%                                                     ^ property
    Ps = select_passes(Ps0, Opts) ++ Passes,
    fold_comp(Ps, Run, Code, St);
fold_comp([{Name,Test,Pass}|Ps], Run, Code, St) ->
    case Test(St) of
	false ->				%Pass is not needed.
	    fold_comp(Ps, Run, Code, St);
	true ->					%Run pass in the usual way.
	    fold_comp([{Name,Pass}|Ps], Run, Code, St)
    end;
fold_comp([{Name,Pass}|Ps], Run, Code0, St0) ->
    try Run({Name,Pass}, Code0, St0) of
	{ok,Code,St1} ->
            fold_comp(Ps, Run, Code, St1);
	{error,_St1}=Error ->
            Error
    catch
        error:Reason:Stk ->
	    Es = [{St0#compile.ifile,[{none,?MODULE,{crash,Name,Reason,Stk}}]}],
	    {error,St0#compile{errors=St0#compile.errors ++ Es}}
    end;
fold_comp([], _Run, Code, St) -> {ok,Code,St}.

run_sub_passes_1([{Name,Run}|Ps], Runner, St0)
  when is_atom(Name), is_function(Run, 1) ->
    try Runner(Name, Run, St0) of
        St ->
            run_sub_passes_1(Ps, Runner, St)
    catch
        C:E:Stk ->
            io:format("Sub pass ~s\n", [Name]),
            erlang:raise(C, E, Stk)
    end;
run_sub_passes_1([], _, St) -> St.

runner(File, #compile{options=Opts}) ->
    Run0 = fun({_Name,Fun}, Code, St) ->
                   Fun(Code, St)
           end,
    Run1 = case member(time, Opts) of
               true  ->
                   case File of
                       none -> ok;
                       _ -> io:format("Compiling ~ts\n", [File])
                   end,
                   fun run_tc/3;
               false ->
                   Run0
           end,
    case keyfind(eprof, 1, Opts) of
        {eprof,EprofPass} ->
            fun(P, Code, St) ->
                    run_eprof(P, Code, EprofPass, St)
            end;
        false ->
            Run1
    end.

run_tc({Name,Fun}, Code, St) ->
    OldTimes = put(?SUB_PASS_TIMES, []),
    T1 = erlang:monotonic_time(),
    Val = Fun(Code, St),
    T2 = erlang:monotonic_time(),
    Times = get(?SUB_PASS_TIMES),
    case OldTimes of
        undefined -> erase(?SUB_PASS_TIMES);
        _ -> put(?SUB_PASS_TIMES, OldTimes)
    end,
    Elapsed = erlang:convert_time_unit(T2 - T1, native, microsecond),
    Mem0 = erts_debug:flat_size(Val)*erlang:system_info(wordsize),
    Mem = lists:flatten(io_lib:format("~.1f kB", [Mem0/1024])),
    io:format(" ~-30s: ~10.3f s ~12s\n",
	      [Name,Elapsed/1000000,Mem]),
    print_times(Times, Name),
    Val.

print_times(Times0, Name) ->
    Fam0 = rel2fam(Times0),
    Fam1 = [{W,lists:sum(Times)} || {W,Times} <- Fam0],
    Fam = reverse(lists:keysort(2, Fam1)),
    Total = case lists:sum([T || {_,T} <- Fam]) of
                0 -> 1;
                Total0 -> Total0
            end,
    case Fam of
        [] ->
            ok;
        [_|_] ->
            io:format("    %% Sub passes of ~s from slowest to fastest:\n", [Name]),
            print_times_1(Fam, Total)
    end.

print_times_1([{Name,T}|Ts], Total) ->
    Elapsed = erlang:convert_time_unit(T, native, microsecond),
    io:format("    ~-27s: ~10.3f s ~3w %\n",
              [Name,Elapsed/1000000,round(100*T/Total)]),
    print_times_1(Ts, Total);
print_times_1([], _Total) -> ok.

run_eprof({Name,Fun}, Code, Name, St) ->
    io:format("~p: Running eprof\n", [Name]),
    c:appcall(tools, eprof, start_profiling, [[self()]]),
    try
        Fun(Code, St)
    after
        c:appcall(tools, eprof, stop_profiling, []),
        c:appcall(tools, eprof, analyze, [])
    end;
run_eprof({_,Fun}, Code, _, St) ->
    Fun(Code, St).

comp_ret_ok(Code, #compile{warnings=Warn0,module=Mod,options=Opts}=St) ->
    Warn1 = filter_warnings(Warn0, Opts),
    case werror(St) of
        true ->
            case member(report_warnings, Opts) of
                true ->
		    io:format("~p: warnings being treated as errors\n",
			      [?MODULE]);
                false ->
		    ok
            end,
            comp_ret_err(St);
        false ->
            Warn = messages_per_file(Warn1),
            report_warnings(St#compile{warnings = Warn}),
            Ret1 = case member(binary, Opts) andalso
%                                             ^ keyword.operator
               not member(no_code_generation, Opts) of
%               ^ operator
                       true -> [Code];
                       false -> []
                   end,
            Ret2 = case member(return_warnings, Opts) of
                       true -> Ret1 ++ [Warn];
                       false -> Ret1
                   end,
            list_to_tuple([ok,Mod|Ret2])
    end.

comp_ret_err(#compile{warnings=Warn0,errors=Err0,options=Opts}=St) ->
    Warn = messages_per_file(Warn0),
    Err = messages_per_file(Err0),
    report_errors(St#compile{errors=Err}),
    report_warnings(St#compile{warnings=Warn}),
    case member(return_errors, Opts) of
	true -> {error,Err,Warn};
	false -> error
    end.

not_werror(St) -> not werror(St).
%                  ^ operator

werror(#compile{options=Opts,warnings=Ws}) ->
    Ws =/= [] andalso member(warnings_as_errors, Opts).
%       ^ operator
%               ^ keyword.operator

%% messages_per_file([{File,[Message]}]) -> [{File,[Message]}]
messages_per_file(Ms) ->
    T = lists:sort([{File,M} || {File,Messages} <- Ms, M <- Messages]),
%                             ^ operator
%                                                ^ operator
%                                                        ^ operator
    PrioMs = [erl_scan, epp, erl_parse],
    {Prio0, Rest} =
        lists:mapfoldl(fun(M, A) ->
                               lists:partition(fun({_,{_,Mod,_}}) -> Mod =:= M;
                                                  (_) -> false
                                               end, A)
                       end, T, PrioMs),
    Prio = lists:sort(fun({_,{L1,_,_}}, {_,{L2,_,_}}) -> L1 =< L2 end,
                      lists:append(Prio0)),
    flatmap(fun mpf/1, [Prio, Rest]).

mpf(Ms) ->
    [{File,[M || {F,M} <- Ms, F =:= File]} ||
%              ^ operator
%                       ^ operator
%                                ^ operator
%                                           ^ operator
    File <- lists:usort([F || {F,_} <- Ms])].
%        ^ operator
%                           ^ operator
%                                    ^ operator

%% passes(forms|file, [Option]) -> {Extension,[{Name,PassFun}]}
%%  Figure out the extension of the input file and which passes
%%  that need to be run.

passes(Type, Opts) ->
    {Ext,Passes0} = passes_1(Opts),

    Passes1 = case Type of
                  file ->
                      Passes0;
                  forms ->
                      fix_first_pass(Passes0)
              end,

    Passes2 = select_passes(Passes1, Opts),

    %% If the last pass saves the resulting binary to a file,
    %% insert a first pass to remove the file.
    Passes = case last(Passes2) of
                 {save_binary, _TestFun, _Fun} ->
                     [?pass(remove_file) | Passes2];
%                       ^ keyword.directive
                 _ ->
                     Passes2
             end,

    {Ext, Passes}.

passes_1([Opt|Opts]) ->
    case pass(Opt) of
	{_,_}=Res -> Res;
	none -> passes_1(Opts)
    end;
passes_1([]) ->
    {".erl",[?pass(parse_module)|standard_passes()]}.

pass(from_abstr) ->
    {".abstr", [?pass(consult_abstr) | abstr_passes(non_verified_abstr)]};
pass(from_core) ->
    {".core",[?pass(parse_core)|core_passes(non_verified_core)]};
pass(from_asm) ->
    {".S",[?pass(beam_consult_asm)|asm_passes()]};
pass(_) -> none.

%% For compilation from forms, replace the first pass with a pass
%% that retrieves the module name. The module name is needed for
%% proper diagnostics.

fix_first_pass([{consult_abstr, _} | Passes]) ->
    %% Simply remove this pass. The module name will be set after
    %% running the v3_core pass.
    Passes;
fix_first_pass([{parse_core,_}|Passes]) ->
    [?pass(get_module_name_from_core)|Passes];
fix_first_pass([{beam_consult_asm,_}|Passes]) ->
    [?pass(get_module_name_from_asm)|Passes];
fix_first_pass([_|Passes]) ->
    %% When compiling from abstract code, the module name
    %% will be set after running the v3_core pass.
    Passes.


%% select_passes([Command], Opts) -> [{Name,Function}]
%%  Interpret the lists of commands to return a pure list of passes.
%%
%%  Command can be one of:
%%
%%    {pass,Mod}	Will be expanded to a call to the external
%%			function Mod:module(Code, Options).  This
%%			function must transform the code and return
%%			{ok,NewCode} or {ok,NewCode,Warnings}.
%%			Example: {pass,beam_ssa_codegen}
%%
%%    {Name,Fun}	Name is an atom giving the name of the pass.
%%    			Fun is an 'fun' taking one argument: a #compile{} record.
%%			The fun should return {ok,NewCompileRecord} or
%%			{error,NewCompileRecord}.
%%			Note: ?pass(Name) is equvivalent to {Name,fun Name/1}.
%%			Example: ?pass(parse_module)
%%
%%    {Name,Test,Fun}	Like {Name,Fun} above, but the pass will be run
%%			(and listed by the `time' option) only if Test(St)
%%			returns true.
%%
%%    {src_listing,Ext}	Produces an Erlang source listing with the
%%			the file extension Ext.  (Ext should not contain
%%			a period.)  No more passes will be run.
%%
%%    {listing,Ext}	Produce an listing of the terms in the internal
%%			representation.  The extension of the listing
%%			file will be Ext.  (Ext should not contain
%%			a period.)   No more passes will be run.
%%
%%    done              End compilation at this point.
%%
%%    {done,Ext}        End compilation at this point. Produce a listing
%%                      as with {listing,Ext}, unless 'binary' is
%%                      specified, in which case the current
%%                      representation of the code is returned without
%%                      creating an output file.
%%
%%    {iff,Flag,Cmd}	If the given Flag is given in the option list,
%%			Cmd will be interpreted as a command.
%%			Otherwise, Cmd will be ignored.
%%			Example: {iff,dcg,{listing,"codegen}}
%%
%%    {unless,Flag,Cmd}	If the given Flag is NOT given in the option list,
%%			Cmd will be interpreted as a command.
%%			Otherwise, Cmd will be ignored.
%%			Example: {unless,no_kernopt,{pass,sys_kernopt}}
%%

select_passes([{pass,Mod}|Ps], Opts) ->
    F = fun(Code0, St) ->
		case Mod:module(Code0, St#compile.options) of
		    {ok,Code} ->
			{ok,Code,St};
		    {ok,Code,Ws} ->
			{ok,Code,St#compile{warnings=St#compile.warnings++Ws}};
                    Other ->
                        Es = [{St#compile.ifile,[{none,?MODULE,{bad_return,Mod,Other}}]}],
                        {error,St#compile{errors=St#compile.errors ++ Es}}
		end
	end,
    [{Mod,F}|select_passes(Ps, Opts)];
select_passes([{_,Fun}=P|Ps], Opts) when is_function(Fun) ->
    [P|select_passes(Ps, Opts)];
select_passes([{_,Test,Fun}=P|Ps], Opts) when is_function(Test),
					      is_function(Fun) ->
    [P|select_passes(Ps, Opts)];
select_passes([{src_listing,Ext}|_], _Opts) ->
    [{listing,fun (Code, St) -> src_listing(Ext, Code, St) end}];
select_passes([{listing,Ext}|_], _Opts) ->
    [{listing,fun (Code, St) -> listing(Ext, Code, St) end}];
select_passes([done|_], _Opts) ->
    [];
select_passes([{done,Ext}|_], Opts) ->
    select_passes([{unless,binary,{listing,Ext}}], Opts);
select_passes([{iff,Flag,Pass}|Ps], Opts) ->
    select_cond(Flag, true, Pass, Ps, Opts);
select_passes([{unless,Flag,Pass}|Ps], Opts) ->
    select_cond(Flag, false, Pass, Ps, Opts);
select_passes([{delay,Passes0}|Ps], Opts) when is_list(Passes0) ->
    %% Delay evaluation of compiler options and which compiler passes to run.
    %% Since we must know beforehand whether a listing will be produced, we
    %% will go through the list of passes and evaluate all conditions that
    %% select a list pass.
    case select_list_passes(Passes0, Opts) of
	{done,Passes} ->
	    [{delay,Passes}];
	{not_done,Passes} ->
	    [{delay,Passes}|select_passes(Ps, Opts)]
    end;
select_passes([], _Opts) ->
    [];
select_passes([List|Ps], Opts) when is_list(List) ->
    case select_passes(List, Opts) of
	[] -> select_passes(Ps, Opts);
	Nested ->
	    case last(Nested) of
		{listing,_Fun} -> Nested;
		_Other         -> Nested ++ select_passes(Ps, Opts)
	    end
    end.

select_cond(Flag, ShouldBe, Pass, Ps, Opts) ->
    ShouldNotBe = not ShouldBe,
    case member(Flag, Opts) of
	ShouldBe    -> select_passes([Pass|Ps], Opts);
	ShouldNotBe -> select_passes(Ps, Opts)
    end.

%% select_list_passes([Pass], Opts) -> {done,[Pass]} | {not_done,[Pass]}
%%  Evaluate all conditions having to do with listings in the list of
%%  passes.

select_list_passes(Ps, Opts) ->
    select_list_passes_1(Ps, Opts, []).

select_list_passes_1([{iff,Flag,{listing,_}=Listing}|Ps], Opts, Acc) ->
    case member(Flag, Opts) of
	true -> {done,reverse(Acc, [Listing])};
	false -> select_list_passes_1(Ps, Opts, Acc)
    end;
select_list_passes_1([{iff,Flag,{done,Ext}}|Ps], Opts, Acc) ->
    case member(Flag, Opts) of
	false ->
	    select_list_passes_1(Ps, Opts, Acc);
	true ->
	    {done,case member(binary, Opts) of
		      false -> reverse(Acc, [{listing,Ext}]);
		      true -> reverse(Acc)
		  end}
    end;
select_list_passes_1([{iff=Op,Flag,List0}|Ps], Opts, Acc) when is_list(List0) ->
    case select_list_passes(List0, Opts) of
	{done,List} -> {done,reverse(Acc) ++ List};
	{not_done,List} -> select_list_passes_1(Ps, Opts, [{Op,Flag,List}|Acc])
    end;
select_list_passes_1([{unless=Op,Flag,List0}|Ps], Opts, Acc) when is_list(List0) ->
    case select_list_passes(List0, Opts) of
	{done,List} -> {done,reverse(Acc) ++ List};
	{not_done,List} -> select_list_passes_1(Ps, Opts, [{Op,Flag,List}|Acc])
    end;
select_list_passes_1([P|Ps], Opts, Acc) ->
    select_list_passes_1(Ps, Opts, [P|Acc]);
select_list_passes_1([], _, Acc) ->
    {not_done,reverse(Acc)}.

%% The standard passes (almost) always run.

standard_passes() ->
    [?pass(transform_module),

     {iff,makedep_side_effect,?pass(makedep_and_output)},
     {iff,makedep,[
	 ?pass(makedep),
	 {unless,binary,?pass(makedep_output)}
       ]},
     {iff,makedep,done},

     {iff,'dpp',{listing,"pp"}},
     ?pass(lint_module),

     {iff,'P',{src_listing,"P"}},
     {iff,'to_pp',{done,"P"}},

     {iff,'dabstr',{listing,"abstr"}}
     | abstr_passes(verified_abstr)].

abstr_passes(AbstrStatus) ->
    case AbstrStatus of
        non_verified_abstr -> [{unless, no_lint, ?pass(lint_module)}];
        verified_abstr -> []
    end ++
        [
         %% Add all -compile() directives to #compile.options
         ?pass(compile_directives),

         {delay,[{iff,debug_info,?pass(save_abstract_code)}]},

         ?pass(expand_records),
         {iff,'dexp',{listing,"expand"}},
         {iff,'E',?pass(legalize_vars)},
         {iff,'E',{src_listing,"E"}},
         {iff,'to_exp',{done,"E"}},

         %% Conversion to Core Erlang.
         ?pass(core),
         {iff,'dcore',{listing,"core"}},
         {iff,'to_core0',{done,"core"}}
         | core_passes(verified_core)].

core_passes(CoreStatus) ->
    %% Optimization and transforms of Core Erlang code.
    case CoreStatus of
        non_verified_core ->
            [?pass(core_lint_module),
             {unless,no_core_prepare,{pass,sys_core_prepare}},
             {iff,dprep,{listing,"prepare"}}];
        verified_core ->
            [{iff,clint0,?pass(core_lint_module)}]
    end ++
        [
         {delay,
          [{unless,no_copt,
            [{core_old_inliner,fun test_old_inliner/1,fun core_old_inliner/2},
             {iff,doldinline,{listing,"oldinline"}},
             {unless,no_fold,{pass,sys_core_fold}},
             {iff,dcorefold,{listing,"corefold"}},
             {core_inline_module,fun test_core_inliner/1,fun core_inline_module/2},
             {iff,dinline,{listing,"inline"}},
             {core_fold_after_inlining,fun test_any_inliner/1,
              fun core_fold_module_after_inlining/2},
             {iff,dcopt,{listing,"copt"}},
             {unless,no_alias,{pass,sys_core_alias}},
             {iff,dalias,{listing,"core_alias"}},
             ?pass(core_transforms)]},
           {iff,'to_core',{done,"core"}}]}
         | kernel_passes()].

kernel_passes() ->
    %% Optimizations that must be done after all other optimizations.
    [{pass,sys_core_bsm},
     {iff,dcbsm,{listing,"core_bsm"}},

     {iff,clint,?pass(core_lint_module)},

     %% Kernel Erlang and code generation.
     ?pass(v3_kernel),
     {iff,dkern,{listing,"kernel"}},
     {iff,'to_kernel',{done,"kernel"}},
     {pass,beam_kernel_to_ssa},
     {iff,dssa,{listing,"ssa"}},
     {iff,ssalint,{pass,beam_ssa_lint}},
     {delay,
      [{unless,no_bool_opt,{pass,beam_ssa_bool}},
       {iff,dbool,{listing,"bool"}},
       {unless,no_bool_opt,{iff,ssalint,{pass,beam_ssa_lint}}},

       {unless,no_share_opt,{pass,beam_ssa_share}},
       {iff,dssashare,{listing,"ssashare"}},
       {unless,no_share_opt,{iff,ssalint,{pass,beam_ssa_lint}}},

       {unless,no_recv_opt,{pass,beam_ssa_recv}},
       {iff,drecv,{listing,"recv"}},
       {unless,no_recv_opt,{iff,ssalint,{pass,beam_ssa_lint}}},

       {unless,no_bsm_opt,{pass,beam_ssa_bsm}},
       {iff,dssabsm,{listing,"ssabsm"}},
       {unless,no_bsm_opt,{iff,ssalint,{pass,beam_ssa_lint}}},

       {unless,no_ssa_opt,{pass,beam_ssa_opt}},
       {iff,dssaopt,{listing,"ssaopt"}},
       {unless,no_ssa_opt,{iff,ssalint,{pass,beam_ssa_lint}}},

       {unless,no_throw_opt,{pass,beam_ssa_throw}},
       {iff,dthrow,{listing,"throw"}},
       {unless,no_throw_opt,{iff,ssalint,{pass,beam_ssa_lint}}}]},

     {pass,beam_ssa_pre_codegen},
     {iff,dprecg,{listing,"precodegen"}},
     {iff,ssalint,{pass,beam_ssa_lint}},
     {pass,beam_ssa_codegen},
     {iff,dcg,{listing,"codegen"}},
     {iff,doldcg,{listing,"codegen"}},
     ?pass(beam_validator_strong)
     | asm_passes()].

asm_passes() ->
    %% Assembly level optimisations.
    [{delay,
      [{pass,beam_a},
       {iff,da,{listing,"a"}},
       {unless,no_postopt,
	[{pass,beam_block},
	 {iff,dblk,{listing,"block"}},
	 {unless,no_jopt,{pass,beam_jump}},
	 {iff,djmp,{listing,"jump"}},
	 {pass,beam_clean},
	 {iff,dclean,{listing,"clean"}},
	 {unless,no_stack_trimming,{pass,beam_trim}},
	 {iff,dtrim,{listing,"trim"}},
	 {pass,beam_flatten}]},

       %% If post optimizations are turned off, we still
       %% need to do a few clean-ups to code.
       {iff,no_postopt,[{pass,beam_clean}]},

       {iff,diffable,?pass(diffable)},
       {pass,beam_z},
       {iff,diffable,{listing,"S"}},
       {iff,dz,{listing,"z"}},
       {iff,dopt,{listing,"optimize"}},
       {iff,'S',{listing,"S"}},
       {iff,'to_asm',{done,"S"}}]},
     ?pass(beam_validator_weak),
     ?pass(beam_asm)
     | binary_passes()].

binary_passes() ->
    [{iff,'to_dis',?pass(to_dis)},
     {unless,binary,?pass(save_binary,not_werror)}
    ].

%%%
%%% Compiler passes.
%%%

%% Remove the target file so we don't have an old one if the compilation fail.
remove_file(Code, St) ->
    _ = file:delete(St#compile.ofile),
    {ok,Code,St}.

-record(asm_module, {module,
		     exports,
		     labels,
		     functions=[],
		     attributes=[]}).

preprocess_asm_forms(Forms) ->
    R = #asm_module{},
    R1 = collect_asm(Forms, R),
    {R1#asm_module.module,
     {R1#asm_module.module,
      R1#asm_module.exports,
      R1#asm_module.attributes,
      reverse(R1#asm_module.functions),
      R1#asm_module.labels}}.

collect_asm([{module,M} | Rest], R) ->
    collect_asm(Rest, R#asm_module{module=M});
collect_asm([{exports,M} | Rest], R) ->
    collect_asm(Rest, R#asm_module{exports=M});
collect_asm([{labels,M} | Rest], R) ->
    collect_asm(Rest, R#asm_module{labels=M});
collect_asm([{function,A,B,C} | Rest0], R0) ->
    {Code,Rest} = collect_asm_function(Rest0, []),
    Func = {function,A,B,C,Code},
    R = R0#asm_module{functions=[Func | R0#asm_module.functions]},
    collect_asm(Rest, R);
collect_asm([{attributes, Attr} | Rest], R) ->
    collect_asm(Rest, R#asm_module{attributes=Attr});
collect_asm([], R) -> R.

collect_asm_function([{function,_,_,_}|_]=Is, Acc) ->
    {reverse(Acc),Is};
collect_asm_function([I|Is], Acc) ->
    collect_asm_function(Is, [I|Acc]);
collect_asm_function([], Acc) ->
    {reverse(Acc),[]}.

beam_consult_asm(_Code, St) ->
    case file:consult(St#compile.ifile) of
	{ok,Forms0} ->
            Encoding = epp:read_encoding(St#compile.ifile),
	    {Module,Forms} = preprocess_asm_forms(Forms0),
	    {ok,Forms,St#compile{module=Module,encoding=Encoding}};
	{error,E} ->
	    Es = [{St#compile.ifile,[{none,?MODULE,{open,E}}]}],
	    {error,St#compile{errors=St#compile.errors ++ Es}}
    end.

get_module_name_from_asm({Mod,_,_,_,_}=Asm, St) ->
    {ok,Asm,St#compile{module=Mod}};
get_module_name_from_asm(Asm, St) ->
    %% Invalid Beam assembly code. Let it crash in a later pass.
    {ok,Asm,St}.

parse_module(_Code, St) ->
    case do_parse_module(utf8, St) of
	{ok,_,_}=Ret ->
	    Ret;
	{error,_}=Ret ->
	    Ret
    end.

do_parse_module(DefEncoding, #compile{ifile=File,options=Opts,dir=Dir}=St) ->
    SourceName0 = proplists:get_value(source, Opts, File),
    SourceName = case member(deterministic, Opts) of
                     true ->
                         filename:basename(SourceName0);
                     false ->
                         case member(absolute_source, Opts) of
                             true -> paranoid_absname(SourceName0);
                             false -> SourceName0
                         end
                 end,
    StartLocation = case with_columns(Opts) of
                        true ->
                            {1,1};
                        false ->
                            1
                    end,
    R = epp:parse_file(File,
                       [{includes,[".",Dir|inc_paths(Opts)]},
                        {source_name, SourceName},
                        {macros,pre_defs(Opts)},
                        {default_encoding,DefEncoding},
                        {location,StartLocation},
                        extra]),
    case R of
	{ok,Forms0,Extra} ->
	    Encoding = proplists:get_value(encoding, Extra),
            Forms = case with_columns(Opts ++ compile_options(Forms0)) of
                        true ->
                            Forms0;
                        false ->
                            strip_columns(Forms0)
                    end,
            {ok,Forms,St#compile{encoding=Encoding}};
	{error,E} ->
	    Es = [{St#compile.ifile,[{none,?MODULE,{epp,E}}]}],
	    {error,St#compile{errors=St#compile.errors ++ Es}}
    end.

with_columns(Opts) ->
    case proplists:get_value(error_location, Opts, column) of
        column -> true;
        line -> false
    end.

consult_abstr(_Code, St) ->
    case file:consult(St#compile.ifile) of
	{ok,Forms} ->
            Encoding = epp:read_encoding(St#compile.ifile),
	    {ok,Forms,St#compile{encoding=Encoding}};
	{error,E} ->
	    Es = [{St#compile.ifile,[{none,?MODULE,{open,E}}]}],
	    {error,St#compile{errors=St#compile.errors ++ Es}}
    end.

parse_core(_Code, St) ->
    case file:read_file(St#compile.ifile) of
	{ok,Bin} ->
	    case core_scan:string(binary_to_list(Bin)) of
		{ok,Toks,_} ->
		    case core_parse:parse(Toks) of
			{ok,Mod} ->
			    Name = (Mod#c_module.name)#c_literal.val,
			    {ok,Mod,St#compile{module=Name}};
			{error,E} ->
			    Es = [{St#compile.ifile,[E]}],
			    {error,St#compile{errors=St#compile.errors ++ Es}}
		    end;
		{error,E,_} ->
		    Es = [{St#compile.ifile,[E]}],
		    {error,St#compile{errors=St#compile.errors ++ Es}}
	    end;
	{error,E} ->
	    Es = [{St#compile.ifile,[{none,compile,{open,E}}]}],
	    {error,St#compile{errors=St#compile.errors ++ Es}}
    end.

get_module_name_from_core(Core, St) ->
    try
        Mod = cerl:concrete(cerl:module_name(Core)),
        {ok,Core,St#compile{module=Mod}}
    catch
        _:_ ->
            %% Invalid Core Erlang code. Let it crash in a later pass.
            {ok,Core,St}
    end.

compile_options([{attribute,_L,compile,C}|Fs]) when is_list(C) ->
    C ++ compile_options(Fs);
compile_options([{attribute,_L,compile,C}|Fs]) ->
    [C|compile_options(Fs)];
compile_options([_F|Fs]) -> compile_options(Fs);
compile_options([]) -> [].

clean_parse_transforms(Fs) ->
    clean_parse_transforms_1(Fs, []).

clean_parse_transforms_1([{attribute,L,compile,C0}|Fs], Acc) when is_list(C0) ->
    C = lists:filter(fun({parse_transform,_}) -> false;
			(_) -> true
		     end, C0),
    clean_parse_transforms_1(Fs, [{attribute,L,compile,C}|Acc]);
clean_parse_transforms_1([{attribute,_,compile,{parse_transform,_}}|Fs], Acc) ->
    clean_parse_transforms_1(Fs, Acc);
clean_parse_transforms_1([F|Fs], Acc) ->
    clean_parse_transforms_1(Fs, [F|Acc]);
clean_parse_transforms_1([], Acc) -> reverse(Acc).

transforms(Os) -> [ M || {parse_transform,M} <- Os ].

transform_module(Code0, #compile{options=Opt}=St) ->
    %% Extract compile options from code into options field.
    case transforms(Opt ++ compile_options(Code0)) of
	[] ->
            %% No parse transforms.
            {ok,Code0,St};
	Ts ->
	    %% Remove parse_transform attributes from the abstract code to
	    %% prevent parse transforms to be run more than once.
	    Code = clean_parse_transforms(Code0),
	    foldl_transform(Ts, Code, St)
    end.

foldl_transform([T|Ts], Code0, St) ->
    Name = "transform " ++ atom_to_list(T),
    case code:ensure_loaded(T) =:= {module,T} andalso
        erlang:function_exported(T, parse_transform, 2) of
        true ->
            Fun = fun(Code, S) ->
                          T:parse_transform(Code, S#compile.options)
                  end,
            Run = runner(none, St),
            StrippedCode = maybe_strip_columns(Code0, T, St),
            try Run({Name, Fun}, StrippedCode, St) of
                {error,Es,Ws} ->
                    {error,St#compile{warnings=St#compile.warnings ++ Ws,
                                      errors=St#compile.errors ++ Es}};
                {warning, Forms, Ws} ->
                    foldl_transform(Ts, Forms,
                                    St#compile{warnings=St#compile.warnings ++ Ws});
                Forms ->
                    foldl_transform(Ts, Forms, St)
            catch
                Class:Reason:Stk ->
                    Es = [{St#compile.ifile,[{none,compile,
                                              {parse_transform,T,{Class,Reason,Stk}}}]}],
                    {error,St#compile{errors=St#compile.errors ++ Es}}
            end;
        false ->
            Es = [{St#compile.ifile,[{none,compile,
                                      {undef_parse_transform,T}}]}],
            {error,St#compile{errors=St#compile.errors ++ Es}}
    end;
foldl_transform([], Code, St) ->
    %% We may need to strip columns added by parse transforms before returning
    %% them back to the compiler. We pass ?MODULE as a bit of a hack to get the
    %% correct default.
    {ok, maybe_strip_columns(Code, ?MODULE, St), St}.

%%% If a parse transform does not support column numbers it can say so using
%%% the parse_transform_info callback. The error_location is taken from both
%%% compiler options and from the parse transform and if either of them want
%%% to only use lines, we strip columns.
maybe_strip_columns(Code, T, St) ->
    PTErrorLocation =
        case erlang:function_exported(T, parse_transform_info, 0) of
            true ->
                maps:get(error_location, T:parse_transform_info(), column);
            false ->
                column
        end,
    ConfigErrorLocation = proplists:get_value(error_location, St#compile.options, column),
    if 
        PTErrorLocation =:= line; ConfigErrorLocation =:= line ->
            strip_columns(Code);
        true -> Code
    end.

strip_columns(Code) ->
    F = fun(A) -> erl_anno:set_location(erl_anno:line(A), A) end,
    [case Form of
         {eof,{Line,_Col}} ->
             {eof,Line};
         {ErrorOrWarning,{{Line,_Col},Module,Reason}}
           when ErrorOrWarning =:= error;
                ErrorOrWarning =:= warning ->
             {ErrorOrWarning,{Line,Module,Reason}};
         Form ->
             erl_parse:map_anno(F, Form)
     end || Form <- Code].

get_core_transforms(Opts) -> [M || {core_transform,M} <- Opts].

core_transforms(Code, St) ->
    %% The options field holds the complete list of options at this
    Ts = get_core_transforms(St#compile.options),
    foldl_core_transforms(Ts, Code, St).

foldl_core_transforms([T|Ts], Code0, St) ->
    Name = "core transform " ++ atom_to_list(T),
    Fun = fun(Code, S) -> T:core_transform(Code, S#compile.options) end,
%                         ^ variable
%                          ^ operator
%                            ^ function
%                                                            ^ property
    Run = runner(none, St),
    try Run({Name, Fun}, Code0, St) of
	Forms ->
	    foldl_core_transforms(Ts, Forms, St)
    catch
        Class:Reason:Stk ->
            Es = [{St#compile.ifile,[{none,compile,
%                              ^ property
                                      {core_transform,T,{Class,Reason,Stk}}}]}],
            {error,St#compile{errors=St#compile.errors ++ Es}}
%                                                 ^ property
    end;
foldl_core_transforms([], Code, St) -> {ok,Code,St}.

%%% Fetches the module name from a list of forms. The module attribute must
%%% be present.
get_module([{attribute,_,module,M} | _]) -> M;
get_module([_ | Rest]) ->
    get_module(Rest).

%%% A #compile state is returned, where St.base has been filled in
%%% with the module name from Forms, as a string, in case it wasn't
%%% set in St (i.e., it was "").
add_default_base(St, Forms) ->
    F = St#compile.filename,
    case F of
	"" ->
 	    M = get_module(Forms),
	    St#compile{base=atom_to_list(M)};
	_ ->
	    St
    end.

lint_module(Code, St) ->
    case erl_lint:module(Code, St#compile.ifile, St#compile.options) of
	{ok,Ws} ->
	    %% Insert name of module as base name, if needed. This is
	    %% for compile:forms to work with listing files.
	    St1 = add_default_base(St, Code),
	    {ok,Code,St1#compile{warnings=St1#compile.warnings ++ Ws}};
	{error,Es,Ws} ->
	    {error,St#compile{warnings=St#compile.warnings ++ Ws,
			      errors=St#compile.errors ++ Es}}
    end.

core_lint_module(Code, St) ->
    case core_lint:module(Code, St#compile.options) of
	{ok,Ws} ->
	    {ok,Code,St#compile{warnings=St#compile.warnings ++ Ws}};
	{error,Es,Ws} ->
	    {error,St#compile{warnings=St#compile.warnings ++ Ws,
			      errors=St#compile.errors ++ Es}}
    end.

%% makedep + output and continue
makedep_and_output(Code0, St) ->
    {ok,DepCode,St1} = makedep(Code0,St),
    case makedep_output(DepCode, St1) of
        {ok,_IgnoreCode,St2} ->
            {ok,Code0,St2};
        {error,St2} ->
            {error,St2}
    end.

makedep(Code0, #compile{ifile=Ifile,ofile=Ofile,options=Opts}=St) ->

    %% Get the target of the Makefile rule.
    Target0 =
	case proplists:get_value(makedep_target, Opts) of
	    undefined ->
		%% The target is derived from the output filename: possibly
		%% remove the current working directory to obtain a relative
		%% path.
		shorten_filename(Ofile);
	    T ->
		%% The caller specified one.
		T
	end,

    %% Quote the target is the called asked for this.
    Target1 = case proplists:get_value(makedep_quote_target, Opts) of
		  true ->
		      %% For now, only "$" is replaced by "$$".
              Fun = fun
                ($$) -> "$$";
%                 ^ constant
%                        ^ string
				(C)  -> C
			    end,
		      map(Fun, Target0);
		  _ ->
		      Target0
	      end,
    Target = Target1 ++ ":",

    %% List the dependencies (includes) for this target.
    {MainRule,PhonyRules} = makedep_add_headers(
      Ifile,          % The input file name.
      Code0,          % The parsed source.
      [],             % The list of dependencies already added.
      length(Target), % The current line length.
      Target,         % The target.
      "",             % Phony targets.
      Opts),

    %% Prepare the content of the Makefile. For instance:
    %%   hello.erl: hello.hrl common.hrl
    %%
    %% Or if phony targets are enabled:
    %%   hello.erl: hello.hrl common.hrl
    %%
    %%   hello.hrl:
    %%
    %%   common.hrl:
    Makefile = case proplists:get_value(makedep_phony, Opts) of
		   true -> MainRule ++ PhonyRules;
		   _ -> MainRule
	       end,
    Code = unicode:characters_to_binary([Makefile,"\n"]),
    {ok,Code,St}.

makedep_add_headers(Ifile, [{attribute,_,file,{File,_}}|Rest],
		    Included, LineLen, MainTarget, Phony, Opts) ->
    %% The header "File" exists, add it to the dependencies.
    {Included1,LineLen1,MainTarget1,Phony1} =
	makedep_add_header(Ifile, Included, LineLen, MainTarget, Phony, File),
    makedep_add_headers(Ifile, Rest, Included1, LineLen1,
			MainTarget1, Phony1, Opts);
makedep_add_headers(Ifile, [{error,{_,epp,{include,file,File}}}|Rest],
		    Included, LineLen, MainTarget, Phony, Opts) ->
    %% The header "File" doesn't exist, do we add it to the dependencies?
    case proplists:get_value(makedep_add_missing, Opts) of
        true ->
            {Included1,LineLen1,MainTarget1,Phony1} =
		makedep_add_header(Ifile, Included, LineLen, MainTarget,
				   Phony, File),
            makedep_add_headers(Ifile, Rest, Included1, LineLen1,
				MainTarget1, Phony1, Opts);
        _ ->
            makedep_add_headers(Ifile, Rest, Included, LineLen,
				MainTarget, Phony, Opts)
    end;
makedep_add_headers(Ifile, [_|Rest], Included, LineLen,
		    MainTarget, Phony, Opts) ->
    makedep_add_headers(Ifile, Rest, Included,
			LineLen, MainTarget, Phony, Opts);
makedep_add_headers(_Ifile, [], _Included, _LineLen,
		    MainTarget, Phony, _Opts) ->
    {MainTarget,Phony}.

makedep_add_header(Ifile, Included, LineLen, MainTarget, Phony, File) ->
    case member(File, Included) of
	true ->
	    %% This file was already listed in the dependencies, skip it.
            {Included,LineLen,MainTarget,Phony};
	false ->
            Included1 = [File|Included],

	    %% Remove "./" in front of the dependency filename.
	    File1 = case File of
			"./" ++ File0 -> File0;
			_ -> File
	    end,

	    %% Prepare the phony target name.
	    Phony1 = case File of
			 Ifile -> Phony;
			 _     -> Phony ++ "\n\n" ++ File1 ++ ":"
	    end,

	    %% Add the file to the dependencies. Lines longer than 76 columns
	    %% are split.
	    if
        LineLen + 1 + length(File1) > 76 ->
%               ^ operator
%                   ^ operator
%                                   ^ operator
                    LineLen1 = 2 + length(File1),
                    MainTarget1 = MainTarget ++ " \\\n  " ++ File1,
                    {Included1,LineLen1,MainTarget1,Phony1};
		true ->
                    LineLen1 = LineLen + 1 + length(File1),
                    MainTarget1 = MainTarget ++ " " ++ File1,
                    {Included1,LineLen1,MainTarget1,Phony1}
	    end
    end.

makedep_output(Code, #compile{options=Opts,ofile=Ofile}=St) ->
    %% Write this Makefile (Code) to the selected output.
    %% If no output is specified, the default is to write to a file named after
    %% the output file.
    Output = case proplists:get_value(makedep_output, Opts) of
                 undefined ->
                     %% Prepare the default filename.
                     outfile(filename:basename(Ofile, ".beam"), "Pbeam", Opts);
                 Other ->
                     Other
             end,

    if
        is_list(Output) ->
            %% Write the dependencies to a file.
            case file:write_file(Output, Code) of
                ok ->
                    {ok,Code,St};
                {error,Reason} ->
                    Err = {St#compile.ifile,[{none,?MODULE,{write_error,Reason}}]},
                    {error,St#compile{errors=St#compile.errors++[Err]}}
            end;
        true ->
            %% Write the dependencies to a device.
            try io:fwrite(Output, "~ts", [Code]) of
                ok ->
                    {ok,Code,St}
            catch
                error:_ ->
                    Err = {St#compile.ifile,[{none,?MODULE,write_error}]},
                    {error,St#compile{errors=St#compile.errors++[Err]}}
            end
    end.

expand_records(Code0, #compile{options=Opts}=St) ->
    Code = erl_expand_records:module(Code0, Opts),
    {ok,Code,St}.

legalize_vars(Code0, St) ->
    Code = map(fun(F={function,_,_,_,_}) ->
                       erl_pp:legalize_vars(F);
                  (F) ->
                       F
               end, Code0),
    {ok,Code,St}.

compile_directives(Forms, #compile{options=Opts0}=St0) ->
    Opts1 = expand_opts(flatten([C || {attribute,_,compile,C} <- Forms])),
    Opts = Opts1 ++ Opts0,
    St1 = St0#compile{options=Opts},
    case any_obsolete_option(Opts) of
        {yes,Opt} ->
            Error = {St1#compile.ifile,[{none,?MODULE,{obsolete_option,Opt}}]},
            St = St1#compile{errors=[Error|St1#compile.errors]},
            {error,St};
        no ->
            {ok,Forms,St1}
    end.

any_obsolete_option([Opt|Opts]) ->
    case is_obsolete(Opt) of
        true -> {yes,Opt};
        false -> any_obsolete_option(Opts)
    end;
any_obsolete_option([]) -> no.

is_obsolete(r18) -> true;
is_obsolete(r19) -> true;
is_obsolete(r20) -> true;
is_obsolete(r21) -> true;
is_obsolete(no_bsm3) -> true;
is_obsolete(no_get_hd_tl) -> true;
is_obsolete(no_put_tuple2) -> true;
is_obsolete(no_utf8_atoms) -> true;
is_obsolete(_) -> false.

core(Forms, #compile{options=Opts}=St) ->
    {ok,Core,Ws} = v3_core:module(Forms, Opts),
    Mod = cerl:concrete(cerl:module_name(Core)),
    {ok,Core,St#compile{module=Mod,options=Opts,
                        warnings=St#compile.warnings++Ws}}.

core_fold_module_after_inlining(Code0, #compile{options=Opts}=St) ->
    %% Inlining may produce code that generates spurious warnings.
    %% Ignore all warnings.
    {ok,Code,_Ws} = sys_core_fold:module(Code0, Opts),
    {ok,Code,St}.

v3_kernel(Code0, #compile{options=Opts,warnings=Ws0}=St) ->
    {ok,Code,Ws} = v3_kernel:module(Code0, Opts),
    case Ws =:= [] orelse test_core_inliner(St) of
	false ->
	    {ok,Code,St#compile{warnings=Ws0++Ws}};
	true ->
	    %% cerl_inline may produce code that generates spurious
	    %% warnings. Ignore any such warnings.
	    {ok,Code,St}
    end.

test_old_inliner(#compile{options=Opts}) ->
    %% The point of this test is to avoid loading the old inliner
    %% if we know that it will not be used.
    any(fun({inline,_}) -> true;
	   (_) -> false
	end, Opts).

test_core_inliner(#compile{options=Opts}) ->
    case any(fun(no_inline) -> true;
		(_) -> false
	     end, Opts) of
	true -> false;
	false ->
	    any(fun(inline) -> true;
		   (_) -> false
		end, Opts)
    end.

test_any_inliner(St) ->
    test_old_inliner(St) orelse test_core_inliner(St).
%                          ^ keyword.operator

core_old_inliner(Code0, #compile{options=Opts}=St) ->
    {ok,Code} = sys_core_inline:module(Code0, Opts),
    {ok,Code,St}.

core_inline_module(Code0, #compile{options=Opts}=St) ->
    Code = cerl_inline:core_transform(Code0, Opts),
    {ok,Code,St}.

save_abstract_code(Code, St) ->
    {ok,Code,St#compile{abstract_code=erl_parse:anno_to_term(Code)}}.

debug_info(#compile{module=Module,ofile=OFile}=St) ->
    {DebugInfo,Opts2} = debug_info_chunk(St),
    case member(encrypt_debug_info, Opts2) of
	true ->
	    case lists:keytake(debug_info_key, 1, Opts2) of
		{value,{_, Key},Opts3} ->
		    encrypt_debug_info(DebugInfo, Key, [{debug_info_key,'********'} | Opts3]);
		false ->
		    Mode = proplists:get_value(crypto_mode, Opts2, des3_cbc),
		    case beam_lib:get_crypto_key({debug_info, Mode, Module, OFile}) of
			error ->
			    {error, [{none,?MODULE,no_crypto_key}]};
			Key ->
			    encrypt_debug_info(DebugInfo, {Mode, Key}, Opts2)
		    end
	    end;
	false ->
	    {ok,DebugInfo,Opts2}
    end.

debug_info_chunk(#compile{mod_options=ModOpts0,
                          options=CompOpts,
                          abstract_code=Abst}) ->
    AbstOpts = cleanup_compile_options(ModOpts0),
    {Backend,Metadata,ModOpts} =
        case proplists:get_value(debug_info, CompOpts, false) of
            {OptBackend,OptMetadata} when is_atom(OptBackend) ->
                ModOpts1 = proplists:delete(debug_info, ModOpts0),
                {OptBackend,OptMetadata,ModOpts1};
            true ->
                ModOpts1 = proplists:delete(debug_info, ModOpts0),
                {erl_abstract_code,{Abst,AbstOpts},[debug_info | ModOpts1]};
            false ->
                {erl_abstract_code,{none,AbstOpts},ModOpts0}
        end,
    DebugInfo = erlang:term_to_binary({debug_info_v1,Backend,Metadata},
                                      [compressed]),
    {DebugInfo, ModOpts}.

encrypt_debug_info(DebugInfo, Key, Opts) ->
    try
	RealKey = generate_key(Key),
	case start_crypto() of
	    ok -> {ok,encrypt(RealKey, DebugInfo),Opts};
	    {error,_}=E -> E
	end
    catch
%    ^ keyword
	error:_ ->
	    {error,[{none,?MODULE,bad_crypto_key}]}
    end.

cleanup_compile_options(Opts) ->
    IsDeterministic = lists:member(deterministic, Opts),
    lists:filter(fun(Opt) ->
                         keep_compile_option(Opt, IsDeterministic)
                 end, Opts).

%% Include paths and current directory don't affect compilation, but they might
%% be helpful so we include them unless we're doing a deterministic build.
keep_compile_option({i, _}, Deterministic) ->
    not Deterministic;
keep_compile_option({cwd, _}, Deterministic) ->
    not Deterministic;
%% We are storing abstract, not asm or core.
keep_compile_option(from_asm, _Deterministic) ->
    false;
keep_compile_option(from_core, _Deterministic) ->
    false;
keep_compile_option(from_abstr, _Deterministic) ->
    false;
%% Parse transform and macros have already been applied.
keep_compile_option({parse_transform, _}, _Deterministic) ->
    false;
keep_compile_option({d, _, _}, _Deterministic) ->
    false;
%% Do not affect compilation result on future calls.
keep_compile_option(Option, _Deterministic) ->
    effects_code_generation(Option).

start_crypto() ->
    try crypto:start() of
	{error,{already_started,crypto}} -> ok;
	ok -> ok
    catch
	error:_ ->
	    {error,[{none,?MODULE,no_crypto}]}
    end.

generate_key({Type,String}) when is_atom(Type), is_list(String) ->
    beam_lib:make_crypto_key(Type, String);
generate_key(String) when is_list(String) ->
    generate_key({des3_cbc,String}).

encrypt({des3_cbc=Type,Key,IVec,BlockSize}, Bin0) ->
    Bin1 = case byte_size(Bin0) rem BlockSize of
%                                ^ operator
	       0 -> Bin0;
	       N -> list_to_binary([Bin0,crypto:strong_rand_bytes(BlockSize-N)])
	   end,
    Bin = crypto:crypto_one_time(des_ede3_cbc, Key, IVec, Bin1, true),
    TypeString = atom_to_list(Type),
    list_to_binary([0,length(TypeString),TypeString,Bin]).

beam_validator_strong(Code, St) ->
    beam_validator_1(Code, St, strong).

beam_validator_weak(Code, St) ->
    beam_validator_1(Code, St, weak).

beam_validator_1(Code, #compile{errors=Errors0}=St, Level) ->
    case beam_validator:validate(Code, Level) of
        ok ->
            {ok, Code, St};
        {error, Es} ->
            {error, St#compile{errors=Errors0 ++ Es}}
    end.

beam_asm(Code0, #compile{ifile=File,extra_chunks=ExtraChunks,options=CompilerOpts}=St) ->
    case debug_info(St) of
	{ok,DebugInfo,Opts0} ->
	    Opts1 = [O || O <- Opts0, effects_code_generation(O)],
	    Chunks = [{<<"Dbgi">>, DebugInfo} | ExtraChunks],
	    CompileInfo = compile_info(File, CompilerOpts, Opts1),
	    {ok,Code} = beam_asm:module(Code0, Chunks, CompileInfo, CompilerOpts),
	    {ok,Code,St#compile{abstract_code=[]}};
	{error,Es} ->
	    {error,St#compile{errors=St#compile.errors ++ [{File,Es}]}}
    end.

compile_info(File, CompilerOpts, Opts) ->
    IsSlim = member(slim, CompilerOpts),
    IsDeterministic = member(deterministic, CompilerOpts),
    Info0 = proplists:get_value(compile_info, Opts, []),
    Info1 =
	case paranoid_absname(File) of
	    [_|_] = Source when not IsSlim, not IsDeterministic ->
		[{source,Source} | Info0];
	    _ ->
		Info0
	end,
    Info2 =
	case IsDeterministic of
	    false -> [{options,proplists:delete(compile_info, Opts)} | Info1];
	    true -> Info1
	end,
    Info2.

paranoid_absname(""=File) ->
    File;
paranoid_absname(File) ->
    case file:get_cwd() of
	{ok,Cwd} ->
	    filename:absname(File, Cwd);
	_ ->
	    File
    end.

%% effects_code_generation(Option) -> true|false.
%%  Determine whether the option could have any effect on the
%%  generated code in the BEAM file (as opposed to how
%%  errors will be reported).

effects_code_generation(Option) ->
    case Option of
	beam -> false;
	report_warnings -> false;
	report_errors -> false;
	return_errors-> false;
	return_warnings-> false;
	warnings_as_errors -> false;
	binary -> false;
	verbose -> false;
	{cwd,_} -> false;
	{outdir, _} -> false;
	_ -> true
    end.

save_binary(Code, #compile{module=Mod,ofile=Outfile,options=Opts}=St) ->
    %% Test that the module name and output file name match.
    case member(no_error_module_mismatch, Opts) of
	true ->
	    save_binary_1(Code, St);
	false ->
	    Base = filename:rootname(filename:basename(Outfile)),
	    case atom_to_list(Mod) of
		Base ->
		    save_binary_1(Code, St);
		_ ->
		    Es = [{St#compile.ofile,
			   [{none,?MODULE,{module_name,Mod,Base}}]}],
		    {error,St#compile{errors=St#compile.errors ++ Es}}
	    end
    end.

save_binary_1(Code, St) ->
    Ofile = St#compile.ofile,
    Tfile = tmpfile(Ofile),		%Temp working file
    case write_binary(Tfile, Code, St) of
	ok ->
	    case file:rename(Tfile, Ofile) of
		ok ->
		    {ok,none,St};
		{error,RenameError} ->
                    Es = [{Ofile,[{none,?MODULE,{rename,Tfile,Ofile,
                                                 RenameError}}]}],
                    _ = file:delete(Tfile),
		    {error,St#compile{errors=St#compile.errors ++ Es}}
	    end;
	{error,Error} ->
	    Es = [{Tfile,[{none,compile,{write_error,Error}}]}],
	    {error,St#compile{errors=St#compile.errors ++ Es}}
    end.

write_binary(Name, Bin, St) ->
    Opts = case member(compressed, St#compile.options) of
	       true -> [compressed];
	       false -> []
	   end,
    case file:write_file(Name, Bin, Opts) of
	ok -> ok;
	{error,_}=Error -> Error
    end.

%% report_errors(State) -> ok
%% report_warnings(State) -> ok

report_errors(#compile{options=Opts,errors=Errors}) ->
    case member(report_errors, Opts) of
	true ->
	    foreach(fun ({{F,_L},Eds}) -> sys_messages:list_errors(F, Eds, Opts);
			({F,Eds}) -> sys_messages:list_errors(F, Eds, Opts) end,
		    Errors);
	false -> ok
    end.

report_warnings(#compile{options=Opts,warnings=Ws0}) ->
    Werror = member(warnings_as_errors, Opts),
    P = case Werror of
	    true -> "";
	    false -> "Warning: "
	end,
    ReportWerror = Werror andalso member(report_errors, Opts),
    case member(report_warnings, Opts) orelse ReportWerror of
	true ->
	    Ws1 = flatmap(fun({{F,_L},Eds}) -> sys_messages:format_messages(F, P, Eds, Opts);
			     ({F,Eds}) -> sys_messages:format_messages(F, P, Eds, Opts) end,
			  Ws0),
	    Ws = lists:sort(Ws1),
	    foreach(fun({_,Str}) -> io:put_chars(Str) end, Ws);
	false -> ok
    end.

%%%
%%% Filter warnings.
%%%

filter_warnings(Ws, Opts) ->
    Ignore = ignore_tags(Opts, sets:new([{version,2}])),
    filter_warnings_1(Ws, Ignore).

filter_warnings_1([{Source,Ws0}|T], Ignore) ->
    Ws = [W || W <- Ws0, not ignore_warning(W, Ignore)],
    [{Source,Ws}|filter_warnings_1(T, Ignore)];
filter_warnings_1([], _Ignore) -> [].

ignore_warning({_Location,Pass,{Category,_}}, Ignore) ->
    IgnoreMod = case Pass of
                    v3_core -> true;
                    sys_core_fold -> true;
                    v3_kernel -> true;
                    _ -> false
                end,
    IgnoreMod andalso sets:is_element(Category, Ignore);
ignore_warning(_, _) -> false.

ignore_tags([nowarn_opportunistic|_], _Ignore) ->
    sets:from_list([failed,ignored,nomatch], [{version,2}]);
ignore_tags([nowarn_failed|Opts], Ignore) ->
    ignore_tags(Opts, sets:add_element(failed, Ignore));
ignore_tags([nowarn_ignored|Opts], Ignore) ->
    ignore_tags(Opts, sets:add_element(ignored, Ignore));
ignore_tags([nowarn_nomatch|Opts], Ignore) ->
    ignore_tags(Opts, sets:add_element(nomatch, Ignore));
ignore_tags([_|Opts], Ignore) ->
    ignore_tags(Opts, Ignore);
ignore_tags([], Ignore) -> Ignore.

%% erlfile(Dir, Base) -> ErlFile
%% outfile(Base, Extension, Options) -> OutputFile
%% objfile(Base, Target, Options) -> ObjFile
%% tmpfile(ObjFile) -> TmpFile
%%  Work out the correct input and output file names.

erlfile(".", Base, Suffix) ->
    Base ++ Suffix;
erlfile(Dir, Base, Suffix) ->
    filename:join(Dir, Base ++ Suffix).

outfile(Base, Ext, Opts) when is_list(Ext) ->
    Obase = case keyfind(outdir, 1, Opts) of
		{outdir, Odir} -> filename:join(Odir, Base);
		_Other -> Base			% Not found or bad format
	    end,
    Obase ++ "." ++ Ext.

objfile(Base, St) ->
    outfile(Base, "beam", St#compile.options).

tmpfile(Ofile) ->
    reverse([$#|tl(reverse(Ofile))]).

%% pre_defs(Options)
%% inc_paths(Options)
%%  Extract the predefined macros and include paths from the option list.

pre_defs([{d,M,V}|Opts]) ->
    [{M,V}|pre_defs(Opts)];
pre_defs([{d,M}|Opts]) ->
    [M|pre_defs(Opts)];
pre_defs([_|Opts]) ->
    pre_defs(Opts);
pre_defs([]) -> [].

inc_paths(Opts) ->
    [ P || {i,P} <- Opts, is_list(P) ].

src_listing(Ext, Code, St) ->
    listing(fun (Lf, {_Mod,_Exp,Fs}) -> do_src_listing(Lf, Fs);
		(Lf, Fs) -> do_src_listing(Lf, Fs) end,
	    Ext, Code, St).

do_src_listing(Lf, Fs) ->
    Opts = [lists:keyfind(encoding, 1, io:getopts(Lf))],
    foreach(fun (F) -> io:put_chars(Lf, [erl_pp:form(F, Opts),"\n"]) end,
	    Fs).

listing(Ext, Code, St0) ->
    St = St0#compile{encoding = none},
    listing(fun(Lf, Fs) -> beam_listing:module(Lf, Fs) end, Ext, Code, St).

listing(LFun, Ext, Code, St) ->
    Lfile = outfile(St#compile.base, Ext, St#compile.options),
    case file:open(Lfile, [write,delayed_write]) of
	{ok,Lf} ->
            output_encoding(Lf, St),
	    LFun(Lf, Code),
	    ok = file:close(Lf),
	    {ok,Code,St};
	{error,Error} ->
	    Es = [{Lfile,[{none,compile,{write_error,Error}}]}],
	    {error,St#compile{errors=St#compile.errors ++ Es}}
    end.

to_dis(Code, #compile{module=Module,ofile=Outfile}=St) ->
    Loaded = code:is_loaded(Module),
    Sticky = code:is_sticky(Module),
    _ = [code:unstick_mod(Module) || Sticky],

    {module,Module} = code:load_binary(Module, "", Code),
    DestDir = filename:dirname(Outfile),
    DisFile = filename:join(DestDir, atom_to_list(Module) ++ ".dis"),
    ok = erts_debug:dis_to_file(Module, DisFile),

    %% Restore loaded module
    _ = [{module, Module} = code:load_file(Module) || Loaded =/= false],
    [code:stick_mod(Module) || Sticky],
    {ok,Code,St}.

output_encoding(F, #compile{encoding = none}) ->
    ok = io:setopts(F, [{encoding, epp:default_encoding()}]);
output_encoding(F, #compile{encoding = Encoding}) ->
    ok = io:setopts(F, [{encoding, Encoding}]),
    ok = io:fwrite(F, <<"%% ~s\n">>, [epp:encoding_to_string(Encoding)]).

%%%
%%% Transform the BEAM code to make it more friendly for
%%% diffing: using function names instead of labels for
%%% local calls and number labels relative to each function.
%%%

diffable(Code0, St) ->
    {Mod,Exp,Attr,Fs0,NumLabels} = Code0,
    EntryLabels0 = [{Entry,{Name,Arity}} ||
                       {function,Name,Arity,Entry,_} <- Fs0],
    EntryLabels = maps:from_list(EntryLabels0),
    Fs = [diffable_fix_function(F, EntryLabels) || F <- Fs0],
    Code = {Mod,Exp,Attr,Fs,NumLabels},
    {ok,Code,St}.

diffable_fix_function({function,Name,Arity,Entry0,Is0}, LabelMap0) ->
    Entry = maps:get(Entry0, LabelMap0),
    {Is1,LabelMap} = diffable_label_map(Is0, 1, LabelMap0, []),
    Fb = fun(Old) -> error({no_fb,Old}) end,
    Is = beam_utils:replace_labels(Is1, [], LabelMap, Fb),
    {function,Name,Arity,Entry,Is}.

diffable_label_map([{label,Old}|Is], New, Map, Acc) ->
    case Map of
        #{Old:=NewLabel} ->
            diffable_label_map(Is, New, Map, [{label,NewLabel}|Acc]);
        #{} ->
            diffable_label_map(Is, New+1, Map#{Old=>New}, [{label,New}|Acc])
    end;
diffable_label_map([I|Is], New, Map, Acc) ->
    diffable_label_map(Is, New, Map, [I|Acc]);
diffable_label_map([], _New, Map, Acc) ->
    {Acc,Map}.

-spec options() -> 'ok'.

options() ->
    help(standard_passes()).

help([{delay,Ps}|T]) ->
    help(Ps),
    help(T);
help([{iff,Flag,{src_listing,Ext}}|T]) ->
    io:fwrite("~p - Generate .~s source listing file\n", [Flag,Ext]),
    help(T);
help([{iff,Flag,{listing,Ext}}|T]) ->
    io:fwrite("~p - Generate .~s file\n", [Flag,Ext]),
    help(T);
help([{iff,Flag,{Name,Fun}}|T]) when is_function(Fun) ->
    io:fwrite("~p - Run ~s\n", [Flag,Name]),
    help(T);
help([{iff,_Flag,Action}|T]) ->
    help(Action),
    help(T);
help([{unless,Flag,{pass,Pass}}|T]) ->
    io:fwrite("~p - Skip the ~s pass\n", [Flag,Pass]),
    help(T);
help([{unless,no_postopt=Flag,List}|T]) when is_list(List) ->
    %% Hard-coded knowledge here.
    io:fwrite("~p - Skip all post optimisation\n", [Flag]),
    help(List),
    help(T);
help([{unless,_Flag,Action}|T]) ->
    help(Action),
    help(T);
help([_|T]) ->
    help(T);
help(_) ->
    ok.

rel2fam(S0) ->
    S1 = sofs:relation(S0),
    S = sofs:rel2fam(S1),
    sofs:to_external(S).

%% compile(AbsFileName, Outfilename, Options)
%%   Compile entry point for erl_compile.

-spec compile(file:filename(), _, #options{}) -> 'ok' | 'error'.

compile(File0, _OutFile, Options) ->
    pre_load(),
    File = shorten_filename(File0),
    case file(File, make_erl_options(Options)) of
	{ok,_Mod} -> ok;
	Other -> Other
    end.

-spec compile_asm(file:filename(), _, #options{}) -> 'ok' | 'error'.

compile_asm(File0, _OutFile, Opts) ->
    File = shorten_filename(File0),
    case file(File, [from_asm|make_erl_options(Opts)]) of
	{ok,_Mod} -> ok;
	Other -> Other
    end.

-spec compile_core(file:filename(), _, #options{}) -> 'ok' | 'error'.

compile_core(File0, _OutFile, Opts) ->
    File = shorten_filename(File0),
    case file(File, [from_core|make_erl_options(Opts)]) of
	{ok,_Mod} -> ok;
	Other -> Other
    end.

-spec compile_abstr(file:filename(), _, #options{}) -> 'ok' | 'error'.

compile_abstr(File0, _OutFile, Opts) ->
    File = shorten_filename(File0),
    case file(File, [from_abstr|make_erl_options(Opts)]) of
	{ok,_Mod} -> ok;
	Other -> Other
    end.

shorten_filename(Name0) ->
    {ok,Cwd} = file:get_cwd(),
    case lists:prefix(Cwd, Name0) of
	false -> Name0;
	true ->
	    case lists:nthtail(length(Cwd), Name0) of
		"/"++N -> N;
		N -> N
	    end
    end.

%% Converts generic compiler options to specific options.

make_erl_options(Opts) ->
    #options{includes=Includes,
	     defines=Defines,
	     outdir=Outdir,
	     warning=Warning,
	     verbose=Verbose,
	     specific=Specific,
	     cwd=Cwd} = Opts,
    Options = [verbose || Verbose] ++
	[report_warnings || Warning =/= 0] ++
	map(fun ({Name,Value}) ->
		    {d,Name,Value};
		(Name) ->
		    {d,Name}
            end, Defines),
    Options ++ [report_errors, {cwd, Cwd}, {outdir, Outdir} |
                [{i, Dir} || Dir <- Includes]] ++ Specific.

pre_load() ->
    L = [beam_a,
	 beam_asm,
	 beam_block,
	 beam_call_types,
	 beam_clean,
	 beam_dict,
	 beam_digraph,
	 beam_flatten,
	 beam_jump,
	 beam_kernel_to_ssa,
	 beam_opcodes,
	 beam_ssa,
	 beam_ssa_bc_size,
	 beam_ssa_bool,
	 beam_ssa_bsm,
	 beam_ssa_codegen,
	 beam_ssa_dead,
	 beam_ssa_opt,
	 beam_ssa_pre_codegen,
	 beam_ssa_recv,
	 beam_ssa_share,
	 beam_ssa_throw,
	 beam_ssa_type,
	 beam_trim,
	 beam_types,
	 beam_utils,
	 beam_validator,
	 beam_z,
	 cerl,
	 cerl_clauses,
	 cerl_trees,
	 core_lib,
	 epp,
	 erl_bifs,
	 erl_expand_records,
	 erl_lint,
	 erl_parse,
	 erl_scan,
	 sys_core_alias,
	 sys_core_bsm,
	 sys_core_fold,
	 v3_core,
	 v3_kernel],
    _ = code:ensure_modules_loaded(L),
    ok.
