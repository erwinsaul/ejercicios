solve :: Int -> String -> Int
solve n [] = n
solve n (x:xs) 
    | x=='x' = n
    | elem x "aeiou" = solve (n+100) xs
    | elem x "bcdfghjklm" = solve ( div n 2) xs
    | elem x "npqrstvwyz" = solve ( n-10 ) xs
    
main :: IO()
main = do
    input <- getLine
    let  n = read input :: Int
    input <- getLine
    let r = solve n input
    putStrLn $ show r