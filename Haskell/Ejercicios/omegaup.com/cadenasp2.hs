
encontrarK :: Int -> Int
encontrarK n = length ( takeWhile ( <n ) [ (2^k)-1 | k <- [1..]] ) + 1

solve :: Int -> (Int, Int)
solve n = (cifra, numero)
  where
    k = encontrarK n
    anterior = 2^(k-1)-1
    numero = n - anterior
    cifra = mod numero 10

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
        (cifra, dato) = solve n
    putStrLn $ show cifra ++ " " ++ show dato