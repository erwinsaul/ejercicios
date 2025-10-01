defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def solve(n) when n==0  do
    IO.puts("E")
  end

  def solve(n) when n<=35  do
    IO.puts("D")
  end

  def solve(n) when n<=60 do
    IO.puts("C")
  end

  def solve(n) when n<=85  do
    IO.puts("B")
  end

  def solve(_n) do
    IO.puts("A")
  end

  def main do
    n = leer()
    solve(n);
  end
end
Main.main()
