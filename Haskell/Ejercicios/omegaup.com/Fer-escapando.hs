solve :: Int -> Int -> Int -> [Int] -> Int
solve t r f lista = 
    let 
        distanciasAcumuladas = scanl1 (+) lista
        posicionesRobot = map (r +) distanciasAcumuladas
        velocidadesNecesarias = zipWith calcularVelMin [1..t] posicionesRobot
        velocidadMinima = maximum (0 : velocidadesNecesarias)
    in velocidadMinima
  where
    calcularVelMin segundo posRobot = 
        let diferenciaNecesaria = posRobot + 1 - f
        in if diferenciaNecesaria <= 0 
           then 0
           else ceiling (fromIntegral diferenciaNecesaria / fromIntegral segundo)

main :: IO()
main = do
    input <- getLine
    let [t, r, f] = map read $ words input :: [Int]
    input <- getLine
    let lista = map read $ words input :: [Int]
    let res = solve t r f lista
    putStrLn $ show res