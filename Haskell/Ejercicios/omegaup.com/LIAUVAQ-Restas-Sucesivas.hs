main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <-getLine
    let m = read input :: Int
    let cociente = div n m
    let res = mod n m
    putStrLn $ "Cociente:"++show cociente
    putStrLn $ "Residuo:"++show res