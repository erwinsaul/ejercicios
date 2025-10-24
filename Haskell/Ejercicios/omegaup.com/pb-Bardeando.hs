
-- Memory Limit Exced

main :: IO()
main = do
    input <- getContents
    let l = map read $ words input :: [Int]
        n = l !! 0
        p = l !! 1
        lista = drop 2 l
        suma = sum lista
        r = if suma>= n then 0 else (n-suma)
    putStrLn $ show r
