defmodule Main do
  def main() do
    s = IO.gets("") |> String.trim()
    r = if String.starts_with?(s, "555"), do: 1, else: 0
    IO.gets(r)
  end
end
