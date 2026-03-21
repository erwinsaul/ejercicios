#Runtime Error

defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def solve(l) do
     x = (l - 3) / l
    IO.puts(:erlang.float_to_binary(x, [decimals: 6]))
  end
  def main() do
    case leer() do
      0 -> :ok
      l ->
        solve(l)
        main()
    end
  end
end
Main.main()
