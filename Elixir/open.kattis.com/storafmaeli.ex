defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    r = if rem(n, 10) == 0 do "Jebb" else "Neibb" end
    IO.puts("#{r}")
  end
end
