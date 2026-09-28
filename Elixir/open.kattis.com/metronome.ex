defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    r = n / 4
    IO.puts(:erlang.float_to_binary(r, decimals: 2))
  end
end
