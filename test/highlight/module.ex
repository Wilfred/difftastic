defmodule Long.Module.Name do
# ^ keyword
#         ^ type
#             ^ type
#                          ^ keyword

  @moduledoc "Simple doc"
  # <- comment.doc
  # ^ comment.doc.__attribute__
  #           ^ comment.doc

  @moduledoc false
  # <- comment.doc
  # ^ comment.doc.__attribute__
  #          ^ comment.doc

  @moduledoc """
  Heredoc doc
  """
  # ^ comment.doc

  @moduledoc ~S'''
  Sigil doc
  '''
  # ^ comment.doc

  @moduledoc "With #{1} interpolation"
  #                ^ punctuation.special
  #                  ^ number
  #                   ^ punctuation.special

  @typedoc "Type doc"
  # <- comment.doc

  @doc "Type doc"
  # <- comment.doc

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
  # <- comment.doc

  @spec func(type, integer()) :: :ok | :fail
  # <- attribute
  # ^ attribute
  #     ^ function
  #         ^ punctuation.bracket
  #          ^ variable
  #              ^ punctuation.delimiter
  #                ^ function
  #                       ^ punctuation.bracket
  #                        ^ punctuation.bracket
  #                         ^ punctuation.bracket
  #                           ^ operator
  #                              ^ string.special.symbol
  #                                  ^ operator
  #                                    ^ string.special.symbol

  defstruct items: []
  # ^ keyword
  #         ^ string.special.symbol
  #                ^ punctuation.bracket
  #                 ^ punctuation.bracket

  defexception [:message]
  # ^ keyword
  #            ^ punctuation.bracket
  #             ^ string.special.symbol
  #                     ^ punctuation.bracket

  @type item :: String.t()
  # <- attribute
  # ^ attribute
  #     ^ variable
  #          ^ operator
  #             ^ type
  #                   ^ operator
  #                    ^ function
  #                     ^ punctuation.bracket
  #                      ^ punctuation.bracket

  @attr "value"
  # <- attribute
  # ^ attribute
  #     ^ string

  @true
  # ^ attribute

  @nil
  # ^ attribute

  def f, do: nil
  # ^ keyword
  #   ^ function
  #    ^ punctuation.delimiter
  #      ^ string.special.symbol
  #          ^ constant

  def f(x), do: x
  # ^ keyword
  #   ^ function
  #    ^ punctuation.bracket
  #     ^ variable
  #      ^ punctuation.bracket
  #       ^ punctuation.delimiter
  #         ^ string.special.symbol
  #             ^ variable

  def f(10), do: nil
  # ^ keyword
  #   ^ function
  #    ^ punctuation.bracket
  #       ^ punctuation.bracket
  #        ^ punctuation.delimiter
  #          ^ string.special.symbol
  #              ^ constant

  def f(a, b \\ []), do: nil
  # <- keyword
  #   ^ function
  #    ^ punctuation.bracket
  #     ^ variable
  #      ^ punctuation.delimiter
  #        ^ variable
  #          ^ operator
  #             ^ punctuation.bracket
  #               ^ punctuation.bracket
  #                ^ punctuation.delimiter
  #                  ^ string.special.symbol
  #                      ^ constant

  def __before_compile__(_) do
  # <- keyword
  #   ^ function
  #                     ^ punctuation.bracket
  #                      ^ comment.unused
  #                       ^ punctuation.bracket
  #                         ^ keyword
  end
  # <- keyword

  def with_guard(x) when x == 1 do: nil
  # <- keyword
  #   ^ function
  #              ^ variable
  #                 ^ keyword
  #                      ^ variable
  #                        ^ operator
  #                           ^ number
  #                             ^ keyword
  # <- keyword

  def with_guard when is_integer(1), do: nil
  # <- keyword
  #   ^ function
  #              ^ keyword
  #                   ^ function
  #                             ^ punctuation.bracket
  #                              ^ number
  #                               ^ punctuation.bracket
  #                                ^ punctuation.delimiter
  #                                  ^ string.special.symbol
  #                                       ^ constant

  def x + y, do: nil
  # ^ keyword
  #   ^ variable
  #     ^ operator
  #       ^ variable
  #        ^ punctuation.delimiter
  #          ^ string.special.symbol
  #              ^ constant

  def x |> y, do: nil
  # ^ keyword
  #   ^ variable
  #     ^ operator
  #        ^ variable
  #         ^ punctuation.delimiter
  #           ^ string.special.symbol
  #               ^ constant

  def x and y, do: nil
  # ^ keyword
  #   ^ variable
  #     ^ keyword
  #         ^ variable
  #          ^ punctuation.delimiter
  #            ^ string.special.symbol
  #                ^ constant

  def unquote(f)(x), do: nil
  # ^ keyword
  #   ^ keyword
  #          ^ punctuation.bracket
  #           ^ variable
  #            ^ punctuation.bracket
  #             ^ punctuation.bracket
  #              ^ variable
  #               ^ punctuation.bracket
  #                ^ punctuation.delimiter
  #                  ^ string.special.symbol
  #                      ^ constant

  def unquote(name)(unquote_splicing(args)), do: nil
  # ^ keyword
  #   ^ keyword
  #          ^ punctuation.bracket
  #           ^ variable
  #               ^ punctuation.bracket
  #                ^ punctuation.bracket
  #                 ^ keyword
  #                                 ^ punctuation.bracket
  #                                  ^ variable
  #                                      ^ punctuation.bracket
  #                                       ^ punctuation.bracket
  #                                          ^ string.special.symbol
  #                                              ^ constant

  def(test(x), do: x)
  # ^ keyword
  #  ^ punctuation.bracket
  #       ^ punctuation.bracket
  #        ^ variable
  #         ^ punctuation.bracket
  #          ^ punctuation.delimiter
  #            ^ string.special.symbol
  #                ^ variable
  #                 ^ punctuation.bracket

  defguard is_something(one), do: one != nil
  # ^ keyword
  #        ^ function
  #                    ^ punctuation.bracket
  #                     ^ variable
  #                        ^ punctuation.bracket
  #                         ^ punctuation.delimiter
  #                           ^ string.special.symbol
  #                               ^ variable
  #                                   ^ operator
  #                                      ^ constant

  defdelegate empty?(list), to: Enum
  # ^ keyword
  #           ^ function
  #                 ^ punctuation.bracket
  #                  ^ variable
  #                      ^ punctuation.bracket
  #                       ^ punctuation.delimiter
  #                         ^ string.special.symbol
  #                             ^ type

  defmacro meta_function(name) do
  # ^ keyword
  #        ^ function
  #                     ^ punctuation.bracket
  #                      ^ variable
  #                          ^ punctuation.bracket
  #                            ^ keyword
    quote do
    # ^ keyword
    #     ^ keyword
      def unquote(:"#{name}_foo")() do
      # ^ keyword
      #   ^ keyword
      #          ^ punctuation.bracket
      #           ^ string.special.symbol
      #             ^ punctuation.special
      #               ^ variable
      #                   ^ punctuation.special
      #                    ^ string.special.symbol
      #                         ^ punctuation.bracket
      #                          ^ punctuation.bracket
      #                           ^ punctuation.bracket
      #                             ^ keyword
        unquote("yessir")
        # ^ keyword
        #      ^ punctuation.bracket
        #       ^ string
        #               ^ punctuation.bracket
      end
      # <- keyword
    end
    # <- keyword
  end
  # <- keyword
end
# <- keyword

defprotocol Useless do
# ^ keyword
#           ^ type
#                   ^ keyword
  def func(this)
  # ^ keyword
  #   ^ function
  #       ^ punctuation.bracket
  #        ^ variable
  #            ^ punctuation.bracket
end
# <- keyword

defimpl Useless, for: Atom do
# ^ keyword
#       ^ type
#              ^ punctuation.delimiter
#                ^ string.special.symbol
#                     ^ type
#                           ^ keyword
end
# <- keyword
