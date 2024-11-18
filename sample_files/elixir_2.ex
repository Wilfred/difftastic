defmodule ExampleComponent do
  defp greet_str do
    "Hello world!"
  end

  def greet_component(assigns) do
    ~H"""
    <p class="title new-class">
      <b><%= greet_str() %></b>
    </p>
    """
  end
end
