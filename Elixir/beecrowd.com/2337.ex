defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def calcular_fibonacci() do
    Enum.reduce(2..42, %{ 0 => 0, 1 => 1}, fn i, mapa ->
      Map.put(mapa, i, mapa[i-1] + mapa[i-2])
    end)
  end

  def calcular_potencias() do
    Enum.reduce(1..40, %{0 => 1}, fn i, mapa ->
      Map.put(mapa, i, mapa[i-1] * 2)
    end)
  end

  def solve(n, fib, pot) do
    numerador = fib[n+2]
    denominador = pot[n]
    gcd = Integer.gcd(numerador, denominador)
    "#{div(numerador, gcd)}/#{div(denominador,gcd)}"
  end

  def main() do
    fib = calcular_fibonacci()
    pot = calcular_potencias()

    IO.stream(:stdio, :line)
    |> Enum.each(fn line ->
      case Integer.parse(String.trim(line)) do
        {n, _} -> IO.puts(solve(n, fib, pot))
        :error -> :ok
      end
    end)
  end
end
Main.main()
