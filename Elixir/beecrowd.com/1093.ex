defmodule Main do
  def leer_caso() do
    case IO.gets("") do
      :eof -> :eof
      linea ->
        datos = linea
                |> String.trim()
                |> String.split()
                |> Enum.map(&String.to_integer/1)
        case datos do
          [0, 0, 0, 0] -> :eof
          [ev1, ev2, at, d] -> {ev1, ev2, at, d}
          _ -> :eof
        end
    end
  end

  def calcular_prob(ev1, ev2, at, d) do
    p1 = at / 6.0
    p2 = (6-at) / 6.0
    {prob, _memo} = prob_v1_gana(ev1, ev2, d, p1, p2, %{})
    prob
  end

  


  def solve(datos) do

  end

  # === MAIN ===
  def main() do

  end
end
