solve::Int->[Int]
solve 1 = [1]
solve n | mod n 2==0 = [n] ++ solve (div n 2)
        | otherwise = [n] ++ solve (3*n+1)

main :: IO()
main = do
    input<-getLine
    let n = read input :: Int
    putStrLn $ unwords $ map show $ solve n
    