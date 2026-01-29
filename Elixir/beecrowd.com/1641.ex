defmodule Main do
  def leer() do
    data = IO.gets("") |> String.trim()
    if data == "0" do
      [0]
    else
      String.split(data, " ") |> Enum.map(&String.to_integer/1)
    end
  end
  def solve(r, w, l, num) do
    if w*w+l*l <= 4*r*r do
      IO.puts("Pizza #{num} fits on the table.")
    else
      IO.puts("Pizza #{num} does not fit on the table.")
    end
  end

  def main(num \\ 1) do
    case leer() do
      [0] -> :ok
      [r, w, l] ->
        solve(r, w, l, num)
        main(num+1)
    end
  end

end
Main.main()
