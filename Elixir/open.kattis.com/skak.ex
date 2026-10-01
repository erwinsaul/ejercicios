defmodule Main do
  def main() do
    [a, b, c, d] =
      IO.binread(:stdio, :all)
      |> String.trim_trailing()
      |> String.split()
      |> Enum.map(&String.to_integer/1)
    r = if a==c || a==d || b==c || b==d, do: "1", else: "2"
    IO.puts(r)
  end
end
