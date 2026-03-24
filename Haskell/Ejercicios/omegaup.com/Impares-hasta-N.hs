main :: IO()
main = do
    input <- getLine
    let  n = read input :: Int
         r = (div n 2) * (div n 2)
    putStrLn $ show 