defmodule Main do
  def main() do
    cadena =
      IO.gets("")
      |> String.trim()
    cantidad = cadena
      |> String.downcase()
      |> String.graphemes()
      |> Enum.count(fn x->
        x in ["a", "e", "i", "o", "u"]
      end)
    IO.puts(cantidad)
  end
end
