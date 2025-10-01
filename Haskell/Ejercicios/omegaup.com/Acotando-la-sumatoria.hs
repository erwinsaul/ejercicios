solve :: Int -> Int -> Int
solve a b | a > termino 1 b = solve a (b+1)
          | otherwise = b
    where 
        termino :: Int -> Int -> Int
        termino a b | a <=b = (a+7) + termino (a+1) b
                    | otherwise = 0
main :: IO()
main = do
    input <- getLine
    let v = read input :: Int
    let r = solve v 1
    putStrLn $ show r