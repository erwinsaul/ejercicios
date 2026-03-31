
solve :: [Int] -> Int
solve [] = 0
solve (x:xs) = length (filter (<x) xs) + solve xs

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let lista = map read $ words input :: [Int]
    let r = solve lista
    putStrLn $ show r