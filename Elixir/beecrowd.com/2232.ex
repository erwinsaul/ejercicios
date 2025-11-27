defmodule Main do

  import Bitwise

  def leer_entero do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def solve(0), do: :ok
  def solve(n) when n > 0 do
    d = leer_entero()
    r = (1 <<< d ) - 1
    IO.puts(r)
    solve(n-1)
  end

  def main do
    n = leer_entero()
    solve n
  end
end

Main.main()
