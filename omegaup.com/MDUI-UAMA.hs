solve::Int->Int->Int->[Int]
solve a b c | a > b = []
            | mod a c == 0 = [a] ++ solve (a+1) b c
            | otherwise = solve (a+1) b c

main :: IO()
main = do
    input <- getLine
    let [a, b] = map read (words input) :: [Int]
    let r = solve a b a
    putStrLn (unwords (map show r))