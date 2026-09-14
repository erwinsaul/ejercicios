defmodule Main do
  def main() do
    case IO.read(:eof) do
      :eof -> :ok
      input when is_binary(input) ->
        {n, _} =
          input
          |> String.trim()
          |> Float.parse()
        
        r = n - trunc(n)
        resp = if r > 0.5, do: trunc(n)+1, else: trunc(n)
        IO.puts(resp)
    end
  end
end

Main.main()
