defmodule Main do
  def main do
    _n = IO.gets("")
    datos = IO.gets("") |> String.trim() |> String.split() |> Enum.map(&String.to_integer/1)
    r = Enum.count(datos, fn x ->
      x < 0
    end)
    IO.puts(r)
  end
end
  