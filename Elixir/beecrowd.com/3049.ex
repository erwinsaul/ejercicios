defmodule Main do
  defp leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main() do
    b = leer()
    t = leer()
    suma = b + t
    r = cond do
      suma > 160 -> 1
      suma < 160 -> 2
      true -> 0
    end
    IO.puts(r)
  end
end

Main.main()
