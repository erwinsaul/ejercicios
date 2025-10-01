fib::Int->Int
fib 0 = 0
fib 1 = 1
fib x = fib (x-1) + fib (x-2)

main :: IO ()
main = do
  putStrLn("Ingresa un numero")
  input <- getLine
  let n = read input :: Int
  putStrLn $ show (fib n)
