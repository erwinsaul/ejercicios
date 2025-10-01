main :: IO()

main = do
    input <- getLine
    let [cadena, longitud] = words input
    let tam = read longitud :: Int
    let resp = take tam cadena ++ reverse (take tam (reverse cadena))
    putStrLn resp