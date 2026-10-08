defmodule Main do
  def solve(a, b) when a==b, do: "Goggi svangur!"
  def solve(a, b) when a>b, do: ">"
  def solve(a, b) when a<b, do: "<"

  def main() do
    [a, _op, b] =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
    val_a = a |> String.to_integer()
    val_b = b |> String.to_integer()
    r = solve(val_a, val_b)
    IO.puts("#{r}")
  end
end
