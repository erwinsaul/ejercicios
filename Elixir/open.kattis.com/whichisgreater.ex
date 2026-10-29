defmodule Main do
  def main() do
    [a, b] =
      IO.gets("")
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
    r = if a > b, do: 1, else: 0
    IO.puts(r)
  end
end
