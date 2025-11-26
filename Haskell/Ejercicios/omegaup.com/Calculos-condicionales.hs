main :: IO()
main = do
    entrada <- getLine
    let numero = read entrada :: Int
    
    let resultado1 = if mod numero 2 == 0 then div numero 2 else numero + 1
    let modificaciones = 1
        
    let (resultado2, modificaciones2)
            | resultado1 >= 100 = (div resultado1 100, modificaciones + 1)
            | resultado1 >= 10  = (div resultado1 10, modificaciones + 1)
            | otherwise         = (resultado1, modificaciones)
        
    let (resultadoFinal, modificacionesFinales)
            | mod resultado2 3 == 0 = (resultado2 - 1, modificaciones2 + 1)
            | otherwise             = (resultado2, modificaciones2)
    
    putStrLn $ show resultadoFinal ++ " " ++ show modificacionesFinales