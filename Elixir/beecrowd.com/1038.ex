defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split()
    [x, y] = data
    {
      String.to_integer(x),
      String.to_integer(y)
    }
  end
  def precio(x) do
    cond do
      x==1 -> 4.0
      x==2 -> 4.5
      x==3 -> 5.0
      x==4 -> 2.0
      x==5 -> 1.5

    end
  end
  def main do
    {x, y} = leer()
    total = y*precio(x)
    IO.puts("Total: R$ #{:erlang.float_to_binary(total, [decimals: 2])}")
  end
end

Main.main()
