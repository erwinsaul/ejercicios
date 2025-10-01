solve::[Int]->Int->Int
solve [] _ = 0
solve xs n | last xs>=n = 1 + solve (init xs) n
           | otherwise = solve (init xs) n
main :: IO ()
main = do
    input <- getLine
    let [num1, num2] = map read (words input) :: [Int]
    input <- getLine
    let numbers = map read (words input) :: [Int]
    let r = solve numbers num2
    print r