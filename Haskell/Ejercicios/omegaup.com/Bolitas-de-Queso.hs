main :: IO()
main = do
    a <- readLn :: IO Int
    let r = 3*a+2
    putStrLn $ show r
