solve :: String -> String -> Bool
solve [] [] = True
solve (x:xs) (y:ys) 
    | (elem x ['T','G','P']) && (elem y ['T','G','P']) && (x == y) = False
    | otherwise = solve xs ys


main :: IO()
main = do
    a <- getLine
    b <- getLine
    let r = if solve a b then "SI" else "NO"
    putStrLn r