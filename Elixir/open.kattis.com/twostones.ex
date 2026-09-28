defmodule Main do
  require Integer
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    r =
      if Integer.is_even(n) do
        "Bob"
      else
        "Alice"
      end
    IO.puts("#{r}")
  end
end
