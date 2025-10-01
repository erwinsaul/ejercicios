defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main do
    n = leer()
    r = 4*n
    IO.puts("#{r}")
  end
end

Main.main()
