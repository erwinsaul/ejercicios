#TLE
defmodule Main do
  def main() do
    [_n, x | lista] =
      IO.binread(:stdio, :eof)
      |> String.split()
      |> Enum.map(&String.to_integer/1)
    r = Enum.sum(lista)
    resp = if r > x, do: "Neibb", else: "Jebb"
    IO.puts(resp)
  end
end
