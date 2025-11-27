defmodule Main do

  def primo(n) when n < 2, do: false
  def primo(2), do: true
  def primo(n) when rem(n, 2) == 0, do: false
  def primo(n) do
    limite = :math.sqrt(n) |> trunc()
    divisores = Enum.filter(3..limite, fn x -> rem(x, 2) == 1 end)
    not Enum.any?(divisores, &(rem(n, &1) == 0))
  end

  def solve(n) do
    Enum.find(Enum.reverse(3..(n - 1)), fn x ->
      primo(x) and primo(x + 2) and x + 2 <= n
    end)
    |> case do
      nil -> {3, 5}
      x -> {x, x + 2}
    end
  end

  defp leer do
    IO.read(:line) |> String.trim() |> String.to_integer()
  end

  def main do
    n = leer()
    {x, y} = solve(n)
    IO.puts("#{x} #{y}")
  end

end

Main.main()
