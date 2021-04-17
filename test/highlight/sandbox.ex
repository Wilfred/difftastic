0b0101011
1234 ; 0x1A ; 0xbeef ; 0763 ; 0o123
3.14 ; 5.0e21 ; 0.5e-12
100_000_000

0B01 ; 0XAF ; 0O123

# Characters
?a ; ?1 ; ?\n ; ?\s ; ?\c ; ? ; ?,

# Atoms
#<- comment
:this ; :that
#<- tag
#       ^ tag
:'complex atom'
#<- tag
:"with' \"\" 'quotes"
#<- tag
# ^ tag
#       ^ escape
#         ^ escape
#           ^ tag
#                   ^ tag
:" multi
 line ' \s \123 \xff
atom"
:... ; :<<>> ; :%{} ; :% ; :{}
:++; :--; :*; :~~~; :::
:% ; :. ; :<-
#<- tag
#    ^ tag
#         ^ tag

# Strings
"Hello world"
#<- string
#^ string
#           ^ string
"Interspersed \x{ff} codes \7 \8 \65 \016 and \t\s\\s\z\+ \\ escapes"
#<- string
#^ string
#             ^ escape
#                   ^ string
#                          ^ escape
#                            ^ string
#                             ^ escape
#                               ^ string
#                                ^ escape
#                                  ^ string
#                                    ^ escape
#                                      ^ string
#                                             ^ escape
#                                               ^ escape
#                                                 ^ escape
#                                                   ^ string
#                                                    ^ escape
#                                                      ^ escape
#                                                        ^ string
#                                                         ^ escape
#                                                           ^ string
#                                                                   ^ string
"Quotes ' inside \" \123 the \"\" \xF \\xF string \\\" end"
"Multiline
   string"

# Heredoc String
"""
Hello world
"""
#<- string

"""
Hello #{["Random" | "String"] && true}
More Text "with quotes"
"""

# Char lists
'this is a list'
'escapes \' \t \\\''
'Multiline
    char
  list
'
#<- string

# Binaries
<<1, 2, 3>>
<<"hello"::binary, c :: utf8, x::[4, unit(2)]>> = "helloâ„¢1"
#<- punctuation.bracket
# ^ string
#  ^ string
#       ^ string
#        ^ operator
#                ^ punctuation.delimiter
#                    ^ operator
#                           ^ punctuation.delimiter
#                              ^ operator
#                                ^ punctuation.bracket
#                                  ^ punctuation.delimiter
#                                        ^ punctuation.bracket
#                                          ^ punctuation.bracket
#                                           ^ punctuation.bracket
#                                            ^ punctuation.bracket
#                                               ^ operator
#                                                 ^ string
#                                                  ^ string
#                                                           ^ string

# Sigils
~r/this + i\s "a" regex/
#<- string.special
#  ^ string
#          ^ escape
#            ^ string
#                      ^ string.special
~R'this + i\s "a" regex too'
#<- string.special
#  ^ string
#                          ^ string.special
~w(hello #{ ["has" <> "123", '\c\d', "\123 interpol" | []] } world)s
#<- string.special
#  ^ string
#        ^ punctuation.special
#           ^ punctuation.bracket
#            ^ string
#             ^ string
#                ^ string
#                  ^ operator
#                     ^ string
#                      ^ string
#                         ^ string
#                          ^ punctuation.delimiter
#                            ^ string
#                             ^ escape
#                               ^ escape
#                                 ^ string
#                                  ^ punctuation.delimiter
#                                    ^ string
#                                     ^ escape
#                                       ^ string
#                                                  ^ string
#                                                    ^ operator
#                                                      ^ punctuation.bracket
#                                                       ^ punctuation.bracket
#                                                        ^ punctuation.bracket
#                                                          ^ punctuation.special
#                                                           ^ string
#                                                                 ^ string.special
~W(hello #{no "123" \c\d \123 interpol} world)s
#<- string.special
#  ^ string
#                                            ^ string.special
~s{Escapes terminators \{ and \}, but no {balancing} # outside of sigil here }
#<- string.special
#  ^ string
#                      ^ escape
#                        ^ string
#                             ^ escape
#                               ^ string
#                                                  ^ string.special
#                                                    ^ comment
~S"No escapes \s\t\n and no #{interpolation}"
#<- string.special
#  ^ string
#                                           ^ string.special
~r/foo|bar/
#<- string.special
#  ^ string
#         ^ string.special
~r/hello/i
#<- string.special
#  ^ string
#       ^ string.special
~r/hello/
#<- string.special
#  ^ string
#       ^ string.special
~r|hello|
#<- string.special
#  ^ string
#       ^ string.special
~r"hello"
#<- string.special
#  ^ string
#       ^ string.special
~r'hello'
#<- string.special
#  ^ string
#       ^ string.special
~r(hello)
#<- string.special
#  ^ string
#       ^ string.special
~r[hello]
#<- string.special
#  ^ string
#       ^ string.special
~r{hello}
#<- string.special
#  ^ string
#       ^ string.special
~r<hello>
#<- string.special
#  ^ string
#       ^ string.special
~D[2019-10-31]
#<- string.special
#  ^ string
#            ^ string.special
~U[2019-10-31 19:59:03Z]
#<- string.special
#  ^ string
#                      ^ string.special
~i(13)
#<- string.special
#  ^ string
#    ^ string.special
~i(42)n
#<- string.special
#  ^ string
#    ^ string.special

:"atoms work #{"to" <> "o"}"
#<- tag
# ^ tag
#            ^ punctuation.special
#              ^ string
#               ^ string
#                 ^ string
#                   ^ operator
#                      ^ string
#                       ^ string
#                        ^ string
#                         ^ punctuation.special
#                          ^ tag

# Operators
x = 1 + 2.0 * 3
y = true and false; z = false or true
# ^ operator
#   ^ constant.builtin
#        ^ keyword
#            ^ constant.builtin
#                     ^ operator
#                       ^ constant.builtin
#                             ^ keyword
#                                ^ constant.builtin
... = 144
#   ^ operator
... == !x && y || z
#   ^ operator
#      ^ operator
#         ^ operator
#              ^ operator
"hello" |> String.upcase |> String.downcase()
#<- string
#^ string
#     ^ string
#       ^ operator
#          ^ type
#                ^ punctuation.delimiter
#                        ^ operator
#                           ^ type
#                                 ^ punctuation.delimiter
#                                          ^ punctuation.bracket
#                                           ^ punctuation.bracket
{^z, a} = {true, x}
#<- punctuation.bracket
#^ operator
#  ^ punctuation.delimiter
#     ^ punctuation.bracket
#       ^ operator
#         ^ punctuation.bracket
#          ^ constant.builtin
#              ^ punctuation.delimiter
#                 ^ punctuation.bracket

# Free operators (added in 1.0.0)
p  ~>> f  = bind(p, f)
#  ^ operator
#         ^ operator
#               ^ punctuation.bracket
#                 ^ punctuation.delimiter
#                    ^ punctuation.bracket
p1 ~>  p2 = pair_right(p1, p2)
#  ^ operator
#         ^ operator
#                     ^ punctuation.bracket
#                        ^ punctuation.delimiter
#                            ^ punctuation.bracket
p1 <~  p2 = pair_left(p1, p2)
#  ^ operator
#         ^ operator
#                    ^ punctuation.bracket
#                       ^ punctuation.delimiter
#                           ^ punctuation.bracket
p1 <|> p2 = either(p1, p2)
#  ^ operator
#         ^ operator
#                 ^ punctuation.bracket
#                    ^ punctuation.delimiter
#                        ^ punctuation.bracket

# Lists, tuples, maps, keywords
[1, :a, 'hello'] ++ [2, 3]
#<- punctuation.bracket
# ^ punctuation.delimiter
#   ^ tag
#     ^ punctuation.delimiter
#       ^ string
#        ^ string
#             ^ string
#              ^ punctuation.bracket
#                ^ operator
#                   ^ punctuation.bracket
#                     ^ punctuation.delimiter
#                        ^ punctuation.bracket
[:head | [?t, ?a, ?i, ?l]]
#<- punctuation.bracket
#^ tag
#      ^ operator
#        ^ punctuation.bracket
#           ^ punctuation.delimiter
#               ^ punctuation.delimiter
#                   ^ punctuation.delimiter
#                       ^ punctuation.bracket
#                        ^ punctuation.bracket
{:one, 2.0, "three"}
#<- punctuation.bracket
#^ tag
#    ^ punctuation.delimiter
#         ^ punctuation.delimiter
#           ^ string
#            ^ string
#                 ^ string
#                  ^ punctuation.bracket
[...: "this", <<>>: "is", %{}: "a keyword", %: "list", {}: "too"]
#<- punctuation.bracket
#^ tag
#     ^ string
#      ^ string
#          ^ string
#           ^ punctuation.delimiter
#             ^ tag
#                   ^ string
#                    ^ string
#                      ^ string
#                       ^ punctuation.delimiter
#                         ^ tag
#                              ^ string
#                               ^ string
#                                        ^ string
#                                         ^ punctuation.delimiter
#                                           ^ tag
#                                              ^ string
#                                               ^ string
#                                                   ^ string
#                                                    ^ punctuation.delimiter
#                                                      ^ tag
#                                                          ^ string
#                                                           ^ string
#                                                              ^ string
#                                                               ^ punctuation.bracket
["this is an atom too": 1, "so is this": 2]
#<- punctuation.bracket
#^ tag
# ^ tag
#                    ^ tag
#                     ^ tag
#                        ^ punctuation.delimiter
#                          ^ tag
#                           ^ tag
#                                     ^ tag
#                                      ^ tag
#                                         ^ punctuation.bracket
["this is an #{true} too": 1, "so is this#{"\nabc\n"}": 2]
#<- punctuation.bracket
#^ tag
# ^ tag
#            ^ punctuation.special
#              ^ constant.builtin
#                  ^ punctuation.special
#                   ^ tag
#                       ^ tag
#                        ^ tag
#                           ^ punctuation.delimiter
#                             ^ tag
#                              ^ tag
#                                        ^ punctuation.special
#                                          ^ string
#                                           ^ escape
#                                             ^ string
#                                                ^ escape
#                                                  ^ string
#                                                   ^ punctuation.special
#                                                    ^ tag
#                                                     ^ tag
#                                                        ^ punctuation.bracket
[option: "value", key: :word]
#<- punctuation.bracket
#^ tag
#        ^ string
#         ^ string
#              ^ string
#               ^ punctuation.delimiter
#                 ^ tag
#                      ^ tag
#                           ^ punctuation.bracket
[++: "operator", ~~~: :&&&]
#<- punctuation.bracket
#^ tag
#    ^ string
#     ^ string
#             ^ string
#              ^ punctuation.delimiter
#                ^ tag
#                     ^ tag
#                         ^ punctuation.bracket
map = %{shortcut: "syntax"}
#   ^ operator
#       ^ tag
#                 ^ string
#                  ^ string
#                        ^ string
#                         ^ punctuation.bracket
%{map | "update" => "me"}
#     ^ operator
#       ^ string
#        ^ string
#              ^ string
#                ^ operator
#                   ^ string
#                    ^ string
#                      ^ string
#                       ^ punctuation.bracket
%{ 12 => 13, :weird => ['thing'] }
#     ^ operator
#          ^ punctuation.delimiter
#            ^ tag
#                   ^ operator
#                      ^ punctuation.bracket
#                       ^ string
#                        ^ string
#                             ^ string
#                              ^ punctuation.bracket
#                                ^ punctuation.bracket

# Comprehensions
for x <- 1..10, x < 5, do: {x, x}
#<- keyword
#     ^ operator
#         ^ operator
#             ^ punctuation.delimiter
#                 ^ operator
#                    ^ punctuation.delimiter
#                      ^ tag
#                          ^ punctuation.bracket
#                            ^ punctuation.delimiter
#                               ^ punctuation.bracket
pixels = "12345678"
#      ^ operator
#        ^ string
#         ^ string
#                 ^ string
for << <<r::4, g::4, b::4, a::size(4)>> <- pixels >> do
#<- keyword
#   ^ punctuation.bracket
#      ^ punctuation.bracket
#         ^ operator
#            ^ punctuation.delimiter
#               ^ operator
#                  ^ punctuation.delimiter
#                     ^ operator
#                        ^ punctuation.delimiter
#                           ^ operator
#                                 ^ punctuation.bracket
#                                   ^ punctuation.bracket
#                                    ^ punctuation.bracket
#                                       ^ operator
#                                                 ^ punctuation.bracket
#                                                    ^ keyword
  [r, {g, %{"b" => a}}]
end

# String interpolation
"String #{inspect "interpolation"} is quite #{1+4+7} difficult"
#<- string
#^ string
#       ^ punctuation.special
#                 ^ string
#                  ^ string
#                               ^ string
#                                ^ punctuation.special
#                                 ^ string
#                                           ^ punctuation.special
#                                              ^ operator
#                                                ^ operator
#                                                  ^ punctuation.special
#                                                   ^ string
#                                                             ^ string
# Identifiers
abc_123 = 1
#       ^ operator
_018OP = 2
#<- comment
#      ^ operator
A__0 == 3
#<- type
#    ^ operator

# Modules
defmodule Long.Module.Name do
#<- keyword
#         ^ type
#                          ^ keyword

  @moduledoc "Simple module docstring"
# ^ attribute
#  ^ attribute
#            ^ string
#             ^ string
#                                    ^ string

  @doc """
  Multiline docstring
  "with quotes"
  and #{ inspect %{"interpolation" => "in" <> "action"} }
  now with #{ {:a, 'tuple'} }
  and #{ inspect {
      :tuple,
      %{ with: "nested #{ inspect %{ :interpolation => %{} } }" }
  } }
  """
  defstruct [:a, :name, :height]
# ^ keyword
#           ^ punctuation.bracket
#            ^ tag
#              ^ punctuation.delimiter
#                ^ tag
#                     ^ punctuation.delimiter
#                       ^ tag
#                              ^ punctuation.bracket

  @doc ~S'''
  No #{interpolation} of any kind.
  \000 \x{ff}

  \n #{\x{ff}}
  '''
  def func(_a, b \\ []), do: :ok
# ^ keyword
#     ^ function
#         ^ punctuation.bracket
#          ^ comment
#            ^ punctuation.delimiter
#              ^ variable.parameter
#                ^ operator
#                   ^ punctuation.bracket
#                    ^ punctuation.bracket
#                     ^ punctuation.bracket
#                      ^ punctuation.delimiter
#                        ^ tag
#                            ^ tag

  # Function
  def f(x), do: x
# ^ keyword
#     ^ function
#      ^ punctuation.bracket
#       ^ variable.parameter
#        ^ punctuation.bracket
#         ^ punctuation.delimiter
#           ^ tag
  def f, do: nil
# ^ keyword
#     ^ function
#      ^ punctuation.delimiter
#        ^ tag
#            ^ constant.builtin
  def f(10), do: nil
# ^ keyword
#     ^ function
#      ^ punctuation.bracket
#         ^ punctuation.bracket
#          ^ punctuation.delimiter
#            ^ tag
#                ^ constant.builtin
  def f(:ok), do: nil
# ^ keyword
#     ^ function
#      ^ punctuation.bracket
#       ^ tag
#          ^ punctuation.bracket
#           ^ punctuation.delimiter
#             ^ tag
#                 ^ constant.builtin

  # Operator definition (don't highlight the `x`!)
  def x + y, do: nil
# ^ keyword
#     ^ variable.parameter
#       ^ function
#         ^ variable.parameter
#          ^ punctuation.delimiter
#            ^ tag
#                ^ constant.builtin
  def x * y, do: nil
# ^ keyword
#     ^ variable.parameter
#       ^ function
#         ^ variable.parameter
#          ^ punctuation.delimiter
#            ^ tag
#                ^ constant.builtin
  def x |> y, do: nil
# ^ keyword
#     ^ variable.parameter
#       ^ function
#          ^ variable.parameter
#           ^ punctuation.delimiter
#             ^ tag
#                 ^ constant.builtin
  def x && y, do: nil
# ^ keyword
#     ^ variable.parameter
#       ^ function
#          ^ variable.parameter
#           ^ punctuation.delimiter
#             ^ tag
#                 ^ constant.builtin
  def x || y, do: nil
# ^ keyword
#     ^ variable.parameter
#       ^ function
#          ^ variable.parameter
#           ^ punctuation.delimiter
#             ^ tag
#                 ^ constant.builtin
  # Word operators
  def x and y, do: nil
# ^ keyword
#     ^ variable.parameter
#       ^ keyword
#           ^ variable.parameter
#            ^ punctuation.delimiter
#              ^ tag
#                  ^ constant.builtin
  def x or y, do: nil
# ^ keyword
#     ^ variable.parameter
#       ^ keyword
#          ^ variable.parameter
#           ^ punctuation.delimiter
#             ^ tag
#                 ^ constant.builtin
  def x in y, do: nil
# ^ keyword
#     ^ variable.parameter
#       ^ keyword
#          ^ variable.parameter
#           ^ punctuation.delimiter
#             ^ tag
#                 ^ constant.builtin
  # unquote, quote and unquote_splicing:
  def quote(f)(x), do: nil
# ^ keyword
#          ^ punctuation.bracket
#            ^ punctuation.bracket
#             ^ punctuation.bracket
#               ^ punctuation.bracket
#                ^ punctuation.delimiter
#                  ^ tag
#                      ^ constant.builtin
  def unquote(f)(x), do: nil
# ^ keyword
#            ^ punctuation.bracket
#              ^ punctuation.bracket
#               ^ punctuation.bracket
#                 ^ punctuation.bracket
#                  ^ punctuation.delimiter
#                    ^ tag
#                        ^ constant.builtin
  def unquote_splicing(f)(x), do: nil
# ^ keyword
#                     ^ punctuation.bracket
#                       ^ punctuation.bracket
#                        ^ punctuation.bracket
#                          ^ punctuation.bracket
#                           ^ punctuation.delimiter
#                             ^ tag
#                                 ^ constant.builtin
  # function name that starts with `quote`:
  def quote_me(x), do: nil
# ^ keyword
#     ^ function
#             ^ punctuation.bracket
#              ^ variable.parameter
#               ^ punctuation.bracket
#                ^ punctuation.delimiter
#                  ^ tag
#                      ^ constant.builtin
  def xyz(x) when x == nil, do: nil
# ^ keyword
#     ^ function
#        ^ punctuation.bracket
#         ^ variable.parameter
#          ^ punctuation.bracket
#            ^ keyword
#                   ^ operator
#                      ^ constant.builtin
#                         ^ punctuation.delimiter
#                           ^ tag
#                               ^ constant.builtin

  def xyz when x == nil, do: nil
# ^ keyword
#     ^ function
#         ^ keyword
#                ^ operator
#                   ^ constant.builtin
#                      ^ punctuation.delimiter
#                        ^ tag
#                            ^ constant.builtin

  @doc false
# ^ attribute
#  ^ attribute
#      ^ constant.builtin
  def __before_compile__(_) do
# ^ keyword
#     ^ function
#                       ^ punctuation.bracket
#                        ^ comment
#                         ^ punctuation.bracket
#                           ^ keyword
    :ok
  end
end

# Structs
defmodule Second.Module do
  s = %Long.Module.Name{name: "Silly"}
#   ^ operator
#      ^ type
#                      ^ punctuation.bracket
#                       ^ tag
#                             ^ string
#                              ^ string
#                                   ^ string
#                                    ^ punctuation.bracket
  %Long.Module.Name{s | height: {192, :cm}}
#  ^ type
#                  ^ punctuation.bracket
#                     ^ operator
#                       ^ tag
#                               ^ punctuation.bracket
#                                   ^ punctuation.delimiter
#                                     ^ tag
#                                        ^ punctuation.bracket
#                                         ^ punctuation.bracket
  ".. #{%Long.Module.Name{s | height: {192, :cm}}} .."
# ^ string
#  ^ string
#     ^ punctuation.special
#        ^ type
#                        ^ punctuation.bracket
#                           ^ operator
#                             ^ tag
#                                     ^ punctuation.bracket
#                                         ^ punctuation.delimiter
#                                           ^ tag
#                                              ^ punctuation.bracket
#                                               ^ punctuation.bracket
#                                                ^ punctuation.special
#                                                 ^ string
#                                                    ^ string
end

# Types, pseudo-vars, attributes
defmodule M do
  @custom_attr :some_constant
# ^ attribute
#  ^ attribute
#              ^ tag

  @before_compile Long.Module.Name
# ^ attribute
#  ^ attribute
#                 ^ type

  @typedoc "This is a type"
# ^ attribute
#  ^ attribute
#          ^ string
#           ^ string
#                         ^ string
  @type typ :: integer
# ^ attribute
#  ^ attribute
#           ^ operator

  @typedoc """
  Another type
  """
  @opaque typtyp :: 1..10
# ^ attribute
#  ^ attribute
#                ^ operator
#                    ^ operator

  @spec func(typ, typtyp) :: :ok | :fail
  def func(a, b) do
# ^ keyword
#     ^ function
#         ^ punctuation.bracket
#          ^ variable.parameter
#           ^ punctuation.delimiter
#             ^ variable.parameter
#              ^ punctuation.bracket
#                ^ keyword
    a || b || :ok || :fail
    Path.expand("..", __DIR__)
#   ^ type
#       ^ punctuation.delimiter
#              ^ punctuation.bracket
#               ^ string
#                ^ string
#                  ^ string
#                   ^ punctuation.delimiter
#                     ^ function.special
#                            ^ punctuation.bracket
    IO.inspect __ENV__
#   ^ type
#     ^ punctuation.delimiter
#              ^ function.special
    __NOTAPSEUDOVAR__ = 11
#   ^ function.special
#                     ^ operator
    __MODULE__.func(b, a)
#   ^ function.special
#             ^ punctuation.delimiter
#                  ^ punctuation.bracket
#                    ^ punctuation.delimiter
#                       ^ punctuation.bracket
  end

  defmacro x(a, a \\ nil, a.call(), a(), b.call) do
# ^ keyword
#          ^ function
#           ^ punctuation.bracket
#            ^ variable.parameter
#             ^ punctuation.delimiter
#               ^ variable.parameter
#                 ^ operator
#                    ^ constant.builtin
#                       ^ punctuation.delimiter
#                          ^ punctuation.delimiter
#                               ^ punctuation.bracket
#                                ^ punctuation.bracket
#                                 ^ punctuation.delimiter
#                                    ^ punctuation.bracket
#                                     ^ punctuation.bracket
#                                      ^ punctuation.delimiter
#                                         ^ punctuation.delimiter
#                                              ^ punctuation.bracket
#                                                ^ keyword
    nil
  end

  defmacro m() do
# ^ keyword
#          ^ function
#           ^ punctuation.bracket
#            ^ punctuation.bracket
#              ^ keyword
    __CALLER__
#   ^ function.special
  end
end

# Functions
anon = fn x, y, z ->
#    ^ operator
#      ^ keyword
#         ^ variable.parameter
#          ^ punctuation.delimiter
#            ^ variable.parameter
#             ^ punctuation.delimiter
#               ^ variable.parameter
#                 ^ punctuation.delimiter
  fn(a, b, c) ->
# ^ keyword
#   ^ punctuation.bracket
#    ^ variable.parameter
#     ^ punctuation.delimiter
#       ^ variable.parameter
#        ^ punctuation.delimiter
#          ^ variable.parameter
#           ^ punctuation.bracket
#             ^ punctuation.delimiter
    &(x + y - z * a / &1 + b + div(&2, c))
  end
end

&Set.put(&1, &2) ; & Set.put(&1, &2) ; &( Set.put(&1, &1) )
#<- operator
#^ type
#   ^ punctuation.delimiter
#       ^ punctuation.bracket
#        ^ operator
#          ^ punctuation.delimiter
#            ^ operator
#              ^ punctuation.bracket
#                  ^ operator
#                    ^ type
#                       ^ punctuation.delimiter
#                           ^ punctuation.bracket
#                            ^ operator
#                              ^ punctuation.delimiter
#                                ^ operator
#                                  ^ punctuation.bracket
#                                      ^ operator
#                                       ^ punctuation.bracket
#                                         ^ type
#                                            ^ punctuation.delimiter
#                                                ^ punctuation.bracket
#                                                 ^ operator
#                                                   ^ punctuation.delimiter
#                                                     ^ operator
#                                                       ^ punctuation.bracket
#                                                         ^ punctuation.bracket

# Function calls
anon.(1, 2, 3); self; hd([1,2,3])
#   ^ punctuation.delimiter
#    ^ punctuation.bracket
#      ^ punctuation.delimiter
#         ^ punctuation.delimiter
#            ^ punctuation.bracket
#                       ^ punctuation.bracket
#                        ^ punctuation.bracket
#                          ^ punctuation.delimiter
#                            ^ punctuation.delimiter
#                              ^ punctuation.bracket
#                               ^ punctuation.bracket
Kernel.spawn(fn -> :ok end)
#<- type
#     ^ punctuation.delimiter
#           ^ punctuation.bracket
#            ^ keyword
#               ^ punctuation.delimiter
#                  ^ tag
#                      ^ keyword
#                         ^ punctuation.bracket
IO.ANSI.black
#<- type
#      ^ punctuation.delimiter

# Control flow
if :this do
#<- keyword
#  ^ tag
#        ^ keyword
  :that
else
#<- keyword
  :otherwise
end
#<- keyword

pid = self
receive do
#<- keyword
#       ^ keyword
  {:EXIT, _} -> :done
  {^pid, :_} -> nil
  after 100 -> :no_luck
# ^ keyword
#           ^ punctuation.delimiter
#              ^ tag
end

case __ENV__.line do
#<- keyword
#    ^ function.special
#           ^ punctuation.delimiter
#                 ^ keyword
  x when is_integer(x) -> x
#   ^ keyword
#                  ^ punctuation.bracket
#                    ^ punctuation.bracket
#                      ^ punctuation.delimiter
  x when x in 1..12 -> -x
#   ^ keyword
#          ^ keyword
#              ^ operator
#                   ^ punctuation.delimiter
#                      ^ operator
end

cond do
#<- keyword
#    ^ keyword
  false -> "too bad"
# ^ constant.builtin
#       ^ punctuation.delimiter
#          ^ string
#           ^ string
#                  ^ string
  4 > 5 -> "oops"
#   ^ operator
#       ^ punctuation.delimiter
#          ^ string
#           ^ string
#               ^ string
  true -> nil
# ^ constant.builtin
#      ^ punctuation.delimiter
#         ^ constant.builtin
end

# Lexical scope modifiers
import Kernel, except: [spawn: 1, +: 2, /: 2, Unless: 2]
#<- keyword
#      ^ type
#            ^ punctuation.delimiter
#              ^ tag
#                      ^ punctuation.bracket
#                       ^ tag
#                               ^ punctuation.delimiter
#                                 ^ tag
#                                     ^ punctuation.delimiter
#                                       ^ tag
#                                           ^ punctuation.delimiter
#                                             ^ tag
#                                                      ^ punctuation.bracket
alias Long.Module.Name, as: N0men123_and4
#<- keyword
#     ^ type
#                     ^ punctuation.delimiter
#                       ^ tag
#                           ^ type
use Bitwise
#<- keyword
#   ^ type

4 &&& 5
# ^ operator
2 <<< 3
# ^ operator

# Protocols
defprotocol Useless do
#<- keyword
#           ^ type
#                   ^ keyword
  def func1(this)
# ^ keyword
#     ^ function
#          ^ punctuation.bracket
#           ^ variable.parameter
#               ^ punctuation.bracket
  def func2(that)
# ^ keyword
#     ^ function
#          ^ punctuation.bracket
#           ^ variable.parameter
#               ^ punctuation.bracket

  def func3(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
end

defimpl Useless, for: Atom do
#<- keyword
#       ^ type
#              ^ punctuation.delimiter
#                ^ tag
#                     ^ type
#                          ^ keyword
end

# Exceptions
defmodule NotAnError do
#<- keyword
#         ^ type
#                    ^ keyword
  defexception [:message]
# ^ keyword
#              ^ punctuation.bracket
#               ^ tag
#                       ^ punctuation.bracket
end

raise NotAnError, message: "This is not an error"
#<- keyword
#     ^ type
#               ^ punctuation.delimiter
#                 ^ tag
#                          ^ string
#                           ^ string
#                                               ^ string

def(test(x), do: x)
#<- keyword
#  ^ punctuation.bracket
#       ^ punctuation.bracket
#         ^ punctuation.bracket
#          ^ punctuation.delimiter
#            ^ tag
#                 ^ punctuation.bracket
