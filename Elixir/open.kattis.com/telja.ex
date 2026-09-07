defmodule Main do
  def main() do
    case IO.gets("") do
      :eof -> :ok
      line when is_binary(line) ->
        t = line |> String.trim() |> String.to_integer()
          1..t
        |> Enum.map(fn x -> [Integer.to_string(x), "\n"] end)
        |> IO.puts()
    end
  end
end
Main.main()
