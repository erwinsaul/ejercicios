# Time Limit Exceeded

defmodule Main do
  def leer_int() do
    IO.gets("") |> String.trim() |> String.to_integer()
  end

  def leer_lista() do
    IO.gets("")
    |> String.trim()
    |> String.split()
    |> Enum.map(&String.to_integer/1)
  end

  def longitud_ciclo(tunnels, inicio, actual, pasos) do
    if actual == inicio and pasos > 0 do
      pasos
    else
      siguiente = Enum.at(tunnels, actual - 1)
      longitud_ciclo(tunnels, inicio, siguiente, pasos + 1)
    end
  end

  def encontrar_ciclos(_, visitados, i, n, ciclos) when  i > n, do: ciclos

  def encontrar_ciclos(tunnels, visitados, i, n, ciclos) do
    if MapSet.member?(visitados, i) do
      encontrar_ciclos(tunnels, visitados, i + 1, n, ciclos)
    else
      long = longitud_ciclo(tunnels, i, i, 0)
      nuevos = marcar_ciclo(tunnels, i, i, 0, long, visitados)
      encontrar_ciclos(tunnels, nuevos, i + 1, n, [long | ciclos] )
    end
  end

  def marcar_ciclo(_, _, _, pasos, long, visitados) when pasos == long, do: visitados
  def marcar_ciclo(tunnels, inicio, actual, pasos, long, visitados) do
    nuevos = MapSet.put(visitados, actual)
    siguiente = Enum.at(tunnels, actual - 1)
    marcar_ciclo(tunnels, inicio, siguiente, pasos + 1, long, nuevos)
  end

  def mcd(a, 0), do: a
  def mcd(a, b), do: mcd(b, rem(a, b))

  def mcm(a, b), do: div(a*b, mcd(a, b))

  def solve(tunnels, n) do
    ciclos = encontrar_ciclos(tunnels, MapSet.new(),1, n, [])
    resultado = Enum.reduce(ciclos, 1, fn long, acc -> mcm(acc, long) end)
    IO.puts(resultado)
  end


  def main() do
    n = leer_int()
    tunnels = leer_lista()
    solve(tunnels, n)
  end
end

Main.main()
