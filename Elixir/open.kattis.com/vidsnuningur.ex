defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      input when is_binary(input) ->
        r = String.reverse(input)
        IO.puts(r)
      end
  end
end
