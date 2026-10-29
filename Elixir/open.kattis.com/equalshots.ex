defmodule Main do
  def main() do
    lista =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split("\n", trim: true)
      |> Enum.map(fn x ->
        [a, b] = x
          |> String.split()
          |> Enum.map(&String.to_integer/1)
        {a, b}
      end)

    [{n, _m} | resto] = lista
    {listan, listam} = Enum.split(resto, n)
    sum_n =
      listan
      |> Enum.map(fn {a, b} -> a*b end)
      |> Enum.sum()
    sum_m = listam
      |> Enum.map(fn {a, b} -> a*b end)
      |> Enum.sum()

    r = if sum_n == sum_m, do: "same", else: "different"
    IO.puts(r)
  end
end
