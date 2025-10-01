main :: IO()
main = do
    input <- getLine
    input <- getLine
    let v = map read $ words input :: [Int]
    let s = sum v
    putStrLn $ show s