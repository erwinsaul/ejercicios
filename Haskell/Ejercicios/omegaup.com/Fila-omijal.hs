insertar :: Int -> [Int] -> [Int]
insertar x [] = [x]
insertar x (y:ys)
    | x > y = y : insertar x ys
    | otherwise = x : y : ys

contar :: Int -> [Int] -> Int
contar x fila = length $ takeWhile (<x) fila

solve :: [Int] -> Int
solve xs = go xs []
  where
    go [] _ = 0
    go (x:xs) fila = contar x fila + go xs (insertar x fila)


main :: IO()
main = do
    input <-getLine
    let n = read input :: Int
    input <- getLine
    let lista = map read $ words input :: [Int]
    let r = solve lista
    putStrLn $ show r