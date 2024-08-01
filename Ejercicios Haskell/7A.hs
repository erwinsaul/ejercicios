raiz::Double->Double
raiz 0 = 0
raiz n = calculo n n
    where
        calculo :: Double -> Double -> Double
        calculo x y | abs ( x - ((x+(y/x))/2) )<0.0001 = fromIntegral (round (x * 10000)) / 10000
                    | otherwise = calculo ((x+(y/x))/2) y 
        
main:: IO ()
main = do
    putStrLn "Ingresa n"
    input <-getLine
    let n = read input :: Int
    putStrLn ("Raiz cuadrada de " ++ show n ++ " es " ++ show (raiz (fromIntegral n::Double)))