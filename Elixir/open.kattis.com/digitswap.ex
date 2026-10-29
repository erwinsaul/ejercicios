defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim()
    a = String.at(n, 0)
    b = String.at(n, 1)
    IO.puts("#{b}#{a}")
  end
end
