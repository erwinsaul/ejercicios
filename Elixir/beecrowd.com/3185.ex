# TLE
defmodule Main do
  def angulo_vision({qx, qy}, vertices) do
    Enum.reduce(vertices, 0.0, fn {px, py}, max_ang ->
      Enum.reduce(vertices, max_ang, fn {px2, py2}, max_ang2 ->
        a1 = :math.atan2(py-qy, px-qx)
        a2 = :math.atan2(py2-qy, px2-qx)
        diff = abs(a1-a2)
        diff = if diff > :math.pi(), do: 2 * :math.pi() - diff, else: diff
        max(max_ang2, diff)
      end)
    end)
  end

  def punto_en_cerca(theta, r) do
    {r * :math.cos(theta), r * :math.sin(theta)}
  end

  def busqueda_ternaria(izq, der, r, vertices, iteraciones \\ 300) do
    if iteraciones == 0 do
      q = punto_en_cerca((izq + der) / 2, r)
      angulo_vision(q, vertices)
    else
      m1 = izq + (der - izq) / 3
      m2 = der - (der - izq) / 3
      ang1 = angulo_vision(punto_en_cerca(m1, r), vertices)
      ang2 = angulo_vision(punto_en_cerca(m2, r), vertices)

      if ang1 < ang2 do
        busqueda_ternaria(m1, der, r, vertices, iteraciones - 1)
      else
        busqueda_ternaria(izq, m2, r, vertices, iteraciones - 1)
      end
    end
  end

  def parse_float(s) do
    case Float.parse(s) do
      {f, _} -> f
      :error -> String.to_integer(s) * 1.0
    end
  end

  def leer_vertice() do
    [x, y] = IO.gets("") |> String.trim() |> String.split(" ")
    {parse_float(x), parse_float(y)}
  end

  def main() do
    [n_str, r_str] = IO.gets("") |> String.trim() |> String.split(" ")
    n = String.to_integer(n_str)
    r = parse_float(r_str)

    vertices = for _ <- 1..n, do: leer_vertice()

    max_angulo = busqueda_ternaria(0.0, 2 * :math.pi(), r, vertices)
    :io.format("~.10f~n", [max_angulo])
  end
end

Main.main()
