defmodule Main do
  def leer do
    [a, b] = IO.gets("") |> String.trim() |> String.split(" ", trim: true) |> Enum.map(&String.to_integer/1)
    {a, b}
  end

  def leer_lista do
    IO.gets("") |> String.trim() |> String.split(" ", trim: true) |> Enum.map(&String.to_integer/1)
  end

  def solve(n, m) do
    total =
      leer_lista()
      |> Enum.with_index(1)
      |> Enum.reduce(0, fn {c, i}, acc -> acc + c * (n - i + 1) end)
    IO.puts(total * m)
  end

  def main() do
    case leer() do
      {-1, -1} -> :ok
      {n, m} ->
        solve(n, m)
        main()
    end

  end
end

Main.main()
