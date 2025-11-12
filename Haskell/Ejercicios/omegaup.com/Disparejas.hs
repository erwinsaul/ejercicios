sumDivisores :: Int -> Int
sumDivisores n = sum [d | d <- [1..(n-1)], n `mod` d == 0]

clasificar :: Int -> Int -> Int -> Int -> Int
clasificar n m sn sm
    | sm == n && sn == m = 0
    | sm <= n && sn <= m = 1
    | sm >= n && sn >= m = 2
    | otherwise = 3

main :: IO()
main = do
    input  <- getLine
    let [n, m] = map read $ words input :: [Int]
        sn = sumDivisores n
        sm = sumDivisores m
        a = clasificar n m sn sm
        b = clasificar n n sn sn
        c = clasificar m m sm sm
    putStrLn $ show a ++ " " ++ show b ++ " " ++ show c
