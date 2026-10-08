defmodule Main do
  def solve(n) when n==1984, do: "Literally 1984"
  def solve(_n), do: "Not 1984... yet"
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    r = solve(n)
    IO.puts(r)
  end
end
