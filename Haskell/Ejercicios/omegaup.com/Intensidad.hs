import Text.Printf (printf)

formatear :: Double -> String
formatear x 
    | x == fromInteger (truncate x) = show (truncate x) 
    | otherwise = show x

main :: IO()
main = do
    input <- getLine
    let lista1 = words input
    input <- getLine
    let lista2 = words input
    let val1 = read (lista1 !! 0) :: Double 
        val2 = read (lista2 !! 0) :: Double
        r = if lista1 !! 1 == "C" then val1 / val2 else val2 / val1
    putStrLn $ formatear r ++ " A"