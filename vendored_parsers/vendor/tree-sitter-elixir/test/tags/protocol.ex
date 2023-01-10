defprotocol Countable do
  #          ^ definition.module
  def count(data)
  #    ^ definition.function
end

defimpl Countable, for: Binary do
  #      ^ reference.module
  #                      ^ reference.module
  def count(binary), do: byte_size(binary)
  #    ^ definition.function
  #                       ^ reference.call
end

defimpl Countable, for: List do
  #      ^ reference.module
  #                      ^ reference.module
  def count(list), do: length(list)
  #    ^ definition.function
  #                     ^ reference.call
end
