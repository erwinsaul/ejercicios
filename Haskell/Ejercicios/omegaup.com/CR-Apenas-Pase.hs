-- Accepted
main :: IO()
main = do
    k <- readLn :: IO Double
    n <- readLn :: IO Int
    calificaciones <- sequence (replicate n (readLn :: IO Double))
    let suma =  sum calificaciones
    let prom = suma / fromIntegral n
    if prom > k
        then putStrLn "Presume"
        else putStrLn "Ladra"
