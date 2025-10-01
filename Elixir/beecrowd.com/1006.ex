defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_float()
  end
  def main do
    a = leer()
    b = leer()
    c = leer()
    t = (a*2+b*3+c*5)/10.0
    IO.puts("MEDIA = #{:erlang.float_to_binary(t, [decimals: 1])}")
  end
end

Main.main()
