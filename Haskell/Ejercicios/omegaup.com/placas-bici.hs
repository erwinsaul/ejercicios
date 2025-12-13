-- Variaciones
solve :: Int -> Int -> Int -> Int -> Int
solve a b c d = let n = b - a + 1
                    m = d - c + 1 
                in if n < 3 || m < 2 then 0
                   else n*(n-1)*(n-2) * m*(m-1)

main :: IO()
main = do
    input <- getLine
    let [a, b, c, d] = map read $ words input :: [Int]
        result = solve a b c d
    print result