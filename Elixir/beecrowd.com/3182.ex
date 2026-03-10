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

  def solve(n, b, hoteles) do
    candidatos =
      hoteles
      |> Enum.filter(fn {precio, camas} ->
        costo =  n * precio
        costo <= b and Enum.any?(camas, fn c -> c >= n end)
      end)
      |> Enum.map(fn {precio, _} -> n * precio end)

    if candidatos == [] do
      IO.puts("stay home")
    else
      IO.puts(Enum.min(candidatos))
    end
  end

  def main() do
    [n, b, h, _w] = leer_lista()
    hoteles =
      1..h
      |> Enum.map(fn _ ->
        precio = leer_entero()
        camas = leer_lista()
        {precio, camas}
      end)

    solve(n, b, hoteles)
  end
end
Main.main()
