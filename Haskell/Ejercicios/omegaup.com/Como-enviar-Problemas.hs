main :: IO()
main = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
        s = div ((b-a+1)*(a+b)) 2
    putStrLn $ show s