solve :: Int -> Int -> Int -> Int
solve n a b = sumMult a + sumMult b - sumMult (lcm a b)
  where
    sumMult k = let m = n `div` k
                in k * m * (m + 1) `div` 2

main :: IO()
main = do
    input <- getLine
    let [n, a, b] = map read $ words input :: [Int]
    let r = solve (n-1) a b
    putStrLn $ show r    
