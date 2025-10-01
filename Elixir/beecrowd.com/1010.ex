defmodule Main do
  def leer do
    entrada = IO.gets("")
    |> String.trim()
    |> String.split(" ")

    [codigo_str, cantidad_str, precio_str] = entrada

    {
        String.to_integer(codigo_str),
        String.to_integer(cantidad_str),
        String.to_float(precio_str)
    }
  end
  def main do
    {_codigo1, cantidad1, precio1} = leer()
    {_codigo2, cantidad2, precio2} = leer()
    r = cantidad1*precio1 + cantidad2*precio2
    IO.puts("VALOR A PAGAR: R$ #{:erlang.float_to_binary(r, [decimals: 2])}")
  end
end

Main.main()
