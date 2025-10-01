separar :: String->String
separar [] = ""
separar (x:xs) =  (valor x):separar xs
    where
        valor x | x == '-' = ' '
                | otherwise = x

solve :: [String] -> String
solve [] = ""
solve (x:xs) = head x : solve xs

main :: IO ()
main = do
    s <- getLine
    let x = separar s
    let y = words x
    putStrLn $ solve y