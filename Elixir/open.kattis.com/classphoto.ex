defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    m = IO.gets("") |> String.trim() |> String.to_integer()
    r = n * m
    IO.puts("#{r}")
  end
end
