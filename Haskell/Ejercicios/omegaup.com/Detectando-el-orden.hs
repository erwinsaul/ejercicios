solve :: Int -> Int -> Int -> Char
solve a b c
    | a==b && b==c = 'I'
    | a<=b && b<=c = 'C'
    | a>=b && b>=c = 'D'
    | otherwise = 'X'

main :: IO()
main = do
    input <- getLine
    let [a,b,c] = map read $ words input :: [Int]
    let r = solve a b c
    putStrLn [r]