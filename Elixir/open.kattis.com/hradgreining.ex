defmodule Main do
  def main() do
    s = IO.gets("") |> String.trim()
    m = if String.contains?(s, "COV")  do
          "Veikur!"
        else
           "Ekki veikur!"
        end
    IO.puts(m)
  end
end
