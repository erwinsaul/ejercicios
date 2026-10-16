defmodule Main do
  def parse_float(str) do
    {num, _} = Float.parse(str)
    num
  end
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    r =
      1..n
      |> Enum.map(fn _ ->
        [a, b] =
          IO.gets("")
          |> String.trim()
          |> String.split()
          |> Enum.map(&parse_float/1)
        a * b
      end)
      |> Enum.sum()
    IO.puts(r)
  end
end
