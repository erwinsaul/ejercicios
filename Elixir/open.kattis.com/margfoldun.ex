defmodule Main do
  def main() do
    [a, b] =
      IO.binread(:stdio, :all)
      |> String.trim()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
    r = a* b
    IO.puts("#{r}")
  end
end
