defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def leer_caso() do
    IO.gets("")
    |> String.trim()
    |> String.split()
    |> Enum.map(fn x -> String.to_integer(x) end)
  end
  def contar(n) do
    trunc(:math.sqrt(n))
  end
  def solve(0), do: :ok
  def solve(n) do
    [l, r] = leer_caso()
    resultado =
      if l == 0 do
        contar(r) + 1
      else
        contar(r) - contar(l-1)
      end

    IO.puts(resultado)
    solve(n-1)
  end
  def main() do
    n = leer()
    solve(n)
  end
end

Main.main()
