import Control.Monad (replicateM)

main :: IO ()
main = do
    n <- readLn
    lineas <- replicateM n getLine
    let matriz = map (map read . words) lineas :: [[Int]]
    
    if esConcentric n matriz
        then putStrLn "1"
        else putStrLn "0"

esConcentric :: Int -> [[Int]] -> Bool
esConcentric n matriz = 
    all (\(i, fila) -> 
        all (\(j, valor) -> 
            valor == distanciaAlBorde n i j
        ) (zip [0..] fila)
    ) (zip [0..] matriz)

distanciaAlBorde :: Int -> Int -> Int -> Int
distanciaAlBorde n i j = min (min i j) (min (n-1-i) (n-1-j))