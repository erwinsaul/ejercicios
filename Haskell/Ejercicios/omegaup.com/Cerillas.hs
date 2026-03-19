solve :: Int -> Int -> Int -> IO()
solve 0 _ _ = return ()
solve n a b = do
    input <- getLine
    let dato = read input :: Int
        diagonal = sqrt $ fromIntegral (a*a + b*b)
        respuesta = if fromIntegral dato <= diagonal then "DA" else "NE"
    putStrLn respuesta
    solve (n - 1) a b
    
main :: IO()
main = do
    input <- getLine
    let [n, a, b] = map read $ words input :: [Int]
    solve n a b
