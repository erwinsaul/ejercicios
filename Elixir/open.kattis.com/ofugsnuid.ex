defmodule Main do
  def main() do
   [_head | tail] =
      IO.binread(:stdio, :eof)
      |> String.trim_trailing()
      |> String.split("\n")
    lista = Enum.reverse( tail )
    IO.puts(Enum.intersperse(lista, "\n"))
  end
end
