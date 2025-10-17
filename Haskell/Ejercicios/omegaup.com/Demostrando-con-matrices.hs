-- ESTE PROLEMA TIENE MLE
import Data.List (transpose)

verificar :: [[Int]] -> Bool
verificar m =
    let transpuesta = transpose m
    in m == transpuesta

leer :: Int -> IO [[Int]]
leer 0 = return []
leer n = do
    input <- getLine
    let lista = map read $ words input :: [Int]
    resto <- leer (n - 1)
    return (lista : resto)

solve :: Int -> IO ()
solve 0 = return ()
solve n = do
    input <- getLine
    let r = read input :: Int
    m <- leer r
    let resultado = if verificar m then "Simétrica" else "No Simétrica"
    putStrLn resultado
    solve (n - 1)

main :: IO ()
main = do
    input <- getLine
    let n = read input :: Int
    solve n
