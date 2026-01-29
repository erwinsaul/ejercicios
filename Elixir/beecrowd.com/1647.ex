defmodule Main do
  def leer_n() do
    IO.gets("") |> String.trim()
  end
  def leer_linea() do
    IO.gets("") |> String.trim() |> String.split(" ") |> Enum.map(&String.to_integer/1)
  end
  def solve(lista) do
    lista
    |> Enum.reverse()
    |> Enum.reduce({0, 0}, fn m, {suma, total} ->
      x = m + suma
      nueva_suma = suma + x
      nuevo_total = total + x
      {nueva_suma, nuevo_total}
    end)
    |> elem(1)
  end
  def main() do
    case leer_n() |> String.to_integer() do
      0 -> :ok
      _n ->
        lista = leer_linea()
        resultado = solve(lista)
        IO.puts(resultado)
        main()
    end
  end
end

Main.main()
