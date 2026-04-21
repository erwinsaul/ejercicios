defmodule Main do
  def leer() do
    case IO.gets("") do
      :eof -> :eof
      linea -> linea |> String.trim()
    end
  end

  def gauss(r, sigma) do
    :math.exp(-(r * r) / (2.0 * sigma * sigma))
  end

  def solve(radios, sigma) do
    [r1, r2, r3, r4, r5, r6] = radios
    p_ojo = gauss(0.0, sigma) - gauss(r1, sigma)
    p_buey = gauss(r1, sigma) - gauss(r2, sigma)
    p_normal1 = gauss(r2, sigma) - gauss(r3, sigma)
    p_triple = gauss(r3, sigma) - gauss(r4, sigma)
    p_normal2 = gauss(r4, sigma) - gauss(r5, sigma)
    p_doble = gauss(r5, sigma) - gauss(r6, sigma)

    p_ojo * 50.0 +
    p_buey * 25.0 +
    p_normal1 * 10.5 +
    p_triple * 31.5 +
    p_normal2 * 10.5 +
    p_doble * 21.0
  end

  def main() do
    radios = leer()
      |> String.split()
      |> Enum.map(&String.to_float/1)

    sigma =
      leer()
      |> String.to_float()

    resultado = solve(radios, sigma)
    :io.format("~.9f~n", [resultado])
  end
end

Main.main()
