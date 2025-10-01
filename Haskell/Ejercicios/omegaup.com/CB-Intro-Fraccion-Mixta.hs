
solve :: Int -> Int -> String
solve a b | mod a b /= 0 = mostrar (div a b) ++ show (mod a b)++"/"++show b
          | otherwise = show (div a b)
    where
        mostrar :: Int -> String
        mostrar n | n == 0 = ""
                  | otherwise = show n++" "
main :: IO()
main = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
    putStrLn $ solve a b