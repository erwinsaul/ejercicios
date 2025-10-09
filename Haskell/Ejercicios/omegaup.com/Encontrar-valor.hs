import Data.List (elemIndex)
import Data.Maybe (fromMaybe)

leer :: Int -> IO [Int]
leer 0 = return []
leer n = do
    input <- getLine
    let valor = read input :: Int
    lista <- leer (n-1)
    return (valor:lista)

main :: IO ()
main = do
    input <- getLine
    let n = read input :: Int
    lista <- leer n
    input <- getLine
    let valor = read input :: Int
    case elemIndex valor lista of
        Just posicion -> print posicion
        Nothing -> putStrLn "NO"