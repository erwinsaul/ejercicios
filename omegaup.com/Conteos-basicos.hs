solve::Int->Int->[Int]
solve a b | a>b = []
          | otherwise = [a] ++ solve (a+1) b
main :: IO()
main = do
    input <- getLine
    let [a, b] = map read (words input) :: [Int]
    let r = solve a b
    putStrLn $ unlines $ map show r