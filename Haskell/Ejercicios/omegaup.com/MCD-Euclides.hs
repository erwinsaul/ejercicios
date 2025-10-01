solve::Int->Int->Int
solve a 0 = a
solve a b = solve b (a `mod` b)

main :: IO()
main = do
    input<-getLine
    let lista = map read (words input) :: [Int]
    let a = head lista
    let b = last lista
    print $ (solve a b)