solve :: Int -> Int -> IO()
solve a b | a > b = return()
          | otherwise = do
            putStrLn $ verificar a
            solve (a+1) b
    where
        verificar n
           | mod n 15 == 0 = "BuzzFizz"
           | mod n 3 == 0 = "Buzz"
           | mod n 5 == 0 = "Fizz"
           | otherwise = show n

main :: IO()
main = do
    input <- getLine
    let [a, b] = map read (words input) :: [Int]
    solve a b