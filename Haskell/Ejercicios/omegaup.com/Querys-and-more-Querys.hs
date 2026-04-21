-- Time Limit Exceed
-- Memory Limit Exceed

solve :: [Int] -> [Int] -> IO()
solve xs [] = return ()
solve xs (y:ys) = do
    let contar = upperBound xs 0 (length xs - 1) y - lowerBound xs 0 (length xs - 1) y
    putStrLn $ show contar
    solve xs ys
  where
    lowerBound :: [Int] -> Int -> Int -> Int -> Int
    lowerBound xs lo hi y
        | lo >= hi  = lo
        | xs !! mid < y = lowerBound xs (mid + 1) hi y
        | otherwise     = lowerBound xs lo mid y
      where mid = (lo + hi) `div` 2
    
    upperBound :: [Int] -> Int -> Int -> Int -> Int
    upperBound xs lo hi y
        | lo >= hi  = lo
        | xs !! mid <= y = upperBound xs (mid + 1) hi y
        | otherwise     = upperBound xs lo mid y
      where mid = (lo + hi) `div` 2


main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let lista = map read $ words input :: [Int]
    input <- getLine
    let t = read input :: Int
    input <- getLine
    let busqueda = map read $ words input :: [Int]
    solve lista busqueda