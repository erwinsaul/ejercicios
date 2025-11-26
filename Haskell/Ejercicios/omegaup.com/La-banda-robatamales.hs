main :: IO()
main = do
    input <- getLine
    let [n, b] = map read $ words input :: [Int]
        r = if mod n 2 ==0 then div n 2 else (div n 2) + 1
        resto = n - r     
        res = r + (mod resto (b-1) )    
    print(res)