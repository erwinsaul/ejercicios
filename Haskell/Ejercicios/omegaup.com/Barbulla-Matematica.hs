main :: IO()
main = do
    input <-getLine
    let n = read input :: Int
        r = div (n*(n+1)*(n+2)) 6
    print r