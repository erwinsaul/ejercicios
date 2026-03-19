defmodule Main do
  @mod 1_000_000_009
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def pow_mod(_base, 0, _mod), do: 1
  def pow_mod(base, exp, mod) when rem(exp, 2) == 0 do
    medio = pow_mod(base, div(exp, 2), mod)
    rem(medio * medio, mod)
  end
  def pow_mod(base, exp, mod) do
    rem(base * pow_mod(base, exp-1, mod), mod)
  end

  def fact_mod(n) do
    Enum.reduce(2..n, 1, fn i, acc -> rem(acc*i, @mod) end)
  end

  def solve(n) do
    inv6 = pow_mod(6, @mod-2, @mod)
    result = rem(fact_mod(n) * inv6, @mod)
    IO.puts(result)
  end

  def main() do
    case leer() do
      0 -> :ok
      n ->
        solve(n)
        main()
    end
  end
end

Main.main()
