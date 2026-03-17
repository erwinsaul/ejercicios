main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let lista = map read $ words input :: [Int]
    let totalJhon = length (filter (== 1) lista)
    let totalMary = length (filter (== 0) lista)
    putStrLn $ "Mary won "++ show totalMary ++" times and John won "++ show totalJhon ++" times"
