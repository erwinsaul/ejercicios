defmodule Main do
  def leer do
    data = IO.gets("") |> String.trim() |> String.split(" ") |> Enum.map(&String.to_float/1)
    data = Enum.sort(data)
    [a,b,c] = data
    { c, b, a }
  end
  def triangulo(a,b,c) do
    if a>=(b+c) do
     "NAO FORMA TRIANGULO"
    else
      resultados = []
      resultados = agregar_tipo_lado(resultados, a, b, c)
      resultados = agregar_tipo_angulo(resultados, a, b, c)
      Enum.join(resultados, "\n")
    end
  end
  defp agregar_tipo_angulo(resultados, a, b, c) do
    cond do
      a*a == b*b + c*c -> ["TRIANGULO RETANGULO" | resultados]
      a*a > b*b + c*c -> ["TRIANGULO OBTUSANGULO" | resultados]
      a*a < b*b + c*c -> ["TRIANGULO ACUTANGULO" | resultados]
      true -> resultados
    end
  end

  defp agregar_tipo_lado(resultados, a, b, c) do
    cond do
      a == b and b == c -> ["TRIANGULO EQUILATERO" | resultados]
      a == b or b == c or a == c -> ["TRIANGULO ISOSCELES" | resultados]
      true -> resultados
    end
  end

  def main do
    {a,b,c} = leer()
    IO.puts(triangulo(a,b,c))
  end
end

Main.main()
