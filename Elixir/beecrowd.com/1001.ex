defmodule Main do
  def leer_dos_numeros do
    a = IO.gets("") |> String.trim() |> String.to_integer()
    b = IO.gets("") |> String.trim() |> String.to_integer()
    {a, b}
  end
  def main do
    {a, b} = leer_dos_numeros()
    suma = a + b
    IO.puts("X = #{suma}")
  end
end

Main.main()
