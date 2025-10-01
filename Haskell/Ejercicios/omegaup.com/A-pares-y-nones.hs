main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let v = map read $ words input :: [Int]
    let sumaPar =sum $ filter even v
    let cantidadPar = length $ filter even v    
    let sumaImpar = sum $ filter odd v
    let cantidadImpar = length $ filter odd v
    let promPar = fromIntegral sumaPar / fromIntegral cantidadPar
    let promImpar = fromIntegral sumaImpar / fromIntegral cantidadImpar
    let r = solve promPar promImpar
    putStrLn r

solve :: Float -> Float -> String
solve promPar promImpar
    | promPar == promImpar = "EMPATE!"
    | promPar > promImpar = "APARICIO"
    | otherwise = "NONILA"