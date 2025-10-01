primo::Int->Bool
primo x = buscar x 2
    where
        buscar::Int->Int->Bool
        buscar x n | x==n = True
                   | mod x n == 0 = False
                   | otherwise = buscar x (n+1)

main :: IO ()
main = do
    putStrLn "Ingresa n"
    input <-getLine
    let n = read input :: Int
    putStrLn "Es Primo?"
    putStrLn $ show (primo n)