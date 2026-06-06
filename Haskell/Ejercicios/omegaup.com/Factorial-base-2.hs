solve :: Integer -> Integer -> Integer
solve n k = div (total n 1) k
    where
        total :: Integer -> Integer -> Integer
        total n e 
          | 2^e > n = 0
          | otherwise = div n (2^e) + total n (e+1)

main :: IO()
main = do
    input <- getLine
    let [n, k] = map read $ words input :: [Integer]
    let r = solve n k
    putStrLn $ show r