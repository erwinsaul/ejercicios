defmodule Main do
  def leer_entero() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def leer_lista() do
    IO.gets("")
    |> String.trim()
    |> String.split()
    |> Enum.map(fn x -> String.to_integer(x) end)
  end
  def solve(arboles) do
    arboles_ordenados = Enum.sort(arboles, :desc)
    total = arboles_ordenados
             |> Enum.with_index(1)
             |> Enum.map(fn {tiempo, dia} ->
               dia + tiempo
             end)
             |> Enum.max()
    r = total + 1
    IO.puts(r)
  end
  def main() do
    _n = leer_entero()
    arboles = leer_lista()
    solve(arboles)
  end
end
Main.main()
