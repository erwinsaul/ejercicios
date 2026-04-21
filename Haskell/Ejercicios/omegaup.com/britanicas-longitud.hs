main :: IO ()
main = do
    input <- getLine
    let n = read input :: Int
        pie = div n 12
        pulgada = mod n 12
        yarda = div pie 3
        pies = mod pie 3
        furlong = div yarda 220
        yardas = mod yarda 220
        milla = div furlong 8
        furlongs = mod furlong 8
    putStrLn $ show milla ++ " " ++ show furlongs ++ " " ++ show yardas ++ " " ++ show pies ++ " " ++ show pulgada