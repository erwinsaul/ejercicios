main :: IO()
main = do
    input <- getLine
    let a = read input :: Int
    input <- getLine
    let b = read input :: Int
    let r = div a b + mod a b
    putStrLn $ show r