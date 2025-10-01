defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.split(" ") |> Enum.map(&String.to_integer/1)
  end
  def main do
    v = leer()
    v_ord = Enum.sort(v)
    Enum.each(v_ord, fn num -> IO.puts(num) end)
    IO.puts("")
    Enum.each(v, fn numero ->
      IO.puts(numero)
    end)
  end
end

Main.main()
