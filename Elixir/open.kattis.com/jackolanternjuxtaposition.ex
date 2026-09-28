defmodule Main do
  def main() do
    [n,t,m] = IO.gets("") |> String.trim() |> String.split(" ") |> Enum.map(&String.to_integer/1)
    r = n * t * m
    IO.puts("#{r}")
  end
end
