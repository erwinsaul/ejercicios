# TLE
defmodule Main do
  def main() do
    [n, m] =
      IO.gets("")
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
    a =
      IO.gets("")
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
      |> Enum.sum()

    b =
      IO.gets("")
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
      |> Enum.sum()

    r =
      cond do
        a > b -> "Button 1"
        a < b -> "Button 2"
        true -> "Oh no"
      end
    IO.puts(r)
  end
end
