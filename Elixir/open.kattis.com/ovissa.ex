defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      line when is_binary(line) ->
        line |> String.trim() |> String.length() |> IO.puts()
    end
  end
end
