defmodule Main do
  @k 2 * :math.sqrt(3) / 5
  def leer() do
    case IO.gets("") do
      :eof -> :eof
      linea -> linea |> String.trim() |> String.to_integer()
    end
  end
  def solve(lado) do
    area = @k * lado * lado
    :io.format("~.2f~n", [area])
  end

  def main() do
    lado = leer()
    if lado != :eof do
      solve(lado)
      main()
    end
  end
end

Main.main()
