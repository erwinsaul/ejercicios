defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.split() |> Enum.map(&String.to_integer/1)
  end
  def solve(n, m, c) do
    rows = n - 7
    cols = m - 7
    odd_rows = div(rows+1, 2)
    even_rows = div(rows, 2)
    odd_cols = div(cols+1, 2)
    even_cols = div(cols, 2)
    target = rem(1+n+m+c, 2)
    count = if target == 0 do
      odd_rows * odd_cols + even_rows * even_cols
    else
      odd_rows * even_cols + even_rows * odd_cols
    end
    IO.puts(count)
  end
  def main() do
    case leer() do
      [0, 0, 0] -> :ok
      [n, m, c] ->
        solve(n, m, c)
        main()
    end
  end
end
Main.main()
