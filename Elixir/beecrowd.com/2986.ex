defmodule Main do
  @modulo 1_000_000_007
  def solve(0), do: 1
  def solve(1), do: 1
  def solve(2), do: 2
  def solve(n) do
     tribonacci(3, n, 1, 1, 2)
  end
  defp tribonacci(i, n, a, b, c) when i>n, do: c
  defp tribonacci(i, n, a, b, c) do
    next = rem(a+b+c, @modulo)
    tribonacci(i+1, n, b, c, next)
  end
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main() do
    n = leer()
    r = solve(n)
    IO.puts(r)
  end
end

Main.main()
