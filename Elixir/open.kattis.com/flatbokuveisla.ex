defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      input when is_binary(input) ->
        case input |> String.trim() |> String.split() do
          [n, m] ->
            r = rem(String.to_integer(n),String.to_integer(m))
            IO.puts(r)
          _ ->
            :ok
        end
    end
  end
end
