defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def solve(0), do: :ok
  def solve(c) do
    n = leer()
    r = n - :math.floor( :math.sqrt(n) )
    IO.puts(trunc(r))
    solve(c-1)
  end
  def main() do
    c = leer()
    solve(c)
  end
end

Main.main()
