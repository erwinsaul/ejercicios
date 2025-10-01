defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def solve(n) when n==0 do
    :ok
  end

  def solve(n) when n>0 do
    d = leer()
    d = d*(d+1)
    r = div(d,2) + 1
    IO.puts(r)
    solve(n-1)
  end

  def main do
    n = leer()
    solve(n)
  end
end

Main.main()
