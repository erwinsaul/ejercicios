defmodule Main do
  def main() do
    [n | lista] =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
    s = lista |> Enum.sum()
    r = s - (n-1)
    IO.puts(r)
  end
end
