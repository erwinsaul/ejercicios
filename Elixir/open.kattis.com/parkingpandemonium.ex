defmodule Main do
  def main() do
    m = IO.gets("") |> String.trim() |> String.to_integer()
    k = IO.gets("") |> String.trim() |> String.to_integer()
    c = IO.gets("") |> String.trim() |> String.to_integer()
    r = m * c
    IO.puts("#{r}")
  end
end
