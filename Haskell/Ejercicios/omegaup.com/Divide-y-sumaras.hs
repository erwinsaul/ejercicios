main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    let  r = solve n 0
    putStrLn $ show r

solve :: Int -> Int -> Int
solve n r | div n (2^r) == 0 = 0
          | otherwise = div n (2^r) + solve n (r+1)