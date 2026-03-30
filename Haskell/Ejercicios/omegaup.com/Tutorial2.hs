main :: IO()
main = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
    let result = a + b
    putStrLn $ show result