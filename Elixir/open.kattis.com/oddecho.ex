defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    Enum.each(1..n, fn i ->
      s = IO.gets("") |> String.trim()
      if rem(i, 2) == 1 do
        IO.puts(s)
      end
    end
    )
  end
end
