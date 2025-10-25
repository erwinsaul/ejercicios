-- MLE
import Data.List

leer :: Int -> IO [[Int]]
leer 0 = return []
leer n = do
    input <- getLine
    let lista = map read $ words input :: [Int]
    resto <- leer (n-1)
    return (lista : resto )

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    lista <- leer n
    let res = map reverse $ transpose lista
    mapM_ putStrLn $ map (unwords . map show) res
