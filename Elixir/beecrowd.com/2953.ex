defmodule Main do
  @mod 1_000_000_007
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def solve(n) do
    cond do
      n == 1 -> 1
      n == 2 -> 0
      n == 3 -> 1
      n == 4 -> 1
      true -> calcular(n)
    end
    |> IO.puts()
  end

  defp calcular(n) do
    5..n |> Enum.reduce({0, 1, 1}, fn _, {a, b, c} ->
      nuevo = rem(a+b, @mod)
      {b, c, nuevo}
    end)
    |> elem(2)
  end

  def main() do
    n = leer()
    solve(n)
  end
end
Main.main()
