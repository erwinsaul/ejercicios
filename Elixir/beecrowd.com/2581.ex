defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def leer_string do
    IO.gets("") |> String.trim()
  end
  def leer_n_strings(0), do: :ok
  def leer_n_strings(n) when n>0 do
    _string = leer_string()
    IO.puts("I am Toorg!")
    leer_n_strings(n - 1)
  end
  def main do
    n = leer()
    leer_n_strings(n)
  end
end

Main.main()
