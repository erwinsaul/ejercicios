solve :: [Int] -> [String]
solve [] = []
solve (x:xs) = bisiesto x : solve xs
    where
        bisiesto n
            | n `mod` 4 == 0 && n `mod` 100 /= 0 || n `mod` 400 == 0 = "S"
            | otherwise = "N"

main :: IO ()
main = do
    n <- readLn :: IO Int
    numbers <- sequence $ replicate n readLn :: IO [Int]
    let res = solve numbers
    mapM_ putStrLn res