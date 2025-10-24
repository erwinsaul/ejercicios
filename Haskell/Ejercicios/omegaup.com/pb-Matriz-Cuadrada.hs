-- MLE
solve :: Int -> Int -> Int -> IO()
solve n r 0 = return()
solve n r t = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
    let resp = (a-1)*r + b
    putStrLn $ show resp
    solve n r (t-1)

main :: IO()
main = do
   input <- getLine
   let [n,r] = map read $ words input :: [Int] 
   input <- getLine
   let t = read input :: Int
   solve n r t
