defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main do
    a = leer()
    b = leer()
    c = leer()
    d = leer()
    r = a*b - c*d
    IO.puts("DIFERENCA = #{r}")
  end
end

Main.main()
