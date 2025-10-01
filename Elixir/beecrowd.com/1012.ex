defmodule Main do
  def lectura do
    lectura = IO.gets("") |> String.trim() |> String.split(" ")
    [a, b, c] = lectura
    {
      String.to_float(a),
      String.to_float(b),
      String.to_float(c)
    }
  end

  def main do
    {a, b, c} = lectura()
    a_triangulo = (a * c) / 2.0
    a_circulo = 3.14159 * c * c
    a_trapecio = ((a+b)*c)/2.0
    a_cuadrado = b*b
    a_rectangulo =a*b
    IO.puts("TRIANGULO: #{:erlang.float_to_binary(a_triangulo, [decimals: 3])}")
    IO.puts("CIRCULO: #{:erlang.float_to_binary(a_circulo, [decimals: 3])}")
    IO.puts("TRAPEZIO: #{:erlang.float_to_binary(a_trapecio, [decimals: 3])}")
    IO.puts("QUADRADO: #{:erlang.float_to_binary(a_cuadrado, [decimals: 3])}")
    IO.puts("RETANGULO: #{:erlang.float_to_binary(a_rectangulo, [decimals: 3])}")
  end
end

Main.main()
