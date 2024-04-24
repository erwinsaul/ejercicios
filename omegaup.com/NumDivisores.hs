
solve::Int->Int->Int
solve n a | a>n = 0
          | mod n a == 0 = 1 + solve n (a+1)
          | otherwise = solve n (a+1)

main :: IO ()
main = do
    input <- getLine
    let n = read input :: Int
    let r = solve n 1
    print r