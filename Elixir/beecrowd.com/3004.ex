defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def leer_linea do
    [a, b, c, d] = IO.gets("") |> String.trim() |> String.split()
    {
      String.to_integer(a),
      String.to_integer(b),
      String.to_integer(c),
      String.to_integer(d)
    }
  end
  def solve(0), do: :ok
  def solve(n) do
    {a, b, c, d} = leer_linea()
    [min_1, max_1] = Enum.sort([a, b])
    [min_2, max_2] = Enum.sort([c, d])
    if min_1 < min_2 and max_1 < max_2 do
      IO.puts("S")
    else
      IO.puts("N")
    end

    solve(n-1)
  end
  def main() do
    n = leer()
    solve(n)
  end
end
Main.main()
