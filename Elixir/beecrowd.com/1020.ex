defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main do
    d = leer()
    a = div(d, 365)
    d = rem(d, 365)
    m = div(d, 30)
    d = rem(d, 30)
    IO.puts("#{a} ano(s)")
    IO.puts("#{m} mes(es)")
    IO.puts("#{d} dia(s)")
  end
end

Main.main()
