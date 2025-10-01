import System.IO
solve :: Int -> Float -> Float
solve  clave tiempo = tiempo * precio clave
    where
        precio 12 = 2
        precio 15 = 2.2
        precio 18 = 4.5
        precio 19 = 3.5
        precio 23 = 6
        precio 25 = 6
        precio 29 = 5

mostrarResultado :: Float -> String
mostrarResultado x 
    | x == fromInteger (round x) = show (round x) 
    | otherwise = show x 

main :: IO()
main = do
    verificar <- isEOF
    if verificar
        then return()
        else do
            input <- getLine
            let [clave, tiempo] = words $ map (\c -> if c == ',' then ' ' else c) input
            let claveInt = read clave :: Int
            let tiempoFloat = read tiempo :: Float
            let  r = solve claveInt tiempoFloat
            putStrLn $ mostrarResultado r
            main