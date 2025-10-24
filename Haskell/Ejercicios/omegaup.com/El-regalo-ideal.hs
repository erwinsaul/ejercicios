solve :: [Int] -> Int -> IO()
solve xs 0 = return()
solve xs n = do
     input <- getLine
     let p = read input :: Int
     let r = xs !! (p-1)
     putStrLn $ show r
     solve xs (n-1)
     
main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let lista = map read $ words input :: [Int]
    input <- getLine
    let t = read input :: Int
    solve lista t
