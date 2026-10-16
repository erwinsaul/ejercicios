defmodule Main do
  def main() do
    m = IO.gets("") |> String.trim() |> String.to_integer()
    n = IO.gets("") |> String.trim() |> String.to_integer()
    t = IO.gets("") |> String.trim() |> String.to_integer()
    r = 2*m
    IO.puts(r)
  end
end
