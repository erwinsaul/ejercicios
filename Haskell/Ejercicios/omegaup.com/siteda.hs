solve :: Int -> Int -> [Int]
solve a b = a : b : generar a b
  where
    generar x y
        | y == a && next == b = [next]
        | otherwise = next : generar y next
      where
        next = (x + y) `mod` 10

main :: IO()
main = do
    input <- getContents
    let [a, b] = map read $ lines input :: [Int]
        lista = solve a b 
        tam = length lista - 2
    putStrLn $ unwords $ map show lista
    print tam