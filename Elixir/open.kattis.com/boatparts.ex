defmodule Main do

  def solve(p, lista) do
    result =
      lista
      |> Enum.with_index(1)
      |> Enum.reduce_while(MapSet.new(), fn {part, day}, seen ->
        new_seen = MapSet.put(seen, part)
        if MapSet.size(new_seen) == p do
          {:halt, day}
        else
          {:cont, new_seen}
        end
      end)

    if is_integer(result), do: result, else: "paradox avoided"
  end

  def main() do
    lines =
      IO.stream(:stdio, :line)
      |> Enum.map(&String.trim/1)
      |> Enum.reject(&(&1 == ""))

    case lines do
      [header | rest] ->
        [p, m] = header |> String.split() |> Enum.map(&String.to_integer/1)
        lista = Enum.take(rest, m)
        r = solve(p, lista)
        IO.puts(r)
      _ -> :ok
    end
  end
end
Main.main()
