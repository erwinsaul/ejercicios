defmodule Main do
  def main() do
    Enum.each(1..20, fn _-> IO.puts("Hipp hipp hurra!") end)
  end
end
Main.main()
