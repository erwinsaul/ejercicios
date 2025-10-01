defmodule Main do
  def leer do
    IO.gets("") |> String.trim |> String.split(" ") |> Enum.map(&String.to_float/1)
  end
  def verificar(a,b,c, _data) when (a+b)>c do
    # Es triangulo
    perimetro =  a + b + c
    IO.puts("Perimetro = #{:erlang.float_to_binary(perimetro, [decimals: 1])}")
  end
  def verificar(_a,_b,_c, data) do
    # No es triangulo
    [a,b,c] = data
    area = ((a+b)*c)/2
    IO.puts("Area = #{:erlang.float_to_binary(area, [decimals: 1])}")
  end
  def main do
    data = leer()
    datos = Enum.sort(data)
    [a,b,c] = datos
    verificar(a,b,c, data)
  end
end
Main.main()
