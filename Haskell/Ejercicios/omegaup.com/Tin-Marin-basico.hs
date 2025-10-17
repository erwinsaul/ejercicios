main :: IO()
main = do
    input <- getLine
    let [n, m] = map read $ words input :: [Int]
    input <- getLine
    let lista = map read $ words input :: [Int]
        pos = mod m n
        res = lista !! (pos-1)
    putStrLn $ show res