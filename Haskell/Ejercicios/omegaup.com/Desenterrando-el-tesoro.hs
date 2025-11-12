leer :: Int -> IO [[Int]]
leer 0 = return []
leer n = do
    input <- getLine
    let lista = map read $ words input :: [Int]
    resto <- leer (n - 1)
    return (lista : resto)

main :: IO()
main = do
    input <- getLine
    let [n, m] = map read $ words input :: [Int]
    lista <- leer n
    let resp = sum $ map (length . filter (== 0)) $ lista
    print (resp + m - 1 )