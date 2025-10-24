main :: IO()
main = do
    input <- getContents
    let lista = map read $ words input :: [Int]
        resp = maximum lista
    putStrLn $ show resp
