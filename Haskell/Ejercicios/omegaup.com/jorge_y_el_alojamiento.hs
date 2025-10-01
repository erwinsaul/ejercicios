solve::Int->IO Int
solve 0 = return 0
solve n = do
    input<-getLine
    let lista = map read $ words input :: [Int]
    let a = lista !! 0
    let b = lista !! 1
    let r = if b-a >= 2 then 1 else 0
    resto <- solve (n-1)
    return (r+resto)

main :: IO()
main = do
    input<-getLine
    let n = read input :: Int
    r <- solve n
    putStrLn( show r )

