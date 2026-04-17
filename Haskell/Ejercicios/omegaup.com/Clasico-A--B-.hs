main :: IO()
main = do
    input <- getLine
    let [a, b ] = map read (words input) :: [Int]
        r = a + b
    putStrLn $ show r