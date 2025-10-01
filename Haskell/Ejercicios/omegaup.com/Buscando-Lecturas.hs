main :: IO()
main = do
    input <- getLine
    let r = solve input
    putStrLn $ show r

solve :: String->Int
solve [] = 0
solve (x:xs) | x=='e' = 1+solve xs
             | otherwise = solve xs

