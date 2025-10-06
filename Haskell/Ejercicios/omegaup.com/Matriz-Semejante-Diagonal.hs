leerMatriz :: Int -> IO [[Int]]
leerMatriz 0 = return []
leerMatriz n = do
    input <- getLine
    let lista = map read $ words input :: [Int]
    matriz <- leerMatriz (n-1) 
    return (lista : matriz) 

verificarDiagonalPrincipal :: [[Int]] -> Bool
verificarDiagonalPrincipal [] = True
verificarDiagonalPrincipal matriz = 
    let diagonal = [fila !! i | (fila, i) <- zip matriz [0..]]
    in case diagonal of
        []     -> True
        (x:xs) -> all (== x) xs

verificarMatrizSemejante :: [[Int]] -> Bool
verificarMatrizSemejante [] = True
verificarMatrizSemejante matriz = matriz == transponer matriz

transponer :: [[a]] -> [[a]]
transponer ([]:_) = []
transponer matriz = (map head matriz) : transponer (map tail matriz)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    matriz <- leerMatriz n     
    let resp = verificarDiagonalPrincipal matriz && verificarMatrizSemejante matriz
    let mensaje = if resp then "SI" else "NO" 
    putStrLn mensaje