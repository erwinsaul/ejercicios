defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_float()
  end
  def main do
    r = leer()
    pi = 3.14159
    a = pi * r * r
    IO.puts("A=#{:erlang.float_to_binary(a, [decimals: 4])}")
  end
end

Main.main()
