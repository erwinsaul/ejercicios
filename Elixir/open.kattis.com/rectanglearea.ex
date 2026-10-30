defmodule Main do
  def main() do
    [x1, y1, x2, y2] =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_float/1)

    x = abs(x2-x1)
    y = abs(y2-y1)
    r = x * y
    IO.puts(r)
  end
end
