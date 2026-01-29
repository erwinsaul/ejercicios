defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def solve(n) do
    limite = trunc(:math.sqrt(n))
    1..limite |> Enum.map(fn i-> i*i end)
              |> Enum.join(" ")
              |> IO.puts
  end
  def main do
    n = leer()
    case n do
      0 -> :ok
      _ ->
        solve(n)
        main()
    end
  end
end
Main.main()
