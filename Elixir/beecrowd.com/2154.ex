defmodule Main do
  def main() do
    IO.read(:all)
    |> String.trim()
    |> String.split("\n")
    |> procesar()
  end
  def procesar([]), do: :ok
  def procesar([_t | [polinomio | resto]]) do
    terminos =
      polinomio
      |> String.split(" + ")
      |> Enum.map(&derivar_termino/1)
      |> Enum.join(" + ")

    IO.puts(terminos)
    procesar(resto)
  end

  def derivar_termino(termino) do
    [c_str, e_str] = String.split(termino, "x")
    c = String.to_integer(c_str)
    e = String.to_integer(e_str)

    nuevo_c = c * e
    nuevo_e = e - 1
    case nuevo_e do
      1 -> "#{nuevo_c}x"
      _ -> "#{nuevo_c}x#{nuevo_e}"
    end
  end
end
Main.main()
