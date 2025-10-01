defmodule Main do
  def lectura do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a, b, c] = data
    {
      String.to_integer(a),
      String.to_integer(b),
      String.to_integer(c)
    }
  end
  def main do
    {a, b, c} = lectura()
    ab = div(a+b+abs(a-b), 2)
    abc = div(ab+c+abs(ab-c), 2)
    IO.puts("#{abc} eh o maior")
  end
end

Main.main()
