defmodule Main do
  def main() do
    n = IO.gets("") |> String.trim() |> String.to_integer()
    datos = Enum.map(1..n, fn _->
      [s, val] = IO.gets("") |> String.trim() |> String.split()
      value = String.to_integer(val)
      {s, value}
    end)
    {nombre, _valor} = Enum.max_by(datos, fn {_nombre, valor} -> valor end)
    IO.puts(nombre)
  end
end
