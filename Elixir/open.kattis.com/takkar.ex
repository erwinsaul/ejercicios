defmodule Main do

  def solve(a,b) when a == b do
    IO.puts("WORLD WAR 3!")
  end

  def solve(a,b) when a > b do
    IO.puts("MAGA!")
  end

  def solve(_a,_b) do
    IO.puts("FAKE NEWS!")
  end

  def main() do
    case IO.read(:all) do
      :eof ->
        :ok

      text when is_binary(text) ->
        [a, b | _resto] =
          text
          |> String.split()
          |> Enum.map(&String.to_integer/1)

        solve(a, b)
    end
  end
end
