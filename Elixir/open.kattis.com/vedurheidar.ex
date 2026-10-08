defmodule Main do
  def main() do
    v = IO.gets("") |> String.trim() |> String.to_integer()
    n = IO.gets("") |> String.trim() |> String.to_integer()
    Enum.each(1..n, fn _ ->
      [nombre, valor] = IO.gets("") |> String.trim() |> String.split()
      val = String.to_integer(valor)
      res = if val < v, do: "lokud", else: "opin"
      IO.puts("#{nombre} #{res}")
    end)
  end
end
