defmodule Main do
  def main() do
    s = IO.gets("") |> String.trim()
    IO.puts("#{s} #{s} #{s}")
  end
end
