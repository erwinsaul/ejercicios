defmodule Main do
  def leer_entero do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main() do
    n = leer_entero()
    r = n + 1
    IO.puts(r)
  end
end
Main.main()
