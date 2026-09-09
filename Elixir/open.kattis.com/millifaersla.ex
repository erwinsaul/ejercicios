defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      input when is_binary(input) ->
        case input |> String.trim() |> String.split() do
          [a_str, b_str, c_str] ->
            {_r, i} =
              [a_str, b_str, c_str]
              |> Enum.map(&String.to_integer/1)
              |> Enum.with_index()
              |> Enum.min_by(fn {x, _} -> x end)

            r =
              case i do
                0 -> "Monnei"
                1 -> "Fjee"
                2 -> "Dolladollabilljoll"
              end
            IO.puts(r)
          _ ->
            :ok
        end
    end
  end
end
