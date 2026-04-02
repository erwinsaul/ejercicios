defmodule Main do
  def leer() do
    case IO.gets("") do
      :eof -> :eof
      linea -> linea|> String.trim() |> String.to_integer()
    end
  end

  def construir() do
    base = {0, 1, 1, 1}

    Enum.reduce(5..17, base, fn n, seq ->
      a = elem(seq, n - 2)
      b = elem(seq, n - 3)

      nuevo =
        if rem(n, 2) == 1 do
          a + b
        else
          a * b
        end
      Tuple.append(seq, nuevo)
    end)
  end

  def main() do
    secuencia = construir()
    case leer() do
      :eof -> :ok
      n ->
        IO.puts(elem(secuencia, n - 1))
        main()
    end
  end
end
Main.main()
