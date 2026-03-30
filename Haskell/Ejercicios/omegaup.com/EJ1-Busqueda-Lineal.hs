main :: IO()
main = do
    input <- getContents
    let lista = map read $ words input :: [Int]
    let ini = head lista
        fin = last lista
    let lista' = drop 1 lista
        lista'' = drop 2 lista
    let r = lista''
    let mensaje = if fin `elem` r then "Si" else "No"
    putStrLn $ mensaje