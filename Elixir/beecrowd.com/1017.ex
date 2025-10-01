defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |>String.to_integer()
  end
  def main do
    t = leer()
    d = leer()
    r = (t*d)/12.0
    IO.puts("#{:erlang.float_to_binary(r, [decimals: 3])}")
  end
end

Main.main()
