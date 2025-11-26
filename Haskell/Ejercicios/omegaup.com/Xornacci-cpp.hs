-- MLE
import Data.Bits (xor)

serie :: Int -> Int -> Int -> Int
serie a b n = calcular a b 0
  where
    calcular x y i
      | i == n    = x
      | otherwise = calcular y (x `xor` y) (i + 1)

solve :: Int -> IO()
solve 0 = return()
solve n = do
    input <- getLine
    let [a, b, k] = map read $ words input :: [Int]
        r = serie a b k
    print r
    solve (n-1) 

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    solve n