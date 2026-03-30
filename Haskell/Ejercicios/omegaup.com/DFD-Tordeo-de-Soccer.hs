main :: IO()
main = do
    input <- getContents
    let lista = map read $ words input :: [Int]
        r = drop 1 lista
        suma = sum r
        cant_positivo = length $ filter (\x -> x>=0) r
        cant_negativo = length $ filter (\x -> x<0) r
    putStrLn $ show suma
    putStrLn $ show cant_positivo
    putStrLn $ show cant_negativo
    
