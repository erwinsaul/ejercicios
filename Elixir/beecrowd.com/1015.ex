defmodule Main do
  def leer do
    p = IO.gets("") |> String.trim |> String.split(" ")
    [x, y] = p
    {
      String.to_float(x),
      String.to_float(y),
    }
  end
  def main do
    {x1, y1} = leer()
    {x2, y2} = leer()
    x = x2-x1
    y = y2-y1
    d = :math.sqrt(x*x+y*y)
    IO.puts("#{:erlang.float_to_binary(d, [decimals: 4])}")
  end
end

Main.main()
