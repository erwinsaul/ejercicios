main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let l = map read $ words input :: [Int]
    let resp = filter even l
    if length resp == 0 then
        putStrLn ":("
    else do
        putStrLn $ unwords $ map (\x -> "[" ++ show x ++ "]") resp