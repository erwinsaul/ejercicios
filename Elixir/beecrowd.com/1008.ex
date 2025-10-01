defmodule Main do
  def leer_entero do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def leer_float do
    IO.gets("") |> String.trim() |> String.to_float()
  end
  def main do
    n = leer_entero()
    horas = leer_entero()
    precio = leer_float()
    salario = horas*precio
    IO.puts("NUMBER = #{n}")
    IO.puts("SALARY = U$ #{:erlang.float_to_binary(salario, [decimals: 2])}")
  end
end

Main.main()
