# Runtime Error
defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def leer_par do
    [p, w] = IO.gets("") |> String.trim() |> Enum.map(&String.to_integer/1)
    {p, w}
  end

  def knapsack(productos, cap) do
    dp_inicial = Map.new(0..cap, fn w -> {w, 0} end)

    Enum.reduce( productos. dp_inicial, fn {precio, peso}, dp ->
      Enum.reduce(cap..peso//-1, dp, fn w, dp ->
        sin_tomar = Map.get(dp, w)
        con_tomar = Map.get(dp, w - peso) + precio
        Map.put(dp, w, max(sin_tomar, con_tomar))
      end)
    end)
    |> Map.get(cap)
  end

  def solve(n) do
    productos = for _ <- 1..n, do: leer_par()
    m = leer()
    IO.puts(knapsack(productos, m))
  end

  def main() do
    case leer() do
      0 -> :ok
      n ->
        solve(n)
        main()
    end
  end
end
Main.main()
