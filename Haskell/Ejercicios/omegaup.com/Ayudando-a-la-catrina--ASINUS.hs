solve :: [Int] -> IO()
solve [] = return()
solve (x:xs) = do
    let r = div x 10  
    putStrLn $ show r
    solve xs

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getContents
    let lista = map read (lines input)::[Int]
    let suma = sum ( map (\x -> div x 10) lista )
    putStrLn $ show suma
    solve lista