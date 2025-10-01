main :: IO()
main = do
    input <- getLine
    let [n, m, l, p] = map read (words input) :: [Int]
    let r = n*m*l*p
    putStrLn (show r)
