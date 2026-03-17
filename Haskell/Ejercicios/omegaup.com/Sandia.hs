main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    let s = if mod n 2 == 0 then "SI" else "NO"
    putStrLn s