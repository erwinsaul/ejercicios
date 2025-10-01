solve :: Int -> Int -> Int
solve a b | (a+b)==5 = 2*a+(3+b)
          | otherwise = apoyo (a-1) b

    where
        apoyo a b = if mod (7*a+b) 2 ==0 then a-b else a*b

main :: IO()
main = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
    let  r = solve a b
    putStrLn $ show r