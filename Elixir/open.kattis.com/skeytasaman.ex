defmodule Main do
  def main() do
    s = IO.gets("") |> String.trim()
    s1 = IO.gets("") |> String.trim()
    IO.puts("#{s}#{s1}")
  end
end
