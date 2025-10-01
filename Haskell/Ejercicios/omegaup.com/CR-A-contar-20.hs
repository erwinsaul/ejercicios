solve :: String -> Int
solve "" = 0
solve (x:xs) = contar x + solve xs
    where
        contar :: Char -> Int
        contar '1' = 1
        contar '2' = 2
        contar '3' = 3
        contar '4' = 4
        contar '5' = 5
        contar '6' = 6
        contar '7' = 7
        contar '8' = 8
        contar '9' = 9
        contar '0' = 0  
        contar _ = 0

main :: IO()
main = do
    input <- getLine
    let r = solve input
    putStrLn $ show r