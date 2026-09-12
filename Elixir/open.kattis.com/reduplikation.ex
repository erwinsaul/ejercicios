defmodule Main do
  def main() do
    case IO.read(:eof) do
      :oef -> :ok
      input when is_binary(input) ->
        [s, n] = input |> String.trim() |> String.split()
        r = String.duplicate(s, String.to_integer(n))
        IO.puts(r)
    end
  end
end
