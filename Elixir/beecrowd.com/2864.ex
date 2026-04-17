#TLE

defmodule Main do

  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def leer_caso() do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a, b, c] = data
    {
      String.to_integer(a),
      String.to_integer(b),
      String.to_integer(c)
    }
  end

  def solve(0), do: :ok
  def solve(t) do
    {a, b, c} = leer_caso()
    altura = c - (b*b) / (4*a)
    :io.format("~.2f~n", [altura])
    solve(t-1)
  end

  def main() do
    t = leer()
    solve(t)
  end
end
Main.main()
