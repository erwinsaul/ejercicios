main :: IO()
main = do
    input <- getContents
    let numeros = map read (lines input) :: [Int]
    let suma = sum numeros
    let mayor = maximum numeros
    let promedio = round $ fromIntegral suma / 7.0
    putStrLn $ show promedio
    putStrLn $ show mayor

