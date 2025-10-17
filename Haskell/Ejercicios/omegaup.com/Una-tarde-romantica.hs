main :: IO()
main = do
    input <- getLine
    let [a, b, c] = map read (words input) :: [Int]
    let res = if a+b >= c then "SI" else "NO"
    putStrLn res