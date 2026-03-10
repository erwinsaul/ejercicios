defmodule Main do
  def leer() do
    [a, b] = IO.gets("") |> String.trim() |> String.split()
    {
      String.to_integer(a),
      String.to_integer(b)
    }
  end
  def solve(a, b) do
    total = div(a, b)
    total = total + 20 + 1
    mes = if total <=30 do "setembro" else "outubro" end
    dia = if total <=30 do total else total-30 end
    IO.puts("A UFSC fecha dia #{dia} de #{mes}.")
  end
  def main() do
    {a, b} = leer()
    solve(a, b)
  end
end
Main.main()
