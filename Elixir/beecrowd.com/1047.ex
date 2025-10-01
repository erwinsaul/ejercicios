defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a, b, c, d] = data
    {
      String.to_integer(a),
      String.to_integer(b),
      String.to_integer(c),
      String.to_integer(d)
    }
  end
  def main do
    {h1, m1, h2, m2} = leer()
    m = m2-m10
    h = h2-h1
    h = if h==0 and m<=0, do: 24, else: h
    h = if h<0, do: 24+h, else: h
    h = if m<0, do: h - 1, else: h
    m = if m<0, do: 60+m, else: m
    IO.puts("O JOGO DUROU #{h} HORA(S) E #{m} MINUTO(S)")
  end
end

Main.main()
