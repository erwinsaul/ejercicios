
solve::Int->Int
solve 0 = 0
solve n = calcular n
    where
        calcular 0 = 0
        calcular n = 2*n + calcular (n-1)

main :: IO()
main = do
    a <- readLn :: IO Int
    let r = solve a
    putStrLn $ show r