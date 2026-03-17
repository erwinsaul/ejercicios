# ACC
defmodule Main do
  def leer_entero() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def solve(1), do: 0
  def solve(n) do
    carreras = div(n+2, 3)
    carreras + solve(carreras)
  end

  def main() do
    #case leer_entero() do
    #  0 -> :ok
    #  n ->
    #    IO.puts(solve(n))
    #    main()
    #end
    IO.read(:all)
    |> String.split()
    |> Enum.map(&String.to_integer/1)
    |> Enum.take_while(&(&1 != 0))
    |> Enum.map(&solve/1)
    |> Enum.join("\n")
    |> IO.puts()
  end
end
Main.main()
