defmodule Main do
  def leer_tres_numeros do
    case IO.gets("") do
      :eof -> []
      {:error, _} -> []
      data ->
        data
        |> String.trim()
        |> String.split(" ")
        |> Enum.map(fn x -> String.to_integer(x) end)
    end

  end

  def contar_cincos(lista ) do
    Enum.count(lista, fn x -> x == 5 end)
  end

  def contar_sietes(lista) do
   Enum.count(lista, fn x -> x == 7 end)
  end

  def main do
    # Leer los tres números
    lista = leer_tres_numeros()
    cincos = contar_cincos(lista)
    sietes = contar_sietes(lista)
    if cincos == 2 and sietes == 1 do
      IO.puts("YES")
    else
      IO.puts("NO")
    end

  end
end

Main.main()
