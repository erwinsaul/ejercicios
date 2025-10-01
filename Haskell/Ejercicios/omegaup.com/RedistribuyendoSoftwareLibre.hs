solve :: Int-> IO()
solve 0 = return ()
solve t = do
    input <- getLine
    let n = read input :: Int
    let r = if n>=3 then "Ok" else "No"
    putStrLn r
    solve (t-1)

main :: IO()
main = do
    input <- getLine
    let t = read input :: Int
    solve t