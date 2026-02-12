defmodule Main do
  def main() do
    IO.read(:all)
    |> String.trim()
    |> String.split("\n")
    |> Enum.each(&solve/1)
  end

  def solve(linea) do
    [s, va, vb] =
      linea
      |> String.split()
      |> Enum.map(&String.to_integer/1)

    if va <= vb do
      IO.puts("impossivel")
    else
      tiempo = s / (va - vb)
      IO.puts(:io_lib.format("~.2f", [tiempo]))
    end
  end
end

Main.main()
