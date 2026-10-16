defmodule Main do
  def solve(s) do
    if String.contains?(s, "ss") do
      "hiss"
    else
      "no hiss"
    end
  end

  def main() do
    s = IO.gets("") |> String.trim()
    r = solve(s)
    IO.puts(r)
  end
end
