solve :: Int -> IO ()
solve 0 = return ()
solve n = do
    input <- getLine
    let r = length input
    let resp = if mod r 2 == 0 then "SI" else "NO"
    putStrLn resp
    solve (n - 1)

main :: IO()
main = do
    input <- getLine
    let n  = read input :: Int
    solve n