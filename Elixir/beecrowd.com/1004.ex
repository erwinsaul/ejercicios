defmodule Main do
  def leer_numero do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def main do
    a = leer_numero()
    b = leer_numero()
    r = a * b
    IO.puts("PROD = #{r}")
  end
end

Main.main()
