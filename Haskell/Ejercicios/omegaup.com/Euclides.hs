-- TLE
solve :: Int -> Int -> Int
solve a b  | a == b = a
           | a < b = solve a (b - a)
           | otherwise = solve (a - b) b

main :: IO()
main  = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
    --    r = solve a b TLE
        r = gcd a b
    print r