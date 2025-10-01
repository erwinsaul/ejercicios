solve :: Int -> Int -> Int -> Int
solve p s r
   | s >= p = 1
   | otherwise =  ceiling (fromIntegral (p - s) / fromIntegral (s - r)) + 1
--   where
--       total p s r = ceiling $ fromIntegral p / fromIntegral s
--       resto p s r = p - ( (total p s r) * s - (total p s r) * r  )

main :: IO()
main = do
    input <- getLine
    let [p, s, r] = map read $ words input :: [Int]
    let res = solve p s r
    putStrLn $ show res
