defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def solve(0), do: :ok
  def solve(n) do
    r = leer()
    area = :math.sqrt(25 + 10 * :math.sqrt(5)) / 4 * r * r
    IO.puts(:erlang.float_to_binary(area, [{:decimals, 3}]))
    solve(n-1)
  end
  def main() do
    n = leer()
    solve(n)
  end
end
Main.main()
