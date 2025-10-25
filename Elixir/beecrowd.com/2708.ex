defmodule Main do
  def leer(jeeps, turistas) do
    input = IO.gets("") |> String.trim()

    case input do
      "ABEND" -> 
        IO.puts(turistas)
        IO.puts(jeeps)
      _ ->
        [movimientos, cantidad] = String.split(input, " ")
        num = String.to_integer(cantidad)
        case movimientos do
        
          "SALIDA" ->
             leer(jeeps + 1, turistas + num)

           "VUELTA" ->
             leer(jeeps - 1, turistas - num)
        end
    end        
  end
  def main do
     leer(0,0)
  end
end
Main.main()
