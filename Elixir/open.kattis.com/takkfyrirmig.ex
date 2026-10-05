defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    Enum.each(1..n, fn _->
      s = IO.gets("") |> String.trim()
      IO.puts("Takk #{s}")
    end)
  end
end
