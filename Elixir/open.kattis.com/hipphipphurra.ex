defmodule Main do
  def main() do
    nombre = IO.gets("") |> String.trim()
    n = IO.gets("") |> String.trim() |> String.to_integer();
    Enum.each(1..n, fn _ ->
      IO.puts("Hipp hipp hurra, #{nombre}!")
    end)
  end
end
