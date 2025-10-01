defmodule Main do
  def lectura do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main do
    r = lectura()
    pi = 3.14159
    v = (4/3) * pi * r * r * r
    IO.puts("VOLUME = #{:erlang.float_to_binary(v, [decimals: 3])}")
  end
end

Main.main()
