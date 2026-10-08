defmodule Main do
  def solve(a, b, c) when a<90 and b<90 and c <90, do: "Spetsig Triangel"
  def solve(a, b, c) when a>90 or b>90 or c>90, do: "Trubbig Triangel"
  def solve(a, b, c) when a==90 or b==90 or c==90, do: "Ratvinklig Triangel"
  def main() do
    [a,b,c] =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
    r = solve(a, b, c)
    IO.puts(r)
  end
end
