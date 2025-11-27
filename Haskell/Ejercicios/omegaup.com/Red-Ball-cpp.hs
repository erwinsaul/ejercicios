-- MLE - TLE

solve :: Int -> IO()
solve 0 = return()
solve n = do
    input <- getLine
    let r = generar input 0 (length input)
    print $ length r
    putStrLn $ unwords r
    solve (n-1)  

  where
    generar :: String -> Int -> Int -> [String]
    generar [] n _ = []
    generar (x:xs) n t | x /= '0' = numero : generar xs (n+1) t
                       | otherwise = generar xs (n+1) t
        where
          ceros = t - n - 1
          numero = x : replicate ceros '0'

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    solve n