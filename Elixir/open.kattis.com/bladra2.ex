defmodule Main do
  def main() do
    [v, a, t] = IO.gets("") |> String.trim() |> String.split() |> Enum.map(&String.to_integer/1)
    d = v*t + (a*t*t)/2
    IO.puts(d)
  end
end
