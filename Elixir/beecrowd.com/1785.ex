# TLE
defmodule Main do
  def leer() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def to_digits(n) do
    n
    |> Integer.to_string()
    |> String.pad_leading(4, "0")
    |> String.graphemes()
    |> Enum.map(&String.to_integer/1)
  end

  def iguales(n) do
    n |> Enum.uniq() |> length() == 1
  end

  def altos(n) do
    n
    |> Enum.sort(:desc)
    |> Integer.undigits()
  end

  def lowest(n) do
    n
    |> Enum.sort(:asc)
    |> Integer.undigits()
  end

  def kaprekar(x, count \\ 0) do
    digitos = to_digits(x)

    if iguales(digitos) do
      -1
    else
      kaprekar_loop(x, count)
    end
  end

  def kaprekar_loop(6174, count), do: count

  def kaprekar_loop(x, count) do
    digits = to_digits(x)
    hi = altos(digits)
    lo = lowest(digits)
    nuevo = hi - lo
    kaprekar_loop(nuevo, count + 1)
  end

  def solve(0, _caso), do:    :ok
  def solve(n, caso) do
    t = leer()
    resultado = kaprekar(t)
    IO.puts("Caso ##{caso}: #{resultado}")
    solve(n-1, caso + 1)
  end
  def main() do
    n = leer()
    solve(n, 1)
  end
end
Main.main()
