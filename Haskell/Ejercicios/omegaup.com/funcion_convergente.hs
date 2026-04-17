step :: Int -> Int
step n
    | even n    = div n 2
    | otherwise = 3 * n + 1

solve :: Int -> Int
solve 1 = 0
solve n = 1 + solve (step n)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
        r  = solve n
    putStrLn $ show r