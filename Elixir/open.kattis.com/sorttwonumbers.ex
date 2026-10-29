defmodule Main do
  def main() do
    l =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
      |> Enum.sort()
    IO.puts(Enum.join(l, " "))
  end
end
