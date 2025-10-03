main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let lista = map read $ words input :: [Int]
    let (izq, der) = splitAt (div n  2) lista
    let res = concatMap (\(x, y) -> [x, y]) (zip izq der)
    putStrLn $ unwords $ map show res
