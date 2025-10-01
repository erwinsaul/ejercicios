solve :: Int -> Int -> IO()
solve a b = do
    if a > b then
            return ()
    else do
        putStrLn $ unwords $ map show (result a)
        solve (a + 1) b
    where
        ini = 1 + (a - 1) * a `div` 2
        result x = [ini..ini+x-1]

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    solve 1 n