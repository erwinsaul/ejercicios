resolver::Int->Int->Int->(Double, Double)
resolver a b 0 = (0, fromIntegral b/ fromIntegral a)
resolver a 0 c = (sqrt (fromIntegral c/ fromIntegral a), -sqrt(fromIntegral c/fromIntegral a))
resolver a b c = (x1, x2)
    where
        d = (b*b) - (4*a*c)
        x1 = (fromIntegral b/2) + sqrt (fromIntegral d)
        x2 = (fromIntegral b/2) - sqrt (fromIntegral d)        

discriminate::Int->Int->Int->Bool
discriminate a b c  | d >= 0 = True
                    | otherwise = False
    where
        d = (b*b) - (4*a*c)
main :: IO()
main = do
    putStrLn "Ingresa A"
    input <- getLine
    let a = read input :: Int
    
    putStrLn "Ingresa B"
    input <- getLine
    let b = read input :: Int

    putStrLn "Ingresa C"
    input <- getLine
    let c = read input :: Int
    if discriminate a b c then do
        let r = resolver a b c
        putStrLn( "La solucion es: " ++ show r )
    else
        putStrLn "La ecuacion no tiene solucion"

    
    