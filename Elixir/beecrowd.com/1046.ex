defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a, b] = data
    {
      String.to_integer(a),
      String.to_integer(b)
    }
  end
  def main do
    {a, b} = leer()
    r = if a >= b, do: (24-a)+b, else: b-a
    IO.puts("O JOGO DUROU #{r} HORA(S)")
  end
end

Main.main()
