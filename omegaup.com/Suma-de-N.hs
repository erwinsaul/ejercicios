solve::Int->Int
solve n | n==0 = 0
        | otherwise = mod n 10 + solve (div n 10)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    let r = solve n
    print r