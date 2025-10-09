
solve :: Int -> IO()
solve 0 = return ()
solve n = do
    input <- getLine
    let lista = map read $ words input :: [Int]
    let suma = sum lista
    putStrLn $ show suma
    solve (n-1)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    solve n
