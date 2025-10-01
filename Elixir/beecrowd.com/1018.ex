defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end
  def mostrar(n, v) do
    IO.puts("#{n} nota(s) de R$ #{v},00")
  end
  def main do
    total = leer()
    t = total
    IO.puts("#{total}")
    n = div(t, 100)
    t = rem(t, 100)
    mostrar(n, 100)
    n = div(t, 50)
    t = rem(t, 50)
    mostrar(n, 50)
    n = div(t, 20)
    t = rem(t, 20)
    mostrar(n, 20)
    n = div(t, 10)
    t = rem(t, 10)
    mostrar(n, 10)
    n = div(t, 5)
    t = rem(t, 5)
    mostrar(n, 5)
    n = div(t, 2)
    t = rem(t, 2)
    mostrar(n, 2)
    mostrar(t, 1)
  end
end

Main.main()
