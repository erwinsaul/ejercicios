main :: IO()
main = do
    input <- getContents
    let lista = lines input
    solve lista

solve :: [String] -> IO()
solve [] = return()
solve (x:xs) = do
    let lista = reverse x
    putStrLn lista
    solve xs
