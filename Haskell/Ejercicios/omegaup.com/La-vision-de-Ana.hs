
solve :: Int -> Int-> IO()
solve 0 _ = return ()
solve n  i = do
    input <- getLine
    let [_s, d] = map read $ words input :: [Int]
    input <- getLine
    let lista = map read $ words input :: [Double]
        indices = zip [1..d] lista
        (dia, _) = foldl1 (\(i, p) (j, q) -> if q < p then (j, q) else (i, p)) indices
    putStrLn $ "Case " ++ show i ++ ": comprar en dia " ++ show dia
    solve (n - 1) (i+1)
 
main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    solve n 1