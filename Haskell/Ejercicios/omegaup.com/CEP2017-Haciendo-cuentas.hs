-- TLE
solve :: Int -> Int -> Int -> IO [Int]
solve 0 a b = return [a, b]
solve cant a b = do
    input <- getLine
    let [p, m, n, t] = map read $ words input :: [Int]
    let ra = div (t - p*n) (m - n)
    let rb = (p - ra)
    solve (cant-1) (ra+a) (rb+b) 

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    [a, b] <- solve n 0 0
    putStrLn $ show a ++ " " ++ show b