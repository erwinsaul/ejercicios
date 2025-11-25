primo :: Int -> Bool
primo n | n < 2 = False
        | n == 2 || n == 3 = True
        | mod n 2 == 0 = False
        | mod n 3 == 0 = False
        | otherwise = verificar 5 n
    where
        verificar :: Int -> Int -> Bool
        verificar i n | i * i > n = True
                      | mod n i == 0 || mod n (i + 2) == 0 = False
                      | otherwise = verificar (i + 6) n

solve :: Int -> IO()
solve 0 = return ()
solve k = do
    input <- getLine
    let n = read input :: Int
    let r = if primo n then "SI" else "NO"
    putStrLn r
    solve (k-1)

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    solve n