-- Memory Limit Exced

solve :: [Int] -> Int
solve xs = go xs 0 1
  where
    total = sum xs
    go [] _ _ = 0
    go (x:rest) acc pos
      | acc + x == total - acc = pos  
      | otherwise = go rest (acc + x) (pos + 1)

main :: IO ()
main = do
    _ <- getLine                      
    input <- getLine
    let lista = map read $ words input :: [Int]
    print $ solve lista