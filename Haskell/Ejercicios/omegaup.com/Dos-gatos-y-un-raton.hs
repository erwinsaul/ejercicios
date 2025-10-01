solve :: Int -> Int -> Int -> String
solve a b c | abs(c-a) < abs(c - b) = "gato A"
            | abs(c-a) > abs(c - b) = "gato B"
            | otherwise = "raton C"

main :: IO()
main = do
    input <- getLine
    let [a, b, c] = map read $ words input :: [Int]
    let  r = solve a b c
    putStrLn r
