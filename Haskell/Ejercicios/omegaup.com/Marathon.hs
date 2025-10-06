import Data.List (sortOn)

solve :: [(Int, String, Float)] -> [(Int, String, Float)]
solve lista = take 3 (sortOn tercero lista)
  where
    tercero (_, _, tiempo) = tiempo

leer :: Int -> IO [(Int, String, Float)]
leer 0 = return []
leer n = do
    input <- getLine
    let id = read input :: Int
    nombre <- getLine  
    input <- getLine
    let tiempo = read input :: Float
    
    resto <- leer (n-1)
    return ((id, nombre, tiempo) : resto)  

mostrar :: (Int, String, Float) -> String
mostrar (id, nombre, tiempo) = show id ++ "  " ++ nombre ++ " " ++ show tiempo

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    lista <- leer n
    let resultado = solve lista
    mapM_ putStrLn (map mostrar resultado)
