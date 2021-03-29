0b0101011
1234 ; 0x1A ; 0xbeef ; 0763 ; 0o123
3.14 ; 5.0e21 ; 0.5e-12
100_000_000

0B01 ; 0XAF ; 0O123

# Characters
?a ; ?1 ; ?\n ; ?\s ; ?\c ; ? ; ?,

# Atoms
:this ; :that
:'complex atom'
:"with' \"\" 'quotes"
:" multi
 line ' \s \123 \xff
atom"
:... ; :<<>> ; :%{} ; :% ; :{}
:++; :--; :*; :~~~; :::
:% ; :. ; :<-

# Strings
"Hello world"
"Interspersed \x{ff} codes \7 \8 \65 \016 and \t\s\\s\z\+ \\ escapes"
"Quotes ' inside \" \123 the \"\" \xF \\xF string \\\" end"
"Multiline
   string"

# Char lists
'this is a list'
'escapes \' \t \\\''
'Multiline
    char
  list
'

# Binaries
<<1, 2, 3>>
<<"hello"::binary, c :: utf8, x::[4, unit(2)]>> = "helloâ„¢1"

# Sigils
~r/this + i\s "a" regex/
~R'this + i\s "a" regex too'
~w(hello #{ ["has" <> "123", '\c\d', "\123 interpol" | []] } world)s
~W(hello #{no "123" \c\d \123 interpol} world)s
~s{Escapes terminators \{ and \}, but no {balancing} # outside of sigil here }
~S"No escapes \s\t\n and no #{interpolation}"
~r/foo|bar/
~r/hello/i
~r/hello/
~r|hello|
~r"hello"
~r'hello'
~r(hello)
~r[hello]
~r{hello}
~r<hello>
~D[2019-10-31]
~U[2019-10-31 19:59:03Z]
~i(13)
~i(42)n


:"atoms work #{"to" <> "o"}"

# Operators
x = 1 + 2.0 * 3
y = true and false; z = false or true
... = 144
... == !x && y || z
"hello" |> String.upcase |> String.downcase()
{^z, a} = {true, x}

# Free operators (added in 1.0.0)
p  ~>> f  = bind(p, f)
p1 ~>  p2 = pair_right(p1, p2)
p1 <~  p2 = pair_left(p1, p2)
p1 <~> p2 = pair_both(p1, p2)
p1 <|> p2 = either(p1, p2)

# Lists, tuples, maps, keywords
[1, :a, 'hello'] ++ [2, 3]
[:head | [?t, ?a, ?i, ?l]]

{:one, 2.0, "three"}

[...: "this", <<>>: "is", %{}: "a keyword", %: "list", {}: "too"]
["this is an atom too": 1, "so is this": 2]
[option: "value", key: :word]
[++: "operator", ~~~: :&&&]

map = %{shortcut: "syntax"}
%{map | "update" => "me"}
%{ 12 => 13, :weird => ['thing'] }

# Comprehensions
for x <- 1..10, x < 5, do: {x, x}
pixels = "12345678"
for << <<r::4, g::4, b::4, a::size(4)>> <- pixels >> do
  [r, {g, %{"b" => a}}]
end

# String interpolation
"String #{inspect "interpolation"} is quite #{1+4+7} difficult"

# Identifiers
abc_123 = 1
_018OP = 2
A__0 == 3

# Modules
defmodule Long.Module.Name do

  @moduledoc "Simple module docstring"

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

  @doc ~S'''
  No #{interpolation} of any kind.
  \000 \x{ff}

  \n #{\x{ff}}
  '''
  def func(_a, b \\ []), do: :ok

  # Function
  def f(x), do: x
  # Operator definition (don't highlight the `x`!)
  def x + y, do: nil
  def x * y, do: nil
  def x |> y, do: nil
  def x && y, do: nil
  def x || y, do: nil
  # Word operators
  def x and y, do: nil
  def x or y, do: nil
  def x in y, do: nil
  # unquote, quote and unquote_splicing:
  def quote(f)(x), do: nil
  def unquote(f)(x), do: nil
  def unquote_splicing(f)(x), do: nil
  # function name that starts with `quote`:
  def quote_me(x), do: nil
  def xyz(x) when x == nil, do: nil

  @doc false
  def __before_compile__(_) do
    :ok
  end
end

# Structs
defmodule Second.Module do
  s = %Long.Module.Name{name: "Silly"}
  %Long.Module.Name{s | height: {192, :cm}}
  ".. #{%Long.Module.Name{s | height: {192, :cm}}} .."
end

# Types, pseudo-vars, attributes
defmodule M do
  @custom_attr :some_constant

  @before_compile Long.Module.Name

  @typedoc "This is a type"
  @type typ :: integer

  @typedoc """
  Another type
  """
  @opaque typtyp :: 1..10

  @spec func(typ, typtyp) :: :ok | :fail
  def func(a, b) do
    a || b || :ok || :fail
    Path.expand("..", __DIR__)
    IO.inspect __ENV__
    __NOTAPSEUDOVAR__ = 11
    __MODULE__.func(b, a)
  end

  defmacro x(a, a \\ nil, a.call(), a(), b.call) do
    nil
  end

  defmacro m() do
    __CALLER__
  end
end

# Functions
anon = fn x, y, z ->
  fn(a, b, c) ->
    &(x + y - z * a / &1 + b + div(&2, c))
  end
end

&Set.put(&1, &2) ; & Set.put(&1, &2) ; &( Set.put(&1, &1) )

# Function calls
anon.(1, 2, 3); self; hd([1,2,3])
Kernel.spawn(fn -> :ok end)
IO.ANSI.black

# Control flow
if :this do
  :that
else
  :otherwise
end

pid = self
receive do
  {:EXIT, _} -> :done
  {^pid, :_} -> nil
  after 100 -> :no_luck
end

case __ENV__.line do
  x when is_integer(x) -> x
  x when x in 1..12 -> -x
end

cond do
  false -> "too bad"
  4 > 5 -> "oops"
  true -> nil
end

# Lexical scope modifiers
import Kernel, except: [spawn: 1, +: 2, /: 2, Unless: 2]
alias Long.Module.Name, as: N0men123_and4
use Bitwise

4 &&& 5
2 <<< 3

# Protocols
defprotocol Useless do
  def func1(this)
  def func2(that)
end

defimpl Useless, for: Atom do
end

# Exceptions
defmodule NotAnError do
  defexception [:message]
end

raise NotAnError, message: "This is not an error"
