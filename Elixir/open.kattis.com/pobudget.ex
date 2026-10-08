defmodule Main do
  def solve(n) when n==0, do: "Lagom"
  def solve(n) when n>0, do: "Usch, vinst"
  def solve(n) when n<0, do: "Nekad"
  def main() do
    _n = IO.gets("") |> String.trim() |> String.to_integer()
    lista = IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
    suma =
      lista
      |> Enum.chunk_every(2)
      |> Enum.map(fn [_nombre, valor]->
        valor
        |> String.to_integer()
      end)
      |> Enum.sum()
    r = solve(suma)
    IO.puts(r)
  end
end
