defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def leer_linea() do
    [x1, y1, x2, y2, x3, y3] = IO.gets("") |> String.trim() |> String.split()
    {
      String.to_integer(x1),
      String.to_integer(y1),
      String.to_integer(x2),
      String.to_integer(y2),
      String.to_integer(x3),
      String.to_integer(y3)
    }
  end
  def solve(0), do: :ok
  def solve(n) do
    {x1, y1, x2, y2, x3, y3} = leer_linea()
    area = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2
    :io.format("~.3f~n", [area])
    solve(n-1)
  end
  def main() do
    n = leer()
    solve(n)
  end
end
Main.main()
