solve :: Int -> Int
solve 0 = 1
solve n = floor (sum [logBase 10 (fromIntegral k) | k <- [2..n]]) + 1

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
        r = solve n
    putStrLn ( show n ++ "! tiene"++ show r ++ "digitos")