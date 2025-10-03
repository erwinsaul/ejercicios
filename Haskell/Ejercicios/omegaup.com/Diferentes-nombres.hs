
buscar :: String -> String -> Int -> Bool
buscar a b 0 = False
buscar a b n | rotar a n == b = True
             | otherwise = buscar a b (n-1)
    where
        rotar :: String -> Int -> String
        rotar a n = der ++ izq
            where (izq, der) = splitAt n a

main :: IO()
main = do
    input <- getLine
    let [a, b] = words input
    let r = buscar a b ((length a) - 1)
    let resp = if r then "No" else "Si"
    putStrLn resp