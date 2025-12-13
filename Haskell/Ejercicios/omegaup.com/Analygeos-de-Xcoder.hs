semiperimetro :: Int -> Int -> Int -> Int -> Int -> Int -> Double

perimetro :: Int -> Int -> Int -> Int -> Int -> Int -> Double

area :: Int -> Int -> Int -> Int -> Int -> Int -> Double

recta :: Int -> Int -> Int -> Int -> Int -> Int -> String

main :: IO()
main = do
    input <- getLine
    let [xa, ya] = map read $ words input :: [Int]
    input <- getLine
    let [xb, yb] = map read $ words input :: [Int]
    input <- getLine
    let [xc, yc] = map read $ words input :: [Int]
    let sp = semiperimetro xa ya xb yb xc yc
    let p = perimetro xa ya xb yb xc yc
    let a = area xa ya xb yb xc yc
    let r = recta xa ya xb yb xc yc
    print sp
    print p
    print a
    print r