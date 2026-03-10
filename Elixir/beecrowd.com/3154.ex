defmodule Main do
  def leer() do
    data = IO.gets("") |> String.trim() |> String.split()
    [a, b] = data |> Enum.map( fn x-> String.to_integer(x) end )
    {
      a,
      b
    }
  end
  def solve(d, p) do
    r =
      0..(p-1)
      |> Enum.reduce(1.0, fn k, acc ->
        acc * ((d-k) / d)
      end)
    resultado = (1-r) * 100
    :io.format("~.2f~n", [resultado])
  end
  def main() do
    {a, b} = leer()
    solve(a, b)
  end
end
Main.main()
