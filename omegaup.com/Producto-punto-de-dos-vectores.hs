solve::[Int]->[Int]->Int
solve [] [] = 0
solve (x:xs) (y:ys) = (x*y)+solve xs ys

main :: IO()
main=do
    input <-getLine
    let n = read input :: Int
    input <-getLine
    let xs = map read (words input):: [Int]
    input <-getLine
    let ys = map read (words input):: [Int]
    let r = solve xs ys
    print r