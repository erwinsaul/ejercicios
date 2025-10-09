solve :: Int -> Int
solve n | n >= 100 = n
        | mod n 2 == 0 = solve $ n+3
        | otherwise = solve $ 2*n

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    let res = solve n
    putStrLn $ show res