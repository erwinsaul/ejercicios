solve :: Int -> Int -> Int -> [[Int]]
solve 0 _ _ = []
solve n m ultimo =
    let sub = reverse [ultimo..ultimo + m - 1]
        nuevoUltimo = head sub
    in sub : solve (n - 1) (m + 1) (nuevoUltimo + 1)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    let lista = solve n 1 1
    putStrLn $ unlines (map (unwords . map show) lista)
