solve::Int->Int->Int
solve 0 r = r
solve n r = solve a (r*10+b)
    where
        a = div n 10
        b = mod n 10

main :: IO()
main = do
    a <- readLn :: IO Int
    let r = solve a 0
    putStrLn $ show r