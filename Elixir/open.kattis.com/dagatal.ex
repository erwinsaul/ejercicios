defmodule Main do
  def main() do
    dias = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    n = IO.gets("") |> String.trim() |> String.to_integer()
    IO.puts(dias |> Enum.at(n - 1))
  end
end
