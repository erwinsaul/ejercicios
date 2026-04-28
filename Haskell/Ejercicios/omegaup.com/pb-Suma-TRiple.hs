solve :: Int -> Int -> Int -> Int -> [Int]
solve a b c n
    | n == 1 = [a]
    | n == 2 = [a, b]
    | n == 3 = [a, b, c]
    | otherwise = a : solve b c (a+b+c) (n-1)

main :: IO()
main = do
    input <- getLine
    let  n = read input :: Int
    let  r = solve 1 1 2 n
    putStrLn $ unwords ( map show r )