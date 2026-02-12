defmodule Main do
  def leer() do
    IO.gets("")  |> String.trim() |> String.to_integer()
  end
  def leer_caso() do
    [a, b] = IO.gets("") |> String.trim() |> String.split()
    {
      String.to_integer(a),
      String.to_integer(b)
    }
  end
  def solve(0), do: :ok
  def solve(t) do
    {n, m} = leer_caso()
    r = div(n + m - 1, m)
    IO.puts(r)
    solve(t - 1)
  end
  def main() do
    n = leer()
    solve(n)
  end
end

Main.main()
