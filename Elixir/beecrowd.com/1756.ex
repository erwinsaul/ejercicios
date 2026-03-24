defmodule Main do
  def leer do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def leer_bits do
    IO.gets("") |> String.trim() |> String.graphemes()
  end

  def leer_y_p do
    [y_str, p_str] = IO.gets("") |> String.trim() |> String.split(" ")
    {val, _} = Float.parse(p_str)
    {String.to_integer(y_str), val}
  end

  def prob_bit(h_bit, c_bit, p) do
    if h_bit == c_bit, do: 1.0 - p, else: p
  end

  def prob_hijo(hijo,c, p) do
    Enum.zip(hijo, c)
    |> Enum.reduce(1.0, fn {h, ci}, acc -> acc * prob_bit(h, ci, p) end)
  end

  def genetic(a, b, c, y, p) do
    {a_izq, a_der} = Enum.split(a, y)
    {b_izq, b_der} = Enum.split(b, y)

    hijo1 = a_izq ++ b_der
    hijo2 = b_izq ++ a_der

    p1 = prob_hijo(hijo1, c, p)
    p2 = prob_hijo(hijo2, c, p)

    p1 + p2 - p1 * p2
  end

  def solve do
    _n = leer()
    {y, p} = leer_y_p()
    a = leer_bits()
    b = leer_bits()
    c = leer_bits()
    resultado = genetic(a, b, c, y, p)
    :io.format("~.7f~n", [resultado])
  end

  def main()do
    case leer() do
      0 -> :ok
      t ->
        for _ <- 1..t, do: solve()
    end
  end
end
Main.main()
