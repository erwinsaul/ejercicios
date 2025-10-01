solve :: Int -> IO()
solve 0 = return()
solve t = do
    input<-getLine
    let a = read input :: Int
    input <- getLine
    let b = read input :: Int
    input <- getLine
    let c = read input :: Int
    let d = b*b - 4*a*c
    let r = if d<0 then "NO" else "SI"
    putStrLn r
    solve (t-1)

main :: IO()
main = do
    input <- getLine
    let t = read input :: Int
    solve t