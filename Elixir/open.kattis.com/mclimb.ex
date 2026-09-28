defmodule Main do
  def main() do
    m = IO.gets("") |> String.trim() |> String.to_integer()
    n = IO.gets("") |> String.trim() |> String.to_integer()
    y = IO.gets("") |> String.trim() |> String.to_integer()
    r = m * n
    IO.puts("#{r}")
  end
end
