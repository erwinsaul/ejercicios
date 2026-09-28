defmodule Main do
  def main() do
    s = IO.gets("") |> String.trim()
    IO.puts(String.at(s,0))
  end
end
