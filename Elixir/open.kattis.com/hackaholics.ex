defmodule Main do
  def main() do
    [a, b, c] =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)

    r = a * c
    IO.gets(r)
  end
end
