defmodule Main do
  def main() do
    l =
      IO.binread(:stdio, :all)
      |> String.trim_trailing()
      |> String.split("\n")
      |> Enum.map(&String.to_integer/1)
    r = Enum.min( tl(l) )
    IO.puts("#{r}")
  end
end
