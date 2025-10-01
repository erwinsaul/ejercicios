main :: IO()
main = do
    input<-getLine
    let lista = map read $ words input :: [Int]
    let n = length lista
    let r = n-1
    putStrLn $ show r