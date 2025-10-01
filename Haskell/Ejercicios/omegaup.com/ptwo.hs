main :: IO()
main = do
    input<-getLine
    let n = read input :: Int
    let r = 2^n
    print r