defmodule Main do
  def main() do
    [a, b, c] =
      IO.binread(:stdio, :all)
      |> String.trim_trailing()
      |> String.split("\n")
      |> Enum.map(&String.to_integer/1)
    d = b*b - 4*a*c
    r = case d do
      d when d < 0 -> 0
      d when d > 0 -> 2
      _ -> 1
    end
    IO.puts(r)
  end
end
