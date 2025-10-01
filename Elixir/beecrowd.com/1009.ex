defmodule Main do
  def leer_nombre do
    IO.gets("") |> String.trim()
  end
  def leer do
    IO.gets("") |> String.trim() |> String.to_float()
  end
  def main do
    nombre = leer_nombre()
    salario = leer()
    ventas = leer()
    total = salario + 0.15*ventas
    IO.puts("TOTAL = R$ #{:erlang.float_to_binary(total, [decimals: 2])}")
  end

end

Main.main()
