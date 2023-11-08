main :: IO()
main=do
    a <- readLn :: IO Int
    if mod a 2 == 0 && a>3
        then putStrLn "SI"
        else putStrLn "NO"