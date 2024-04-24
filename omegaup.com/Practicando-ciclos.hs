solve::Int->Int->Int->Int
solve n a b | n >= 1000 = n
            | mod n 2 == 0 = solve (n + suma) a b              
            | otherwise = solve (n + sumb) a b
        where
            sumb = div (b*(1+b)) 2
            suma = div (a*(1+a)) 2
main :: IO()
main = do
    input <- getLine
    let [n, a , b ] = map read (words input) :: [Int]
    let r = solve n a b
    print r