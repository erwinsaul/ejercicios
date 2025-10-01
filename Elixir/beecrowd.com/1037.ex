defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_float()
  end
  def clasificar_rango(num) when num >= 0.0 and num <= 100.0 do
    cond do
      num >= 0.0 and num <= 25.0 -> "Intervalo [0,25]"
      num > 25.0 and num <= 50.0 -> "Intervalo (25,50]"
      num > 50.0 and num <= 75.0 -> "Intervalo (50,75]"
      num > 75.0 and num <= 100.0 -> "Intervalo (75,100]"
    end
  end

  def clasificar_rango(_num) do
    "Fora de intervalo"
  end
  def main do
    num = leer()
    IO.puts(clasificar_rango(num))
  end
end
Main.main()
