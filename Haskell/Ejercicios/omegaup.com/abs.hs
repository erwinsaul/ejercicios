main :: IO()
main = do
       a <- readLn :: IO Int
       let r = abs a
       putStrLn $ show r