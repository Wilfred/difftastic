defmodule ExampleComponent do
  defp greet do
    "Hello world"
  end

  def greet_component(assigns) do
    ~H"""
    <p class="title">
      <%= greet() %>
    </p>
    """
  end
end
