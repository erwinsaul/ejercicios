import Data.List (nub)

leer :: Int -> IO [Char]
leer 0 = return []
leer n = do
    input <- getLine
    let c = head input
    lista <- leer (n-1)
    return ( c:lista )

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    lista <- leer n
    let r = length $ nub lista
    putStrLn $ show r
