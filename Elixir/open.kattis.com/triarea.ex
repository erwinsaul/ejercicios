defmodule Main do
  def main() do
    [b, h] =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
    r = (b*h)/2
    IO.puts("#{r}")
  end
end
