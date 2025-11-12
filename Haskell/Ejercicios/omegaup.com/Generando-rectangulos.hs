--WA
solve :: Int -> IO ()
solve 0 = return ()
solve i = do
    solve (i - 1)
    let w = i
    let h = i * i + i
    putStrLn (show w ++ " " ++ show h)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    putStrLn $ show n
    solve n