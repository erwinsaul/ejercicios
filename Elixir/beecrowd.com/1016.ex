defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main do
    d = leer()
    r = 2*d
    IO.puts("#{r} minutos")
  end
end

Main.main()
