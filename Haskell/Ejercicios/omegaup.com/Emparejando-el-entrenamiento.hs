main :: IO()
main = do
    input <- getLine
    let [a,b,c,d] = map read $ words input :: [Int]
        lista = [abs((a+b)-(c+d)), abs((a+c)-(b+d)), abs((a+d)-(b+c))]
        r = minimum lista
    print r