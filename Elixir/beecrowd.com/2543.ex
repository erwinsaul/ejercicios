defmodule Main do
  def leer do
    case IO.gets("") do
      :eof ->
        System.halt(0)
      input ->
        data = input |> String.trim() |> String.split()
        [a, b] = data
        {
          String.to_integer(a),
          String.to_integer(b)
        }
    end
  end

  def leer_n_lineas(n) do
    Enum.map(1..n, fn _ -> leer() end)
  end

  def contar_registros(lista, codigo) do
    Enum.count(lista, fn {cod, valor} ->
      cod == codigo and valor == 0
    end)
  end

  def main do
    {n, codigo} = leer()
    datos = leer_n_lineas(n)
    total = contar_registros(datos, codigo)
    IO.puts(total)
    main()
  rescue
    _ -> :ok
  end
end

Main.main()
