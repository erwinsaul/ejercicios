solve :: [Int] -> Int
solve xs = div (sumaTotal * sumaTotal - sumaCuadrados) 2
  where
    sumaTotal = sum xs
    sumaCuadrados = sum $ map (^2) xs

main :: IO()
main = do
    _ <- getLine
    input <- getLine
    let lista = map read $ words input :: [Int]
        res = solve lista
    print res