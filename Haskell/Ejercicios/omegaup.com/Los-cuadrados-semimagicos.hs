import Data.List (transpose) 

leer :: Int -> IO [[Int]]
leer 0 = return []
leer n = do
    input <- getLine
    let lista = map read $ words input :: [Int]
    resto <- leer (n-1) 
    return $ lista : resto    

sumaDiagonalPrincipal :: [[Int]] -> Int  
sumaDiagonalPrincipal matriz = sum $ map (\(fila, i) -> fila !! i) $ zip matriz [0..]

sumaDiagonalSecundaria :: [[Int]] -> Int
sumaDiagonalSecundaria matriz = sum $ map (\(fila, i) -> fila !! i) $ zip matriz [n-1, n-2..0]
  where n = length matriz

sumaFilas :: [[Int]] -> [Int]
sumaFilas matriz = map sum matriz

sumaColumnas :: [[Int]] -> [Int]
sumaColumnas matriz = map sum $ transpose matriz

todasIguales :: Eq a => [a] -> Bool
todasIguales [] = True
todasIguales (x:xs) = all (== x) xs

verificarFilaColumna :: [[Int]] -> Int
verificarFilaColumna matriz = if todasIguales (fila++columna) then head fila else -1
  where fila = sumaFilas matriz
        columna = sumaColumnas matriz

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    lista <- leer n
    let dp = sumaDiagonalPrincipal lista
        ds = sumaDiagonalSecundaria lista
        dato = verificarFilaColumna lista
    
    let resp = if dp==ds && ds == dato then "1" else "0"
    putStrLn resp