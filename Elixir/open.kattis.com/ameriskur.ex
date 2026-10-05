defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    r = n * 0.09144
    IO.puts("#{r}")
  end
end
