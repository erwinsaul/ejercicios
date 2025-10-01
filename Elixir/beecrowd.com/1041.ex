defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a, b] = data
    {
      String.to_float(a),
      String.to_float(b)
    }
  end
  def clasificar(x, y) when x==0.0 and y==0.0 do
    IO.puts("Origem")
  end
  def clasificar(x,_y) when x==0.0 do
    IO.puts("Eixo Y")
  end
  def clasificar(_x,y) when y==0.0 do
    IO.puts("Eixo X")
  end
  def clasificar(x,y) when x>0.0 and y>0.0 do
    IO.puts("Q1")
  end
  def clasificar(x,y) when x<0.0 and y<0.0 do
    IO.puts("Q3")
  end
  def clasificar(x,y) when x>0.0 and y<0.0 do
    IO.puts("Q4")
  end
  def clasificar(x,y) when x<0.0 and y>0.0 do
    IO.puts("Q2")
  end
  def main do
    {a, b} = leer()
    clasificar(a,b)
  end
end

Main.main()
