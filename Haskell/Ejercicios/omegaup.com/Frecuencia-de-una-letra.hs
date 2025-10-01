
solve:: String -> Char -> Int
solve "" letra = 0
solve (x:xs) letra | x == letra = 1 + solve xs letra
                  | otherwise = solve xs letra

main :: IO()
main = do
    input <- getLine
    let [cadena, letra] = words input
    let c = head letra
    let r = solve cadena c
    putStrLn $ show r