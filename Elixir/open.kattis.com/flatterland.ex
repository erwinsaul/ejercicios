defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    x = IO.gets("") |> String.trim() |> String.to_integer()
    r = (n-1)*x
    IO.puts("#{r}")
  end
end
