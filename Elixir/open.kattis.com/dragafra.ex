defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      input when is_binary(input) ->
        [a, b] = input
          |> String.trim()
          |> String.split()
          |> Enum.map(&String.to_integer/1)

        r = a - b
        IO.puts(r)
    end
  end
end
