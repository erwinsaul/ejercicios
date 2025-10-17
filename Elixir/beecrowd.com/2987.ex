defmodule Main do
  def main do
    letter = IO.getn("", 1) |> String.trim()
        
    position = :binary.first(letter) - ?A + 1
        
    IO.puts(position)
  end
end

Main.main()
