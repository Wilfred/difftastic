defmodule Foo.Bar.Baz do
  #        ^ definition.module
  #            ^ definition.module
  #                ^ definition.module

  def init(arg) do
    #  ^ definition.function
    state =
      arg
      |> map(&(&1 * 2))
      #   ^ reference.call
      |> map(&(&1 + 1))
      #   ^ reference.call

    {:ok, arg}
  end

  def map(list, fun, acc \\ [])
  #    ^ definition.function

  def map([head | rest], fun, acc) do
    #  ^ definition.function
    map(rest, fun, [fun.(head) | acc])
    # <- reference.call
  end

  def map([], _fun, acc), do: Enum.reverse(acc)
  #    ^ definition.function
  #                             ^ reference.module
  #                                    ^ reference.call
end
