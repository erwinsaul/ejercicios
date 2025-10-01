defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a, b] = data
    {
      String.to_integer(a),
      String.to_integer(b)
    }
  end

  def solve(a, b) when rem(b,a)==0 do
    IO.puts("Sao Multiplos")
  end

  def solve(_a, _b) do
    IO.puts("Nao sao Multiplos")
  end

  def main do
    {a, b} = leer()
    solve(min(a, b), max(a, b))
  end
end

Main.main()
