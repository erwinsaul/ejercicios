main::IO()
main=do
    _<-getLine
    input<-getLine
    let lista = map read $ words input :: [Int]
    let r = foldl lcm 1 lista
    putStrLn $ show r