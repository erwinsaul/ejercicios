cperfecto::Int->Int->Bool
cperfecto x y | x*x == y = True
              | x*x > y = False
              | otherwise = cperfecto (x+1) y

--otra forma con solo una entrada y con where
-- Where no permite tener variables locales o funciones dentro de una funcion
--para tener el codigo mas ordenado

cperfecto'::Int->Bool
cperfecto' n = buscar 1 n 
    where
        buscar :: Int -> Int -> Bool
        buscar x y | x*x > y = False
                   | x*x == y = True
                   | otherwise = buscar (x+1) y

main :: IO ()
main = do
    putStrLn "Determinar si es un numero Perfecto" --
    putStrLn "Ingresa un numero" --
    input <- getLine
    let n = read input :: Int
    putStrLn $ show (cperfecto 1 n)
    putStrLn $ show (cperfecto' n)