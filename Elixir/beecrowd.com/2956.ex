defmodule Main do
  def leer_linea do
    data = IO.gets("") |> String.trim() |> String.split()
    [a, b] = data
    {
      String.to_float(a),
      String.to_float(b)
    }
  end
  def main() do
    {a, b} = leer_linea()
    area = (a*b)/2.0
    :io.format("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = ~.5f.~n", [area])
  end
end
Main.main()
