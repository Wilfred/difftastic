%% Copyright (c) Facebook, Inc. and its affiliates.
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
%% ---------------------------------------------------------------------


%% Based on
%% https://github.com/the-mikedavis/tree-sitter-erlang/blob/main/test/highlight/attributes.erl

-module(attributes).
% ^ keyword
%      ^ punctuation.bracket
%        ^ module
%                 ^ punctuation.bracket
%                  ^ punctuation.delimiter

-module('lru').
% ^ keyword
%        ^ module

-export([a_func/1,another_func/2]).
% ^ keyword
%       ^ punctuation.bracket
%         ^ function
%              ^ operator
%               ^ number
%                    ^ function

-export_type([a_type/1,another_type/2]).
% ^ keyword
%            ^ punctuation.bracket
%             ^ function
%                   ^ operator
%                    ^ number
%                        ^ function

-import(lists, [sort/1,map/2]).
% ^ keyword
%        ^ module
%                ^ function
%                   ^ operator
%                    ^ number

-type t() :: integer()
% ^ keyword
%     ^ function
%          ^ operator
%             ^ function
           | 0
%          ^ operator
%            ^ number
           | 0..1
%          ^ operator
%            ^ number
%               ^ number
           | $a..$b
%          ^ operator
%             ^ constant
%                ^ constant
           | [non_neg_integer(), ...]
%          ^ operator
%            ^ punctuation.bracket
%              ^ function
%                                 ^ comment.discard
           | #{mfa() => atom()}.
%          ^ operator
%            ^ operator
%             ^ punctuation.bracket

-opaque o() :: integer().
% ^ keyword
%       ^ function
%           ^ operator
%                ^ function

-spec ok_this(Term) -> {ok, Term} when Term :: any().
% ^ keyword
%      ^ function
%             ^ variable
%                    ^ operator
%                      ^ punctuation.bracket
%                       ^ string.special.symbol
%                         ^ punctuation.delimiter
%                            ^ variable
%                                  ^ keyword
%                                       ^ variable
%                                            ^ operator
%                                               ^ function

-spec erlang:ok() -> ok.
%      ^ module
%            ^ function
%                     ^ string.special.symbol

-ifdef(debug).
% ^ keyword
%       ^ keyword.directive
-ifdef(TEST).
% ^ keyword
%       ^ keyword.directive
-define(LOG(X), io:format("~80~n", [X])).
% ^ keyword
%        ^ keyword.directive
%           ^ variable
%                ^ module
%                   ^ function
%                           ^ string
%                                   ^ variable

-define(SUB_PASS_TIMES, compile__sub_pass_times).
% ^ keyword
%        ^ constant
%                        ^ string.special.symbol
-elif true.
% ^ keyword
-else.
% ^ keyword
-define(LOG(X), ok).
% ^ keyword
%        ^ keyword.directive
%           ^ variable
%                ^ string.special.symbol
-endif.
% ^ keyword

-record(person, {name,
% ^ keyword
%         ^ type
%                 ^ property
                 email_address="",
%                 ^ property
%                               ^ string
                 ssn :: string(),
%                 ^ property
                 phone=1 :: integer()}).
%                 ^ property

-record(?MODULE, {name}).
%        ^ constant
%                  ^ property

-compile({no_auto_import,[min/2]}).
% ^ keyword
%          % ^ string.special.symbol
%                          ^ function

-include("file.hrl").
% ^ keyword

-file("myfile.erl", 3).
% ^ keyword

-callback name(Arguments) -> Result.
% ^ keyword
%          ^ function

-optional_callbacks([a_callback/3]).
% ^ keyword
%                    ^ function

-ifndef(TEST).
% ^ keyword
%        ^ keyword.directive

-behaviour(gen_server).
% ^ keyword
%           ^ module
-behavior(gen_server).
% ^ keyword
%           ^ module

-dialyzer({nowarn_function, [compile/1]}).
% ^ keyword
%           ^ string.special.symbol
%                             ^ function

-record(garbage_collection, {}).
%% ^ keyword
%%       ^ type
