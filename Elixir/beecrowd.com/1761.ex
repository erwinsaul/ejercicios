defmodule Main do
  def process_single_line(line) do
    case String.trim(line) do
      "" -> nil  # Skip empty lines
      data ->
        [a, b, c] = String.split(data)
        a = String.to_float(a)
        b = String.to_float(b)
        c = String.to_float(c)

        ra = a * :math.pi() / 180
        r = b * :math.tan(ra)
        r = 5 * (r + c)
        IO.puts("#{:erlang.float_to_binary(r, [decimals: 2])}")
    end
  end

  def read_and_process_lines do
    case IO.read(:line) do
      :eof -> :ok
      line ->
        process_single_line(line)
        read_and_process_lines()
    end
  end

  def main do
    read_and_process_lines()
  end
end

Main.main()
