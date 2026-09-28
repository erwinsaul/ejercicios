defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    r = 3*(n+5)-10
    IO.puts("#{r}")
  end
end
