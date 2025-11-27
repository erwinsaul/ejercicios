defmodule Main do
  def leer_entero() do
     IO.gets("") |> String.trim() |> String.to_integer()
  end
  def main(numero) do
    n = leer_entero()

    if n == -1 do
      :ok
    else
      ciclos = div(n, 2)
      IO.puts("Experiment #{numero}: #{ciclos} full cycle(s)")
      main(numero + 1)
    end
  end
end
Main.main(1)
