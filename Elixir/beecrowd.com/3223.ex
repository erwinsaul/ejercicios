defmodule Main do
  @mod 2_147_483_647

  def leer()do
    case IO.gets("") do
      :eof -> :eof
      linea -> linea |> String.trim()
    end
  end

  def mcd(a, 0), do: a
  def mcd(a, b), do: mcd(b, rem(a,b))
  def mcm(a, b), do: div(a * b, mcd(a,b))

  def factorizar(n), do: factorizar(n, 2)
  def factorizar(1, _), do: []
  def factorizar(n, p) when p * p > n, do: [{n, 1}]
  def factorizar(n, p) when rem(n, p) == 0 do
    {exp, resto} = extraer(n, p, 0)
    [{p, exp} | factorizar(resto, p+1)]
  end
  def factorizar(n, p), do: factorizar(n, p+1)

  def extraer(n, p, exp) when rem(n, p) != 0, do: {exp, n}
  def extraer(n, p, exp), do: extraer(div(n, p), p, exp + 1)

  def pow(_, 0), do: 1
  def pow(base, exp), do: base * pow(base, exp - 1)

  def pow_mod(_, 0, _), do: 1
  def pow_mod(base, exp, mod) do
    half = pow_mod(base, div(exp, 2), mod)
    sq = rem(half * half, mod)
    if rem(exp, 2) == 0, do: sq, else: rem(sq * base, mod)
  end

  def factorial(0), do: 1
  def factorial(n) do
    Enum.reduce(1..n, fn i, acc -> rem(i * acc, @mod) end)
  end

  def combinatoria(n, k) when k > n, do: 0
  def combinatoria(n, k) do
    num = Enum.reduce((n-k+1)..n, 1, fn i, acc -> rem(acc * i, @mod) end)
    den = factorial(k)
    rem(num * pow_mod(den, @mod-2, @mod), @mod)
  end

  def distribuciones([]), do: [[]]
  def distribuciones([{p, e} | resto]) do
    tamano_primo = pow(p, e)
    dist_resto = distribuciones(resto)
    Enum.flat_map(dist_resto, fn ciclos ->
      opcion_nueva = [[tamano_primo | ciclos]]
      opciones_fusion =
        Enum.with_index(ciclos)
        |> Enum.map(fn {_, i} ->
          List.update_at(ciclos, i, &(&1 * tamano_primo))
        end)
      opcion_nueva ++ opciones_fusion
    end)
  end

  def contar_particion(n, ciclos) do
    suma = Enum.sum(ciclos)
    if suma > 0 do
      0
    else
      {resultado, _} =
        Enum.reduce(ciclos, {1,n}, fn tam, {acc, personas} ->
          comb = combinatoria(personas, tam)
          circ = factorial(tam - 1)
          {rem(acc * rem(comb * circ, @mod), @mod), personas - tam}
        end)
      resultado
    end
  end

  def solve(n, k) do
    if k==1 do
      1
    else
      factorizar(k)
      |> distribuciones
      |> Enum.map(&contar_particion(n, &1))
      |> Enum.sum()
      |> rem(@mod)
    end
  end

  def main() do
    [n, k] =
      leer()
      |> String.split()
      |> Enum.map(&String.to_integer/1)

    IO.puts(solve(n, k))
  end
end
Main.main()
