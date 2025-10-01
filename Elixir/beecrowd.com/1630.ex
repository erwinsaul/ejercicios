defmodule Main do
  def process_single_line(line) do
    case String.trim(line) do
      "" -> nil  # Skip empty lines
      data ->
        [a, b] = String.split(data)
        x = String.to_integer(a)
        y = String.to_integer(b)

        d = Integer.gcd(x, y)
        x_reduced = x / d
        y_reduced = y / d
        r = trunc(2 * (x_reduced + 1) + 2 * (y_reduced - 1))
        IO.puts(r)
    end
  end

  def read_and_process_lines do
    case IO.read(:line) do
      :eof -> :ok  # Stop when reaching EOF
      line ->
        process_single_line(line)
        read_and_process_lines()  # Recursively read next line
    end
  end

  def main do
    read_and_process_lines()
  end
end

Main.main()
