solve:: Int -> Int -> Int -> Int
solve a b c | a>b = 0
            | otherwise = a^c + solve (a+1) b c

main :: IO ()
main = do
    input <- getLine
    let [a, b, c] = map read (words input)
    print $ solve a b c