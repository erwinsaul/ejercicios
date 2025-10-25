import Data.List (sort)

solve :: [Int] -> String
solve xs | xs == sort xs  = "CRECIENTE"
         | xs == reverse (sort xs)  = "DECRECIENTE"
         | otherwise = "NO ORDENADA"
  

main :: IO()
main = do
    _ <- getLine
    input <- getLine
    let lista = map read $ words input :: [Int]
    let resp = solve lista
    putStrLn resp
    
