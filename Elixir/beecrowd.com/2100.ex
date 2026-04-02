#Time Limit Exceded
defmodule Main do
  @mod 1300031

  def leer() do
    case IO.gets("") do
      :eof -> :eof
      linea -> linea |> String.trim()
    end
  end

  def pow_mod(_, 0, _), do: 1
  def pow_mod(base, exp, mod) do
    half = pow_mod(base, div(exp, 2), mod)
    sq = rem(half * half, mod)
    if rem(exp, 2) == 0, do: sq, else: rem(sq * base, mod)
  end

  def solve(n, m) do
    inicio = n - 2 * m + 1
    fin = n - m
    producto =
      Enum.reduce(inicio..fin, 1, fn i, acc ->
        rem(acc * i, @mod)
      end)
  end

  def main() do
    t = leer() |> String.to_integer()

    Enum.each(1..t, fn _ ->
      [n, m] = leer() |> String.split() |> Enum.map(&String.to_integer/1)
    end)
  end
end
Main.main()
