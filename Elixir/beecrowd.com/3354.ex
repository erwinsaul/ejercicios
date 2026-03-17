# Runtime Error
defmodule Main do
  import Bitwise
  @mod 1300031

  def lcm(a, b), do: div(a*b, Integer.gcd(a, b))

  def s(_d, x) when x<=0, do: 0
  def s(d, x) when x<d, do: 0
  def s(d, x) do
    m = div(x, d)
    div( d*m*(m+1), 2)
  end

  def s_range(d, i, f), do: s(d, f) - s(d, i-1)

  def solve(i, f, camiones) do
    n = length(camiones)
    result =
      Enum.reduce(1..(trunc(:math.pow(2, n)) -1), 0, fn masc, acc ->
        {lcm_val, bits} =
          camiones
          |> Enum.with_index()
          |> Enum.reduce({1, 0}, fn {ni, idx}, {lcm_acc, count} ->
            if (masc &&& (1 <<< idx)) != 0 do
              {lcm(lcm_acc, ni), count+1}
            else
              {lcm_acc, count}
            end
          end)

          contrib = s_range(lcm_val, i, f)
          if rem(bits, 2) == 1, do: acc + contrib, else: acc - contrib
      end)
    rem(rem(result, @mod) + @mod, @mod)
  end

  def leer_lista() do
    IO.gets("")
    |> String.trim()
    |> String.split()
    |> Enum.map(&String.to_integer/1)
  end

  def main() do
    case leer_lista() do
      [0, 0, 0] -> :ok
      [i, f, n] ->
        camiones = leer_lista() |> Enum.take(n)
        IO.puts(solve(i, f, camiones))
        main()
    end
  end
end
Main.main()
