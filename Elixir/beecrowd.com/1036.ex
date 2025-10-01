defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a, b ,c] = data
    {
      String.to_float(a),
      String.to_float(b),
      String.to_float(c)
    }
  end
  def verificar(a, b, c) do
    d = b*b - 4*a*c
    d >= 0 and a != 0
  end
  def main do
    {a,b,c} = leer()
    if verificar(a,b,c) do
      d = b*b - 4*a*c
      x1 = (-b+:math.sqrt(d))/(2*a)
      x2 = (-b-:math.sqrt(d))/(2*a)
      IO.puts("R1 = #{:erlang.float_to_binary(x1, [decimals: 5])}")
      IO.puts("R2 = #{:erlang.float_to_binary(x2, [decimals: 5])}")
    else
      IO.puts("Impossivel calcular")
    end
  end
end

Main.main()
