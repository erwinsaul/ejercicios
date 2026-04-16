solve :: [String] -> IO()
solve [] = return()
solve (x:xs) = do
    putStrLn $ "Hola " ++ x
    solve xs

main :: IO()
main = do
    input <- getContents
    let lista = lines input
    solve lista    