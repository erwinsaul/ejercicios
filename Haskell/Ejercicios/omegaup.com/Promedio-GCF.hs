main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let lista = map read $ words input :: [Int]
    let promedio = fromIntegral (sum lista) / fromIntegral (n)
    print promedio