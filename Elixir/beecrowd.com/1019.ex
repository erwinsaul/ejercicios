defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main do
    seg = leer()
    h = div(seg, 3600)
    seg = rem(seg, 3600)
    m = div(seg, 60)
    seg = rem(seg, 60)
    IO.puts("#{h}:#{m}:#{seg}")
  end
end

Main.main()
