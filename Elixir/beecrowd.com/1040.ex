defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split(" ")
    [a,b,c,d] = data
    {
      String.to_float(a),
      String.to_float(b),
      String.to_float(c),
      String.to_float(d),
    }
  end
  def calificar(n) when n < 5.0 do
    IO.puts("Aluno reprovado.")
  end
  def calificar(n) when n < 7.0 do
    IO.puts("Aluno em exame.")
    nota = IO.gets("") |> String.trim() |> String.to_float()
    IO.puts("Nota do exame: #{:erlang.float_to_binary(nota, [decimals: 1])}")
    r = (nota+n)/2
    if r>5.0 do
      IO.puts("Aluno aprovado.")
    else
      IO.puts("Aluno reprovado.")
    end
    IO.puts("Media final: #{:erlang.float_to_binary(r, [decimals: 1])}")
  end
  def calificar(_n) do
    IO.puts("Aluno aprovado.")
  end
  def main do
    {a,b,c,d} = leer()
    media = (2*a+3*b+4*c+d)/10
    IO.puts("Media: #{:erlang.float_to_binary(media, [decimals: 1])}")
    calificar(media)
  end
end
Main.main()
