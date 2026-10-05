defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    Enum.each(n..1//-1, fn i ->
      IO.puts(i)
    end)
  end
end
