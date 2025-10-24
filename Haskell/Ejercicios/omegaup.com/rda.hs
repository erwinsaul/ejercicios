-- Memory Limit Exced
solve :: String -> Int
solve "" = 0
solve (x:xs) | elem x ['A', 'C', 'G', 'T'] = 1 + solve xs
             | otherwise = solve xs
main :: IO()
main = do
    input <- getLine
    let r = solve input
        tripletas = div r 3
        resto = mod r 3
        faltan = mod (3 - resto) 3
    putStrLn $ show tripletas++" "++ show faltan