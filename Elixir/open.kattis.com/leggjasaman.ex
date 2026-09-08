defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      line when is_binary(line) ->
        case line |> String.split() |> Enum.map(&String.to_integer/1) do
          [a, b | _resto] -> IO.puts(a+b)
          _ -> :ok
        end
    end
  end
end

Main.main()
