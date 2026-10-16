defmodule Main do
  def solve(a, b) when a>0 and b>0, do: 1
  def solve(a, b) when a>0 and b<0, do: 4
  def solve(a, b) when a<0 and b>0, do: 2
  def solve(a, b) when a<0 and b<0, do: 3
  def main() do
    [a, b] =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
      r = solve(a, b)
      IO.puts(r)
  end
end

