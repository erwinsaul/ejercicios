defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      input when is_binary(input) ->
        case input |> String.trim() |> String.split() do
          [n] ->
            r  = String.to_integer(n) - 1
            IO.puts(r)
          _ ->
            :ok
        end
    end
  end
end
