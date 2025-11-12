main :: IO()
main = do
    input  <- getLine
    let [a, b] = map read $ words input :: [Int]
        c = a*a+b*b
    putStrLn $ show c