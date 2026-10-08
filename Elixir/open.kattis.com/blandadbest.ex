defmodule Main do
  def solve([elem]) do
     elem
  end
  def solve(_lista)do
    "blandad best"
  end
  def main() do
    _n = IO.gets("") |> String.trim() |> String.to_integer()
    lista =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
    diferentes = Enum.uniq(lista)
    r = solve diferentes
    IO.puts(r)
  end
end
