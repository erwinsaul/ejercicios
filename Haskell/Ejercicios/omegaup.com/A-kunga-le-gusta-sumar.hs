main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    if n == 0 then
        return ()
    else do
        let r =  n * (n + 1) `div` 2 
        putStrLn $ show r
        main
