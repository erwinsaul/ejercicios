defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      input when is_binary(input) ->
        case input |> String.trim() |> String.split() do
          [a_str, b_str] ->
            a = String.to_integer(a_str)
            b = String.to_integer(b_str)
            r = div(a, b) + 2022
            IO.puts(r)
          _ ->
            :ok
        end

      end

  end
end

Main.main()
