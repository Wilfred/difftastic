defmodule MyModule do
  @moduledoc """
  This is documentation for the module
  """

  @doc """
  This is documentation for the function
  """
  def f(x, y, z) do
    # Place the cursor over the delimiters (...), [...], etc.
    list = [x, y, z]
    tuple = {x, y, z}
    map = %{"x" => x, "y" => y, "z" => z}
    struct = %Long.Module.Name{x: x, y: y, z: y}
    << a::size(x), b::size(y), x::size(z) >> = "abcde"
    # Nested delimiters work too:
    nested = %{
      a: [x, y, z],
      b: {x, {x, y}, {x, {x, y}, {x, y, z, [x, y, z]}}},
      c: %Long.Module.Name{
        x: x,
        y: y,
        z: << a::size(x), b::size(y) >>
      }
    }
  end
  def g() do
    IO.inspect do
      "a"
    else
      IO.inspect do
        fn x -> x + 2 end # yes, it works on fn ... end too!
      else
        "b"
      catch
        if c do
          x
        else
          case y do
            1 -> if a do
                   b
                 else
                   c
                 end
            _ -> "Wow, we're deep now!"
          end
        end
      rescue
        "d"
      after
        "e"
      end
      "b"
    after
      "e"
    end
  end
end
