import Data.List (transpose)

solve :: [Int] -> [[Int]] -> String
solve comprados pedidos =
    | all id comparacion = "#win"
    | otherwise          = "#epicfail"
    where
        totalPedidos = map sum (transpose pedidos)
        comparacion = zipWith (>=) comprados totalPedidos   

main :: IO()
main = do
    input <- getLine
    let comprados = map read (words input) :: [Int]
    input <- getLine
    let n = read input :: Int
    lineas <- sequence ( replicate n getLine )
    let pedidos = map ( map read . words ) lineas :: [[Int]]
    let r = solve comprados pedidos
    putStrLn r
