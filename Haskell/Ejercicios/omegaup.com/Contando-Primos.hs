
primeFactors :: Int -> [Int]
primeFactors n = go n 2
  where
    go 1 _ = []
    go m f
      | f * f > m = [m]
      | mod m f == 0 = f : go (skipF m f) (nextF f)
      | otherwise = go m (nextF f)

    skipF m f
      | mod m f == 0 = skipF (div m f) f
      | otherwise = m
    
    nextF 2 = 3
    nextF f = f + 2

solve :: Int -> Int
solve n = foldl (\acc p -> div acc p * (p-1)) n (primeFactors n)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
        r = solve n
    putStrLn $ show r