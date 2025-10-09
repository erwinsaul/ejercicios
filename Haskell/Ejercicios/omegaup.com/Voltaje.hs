main :: IO()
main = do
    input <- getLine
    let [n, a] = words input 
    let i = read n :: Int
    input <- getLine
    let [m, b] = words input
    let r = read m :: Int
    let v = i*r
    putStrLn $ show v ++ " V"