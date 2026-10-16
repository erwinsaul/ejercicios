defmodule Main do
  def main() do
    lista = IO.gets("") |> String.trim() |> String.split("-")
    s = Enum.map(lista, fn c ->
        String.first(c)
    end)
    IO.puts(s)
  end
end
