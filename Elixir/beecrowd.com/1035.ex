defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a,b,c,d] = data
    {
      String.to_integer(a),
      String.to_integer(b),
      String.to_integer(c),
      String.to_integer(d)
    }
  end

  def condicion(a,b,c,d) do
    b > c and d>a and (c+d)>(a+b) and a>0 and b>0 and c > 0 and d > 0 and rem(a, 2)==0
  end
  def main do
    {a,b,c,d} = leer()
    if condicion(a,b,c,d) do
      IO.puts("Valores aceitos")
    else
      IO.puts("Valores nao aceitos")
    end
  end
end

Main.main()
