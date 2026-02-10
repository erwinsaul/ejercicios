defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def solve(1), do: 0

  def solve(n) do
    s = 81 * trunc(:math.pow(10, n - 2))
    p = 9 * trunc(:math.pow(10, div(n-1, 2)))
    div(s-p, 2)
  end
  def main() do
    n = leer()
    IO.puts(solve(n))
  end
end
Main.main()
