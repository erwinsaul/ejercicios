defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main do
    a = leer()
    b = leer()
    r = a - b
    IO.puts("#{r}")
  end
end

Main.main()
