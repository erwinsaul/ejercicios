defmodule Main do
  def leer() do
    case IO.gets("") do
      :eof -> :eof
      linea ->
        linea |> String.trim() |> String.to_integer()
    end
  end

  def solve(n) do
    count = contar(n)
    IO.puts(count)
  end

  def contar(n) do
    c_max = trunc(:math.sqrt(n/3))

    Enum.reduce(0..c_max, 0, fn c, acc ->
      b_max = trunc(:math.sqrt(n))
      acc + contar_b(n, c, c, b_max, 0)
    end)
  end

  def contar_b(n, c, b, b_max, acc) when b > b_max, do: acc
  def contar_b(n, c, b, b_max, acc) do
    nuevo_acc =
      cond do
        b+c == 0 ->
          acc
        rem(n-b*c, b+c) !=0 ->
          acc
        true ->
          a = div(n-b*c, b+c)
          if a>=b, do: acc+1, else: acc
      end

    contar_b(n, c, b+1, b_max, nuevo_acc)
  end

  def main() do
    n = leer()
    if n != :eof and n != -1 do
      solve(n)
      main()
    end

  end
end
Main.main()
