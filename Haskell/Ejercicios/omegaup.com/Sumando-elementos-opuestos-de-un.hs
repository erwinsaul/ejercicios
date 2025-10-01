solve::[Int]->[Int]
solve [] = []
solve (x:xs) = (x + last xs) : solve (init xs)

main :: IO()
main=do
    input<-getLine
    let n = (read input) :: Int
    input<-getLine
    let xs = map read (words input) :: [Int]
    let r = solve xs
    putStrLn (unwords (map show r))
