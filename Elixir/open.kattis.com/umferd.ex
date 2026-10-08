defmodule Main do
  def solve(lista) do
    lista
    |> Enum.map(fn s->
      s
      |> String.graphemes()
      |> Enum.count(fn c -> c=="." end)
    end)
    |> Enum.sum()
  end
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    m = IO.gets("") |> String.trim() |> String.to_integer()
    lista = IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
    r = solve(lista)
    resp = r / (n*m)
    IO.puts("#{resp}")
  end
end
