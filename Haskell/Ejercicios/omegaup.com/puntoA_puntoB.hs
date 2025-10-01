solve::Int-> IO Int
solve 0 = return 0
solve t = do
    input <- getLine
    let a = read input :: Double
    let f = a - fromIntegral (floor a)
    let fr = floor (f*10+0.000000001)
    r <- solve(t-1)
    return $ fr+ r

main :: IO()
main = do
    input <- getLine
    let t = read input :: Int
    r <- solve t
    putStrLn $ show r