solve::[Int]->Int->Int->Int
solve [] max n = 0
solve (x:xs) max n = if x == max then n else solve xs max (n+1)
main::IO()
main=do
    _<-getLine
    input<-getLine
    let lista = map read $ words input :: [Int]
    let max = maximum lista
    let r = solve lista max 1
    putStrLn $ show r