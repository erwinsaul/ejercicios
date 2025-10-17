import Data.List (elemIndex)
import Data.Maybe (fromMaybe)

posicion :: Eq a => a -> [a] -> Int
posicion x xs = fromMaybe (-1) (elemIndex x xs)

swap :: Int -> Int -> [a] -> [a]
swap i j xs
  | i == j = xs
  | otherwise = [select k | k <- [0..length xs - 1]]
  where
    select k
      | k == i = xs !! j
      | k == j = xs !! i
      | otherwise = xs !! k

leer :: Int -> IO [Int]
leer 0 = return []
leer n = do
    input <- getLine
    let d = read input :: Int
    resto <- leer (n - 1)
    return (d : resto)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    lista <- leer n
    let minimo = minimum lista
    let maximo = maximum lista
    let posMin = posicion minimo lista
    let posMax = posicion maximo lista
    let listaSwap = swap 0 posMax lista
    let listaRes = swap (n-1) posMin listaSwap
    putStrLn $ unlines (map show listaRes)
