defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def leer_linea do
    data = IO.gets("") |> String.trim() |> String.split()
    [a, b] = data
    {
      String.to_integer(a),
      String.to_integer(b)
    }
  end
  def solve(0), do: 0

  def solve(n) when n>0 do
    {a, b} = leer_linea()
    r = a*b
    r + solve(n-1)
  end
  def main do
    n = leer()
    r = solve(n)
    IO.puts("#{r}")
  end
end
Main.main()
