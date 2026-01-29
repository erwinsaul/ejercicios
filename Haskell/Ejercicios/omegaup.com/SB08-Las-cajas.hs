main :: IO()
main = do
    input <- getLine
    let v = map read (words input) :: [Int]
    print $ sum v