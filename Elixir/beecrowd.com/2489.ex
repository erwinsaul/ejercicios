defmodule Main do
  def leer() do
    case IO.read(:stdio, :all) do
      :eof -> []
      linea -> String.split(linea)
    end
  end

  def solve(a, d, r) do
    r_rad = r * :math.pi() / 180
    h = a - d / :math.tan(r_rad)
    h
  end

  def procesar([]) do
    :ok
  end

  def procesar([a_str, d_str, r_str | resto]) do
    {a, _} = Float.parse(a_str)
    {d, _} = Float.parse(d_str)
    {r, _} = Float.parse(r_str)
    h = solve(a, d, r)
    :io.format("~.4f~n", [h])
    procesar(resto)
  end

  def main do
    datos = leer()
    procesar(datos)
  end
end

Main.main()
