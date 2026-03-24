leer :: Int -> IO (Int, Int)
leer 0 = return (0, 0)
leer n = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
    (sa, sb) <- leer (n - 1)
    return (a + sa, b + sb)

main :: IO()
main = do
    input <- getLine
    (a, b) <- leer (read input :: Int)
    let r = if a > b then "CULTO"
            else if a==b then
                "INDETERMINADO"
            else
                "INCULTO"    
    putStrLn r

              