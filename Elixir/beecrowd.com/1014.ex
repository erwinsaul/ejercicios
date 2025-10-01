defmodule Main do
  def leer_float do
    IO.gets("") |> String.trim() |> String.to_float()
  end
  def leer_int do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main do
    x = leer_int()
    y = leer_float()
    prom = x/y
    IO.puts("#{:erlang.float_to_binary(prom, [decimals: 3])} km/l")
  end
end

Main.main()
