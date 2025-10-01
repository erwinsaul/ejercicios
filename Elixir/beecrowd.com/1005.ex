defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_float()
  end
  def main do
    a = leer()
    b = leer()
    t = (a*3.5 + b*7.5)/11
    IO.puts("MEDIA = #{:erlang.float_to_binary(t, [decimals: 5])}")
  end
end

Main.main()
