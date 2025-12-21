# MLE
defmodule Main do
  defp gcd(a, 0), do: a
  defp gcd(a, b), do: gcd(b, rem(a, b))

  def solve(ev1, ev2, at, d) do
    p = at / 6.0
    q = (6 - at) / 6.0

    g = gcd(gcd(ev1, ev2), d)
    a = div(ev1, g)
    b = div(ev2, g)
    dd = div(d, g)

    {prob, _} = calc(a, b, dd, p, q, %{})
    :io.format("~.1f~n", [prob])
  end

  defp calc(_, ev2, _, _, _, m) when ev2 <= 0, do: {100.0, m}
  defp calc(ev1, _, _, _, _, m) when ev1 <= 0, do: {0.0, m}
  defp calc(ev1, ev2, d, p, q, m) do
    k = {ev1, ev2}
    case m[k] do
      nil ->
        {pa, m1} = calc(ev1 + d, ev2 - d, d, p, q, m)
        {pb, m2} = calc(ev1 - d, ev2 + d, d, p, q, m1)
        r = p * pa + q * pb
        {r, Map.put(m2, k, r)}
      v -> {v, m}
    end
  end

  def main do
    case IO.gets("") do
      :eof -> :ok
      l ->
        [a, b, c, d] = l |> String.split() |> Enum.map(&String.to_integer/1)
        if a == 0, do: :ok, else: (solve(a, b, c, d); main())
    end
  end
end

Main.main()
