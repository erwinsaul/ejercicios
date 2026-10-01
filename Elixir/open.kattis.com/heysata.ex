defmodule Main do
  def main() do
    [n, s, cad] =
      IO.binread(:stdio, :all)
      |> String.trim_trailing()
      |> String.split("\n")

    r = if String.contains?(cad, s), do: "Unnar fann hana!", else: "Unnar fann hana ekki!"
    IO.puts(r)
  end
end
