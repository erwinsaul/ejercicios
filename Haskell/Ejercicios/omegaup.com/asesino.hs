-- TLE 50%
leerCoordenadas :: Int -> IO [(Int, Int)]
leerCoordenadas 0 = return []
leerCoordenadas n = do
    input <- getLine
    let [x, y] = map read $ words input :: [Int]
    resto <- leerCoordenadas (n - 1)
    return $ (x, y) : resto

solve :: Int -> Int -> [(Int, Int)] -> Int
solve n m coordenadas =
    let posiciones = [(i, j) | i<- [1..n-1], j <- [1..m-1]]
    in length $ filter (esValida coordenadas) posiciones
  where
    esValida coordenadas (i, j) =
        let cuadrosCama = [(i, j), (i+1, j), (i, j+1), (i+1, j+1)]
        in all (\coord -> not (elem coord coordenadas)) cuadrosCama

main :: IO()
main = do
    input <- getLine
    let [n, m] = map read $ words input :: [Int]
    input <- getLine
    let k = read input :: Int

    coordenadas <- leerCoordenadas k

    let resultado = solve n m coordenadas
    print resultado