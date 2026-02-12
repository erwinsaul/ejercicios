defmodule Main do
  def leer() do
    IO.gets("") |> String.trim()
  end
  def main() do
    n = leer()
    suma = n
      |> String.graphemes()
      |> Enum.map(&String.to_integer/1)
      |> Enum.sum()
    r = rem(suma, 3)
    IO.puts(r)
  end
end
Main.main()
