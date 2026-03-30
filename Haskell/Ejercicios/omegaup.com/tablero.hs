import Data.Bits (xor)

solve :: Int -> Int -> Int -> Int -> IO()
solve 0 _ _ _ = return ()
solve n x y c = do
    input <- getLine
    let [x', y'] = map read $ words input :: [Int]
    let r = xor c (fromEnum ((mod(x+y) 2) /= (mod(x'+y') 2))) 
    putStrLn $ show r
    solve (n-1) x y c

main :: IO()
main = do
    input <- getLine
    let [x, y, c] = map read $ words input :: [Int]
    input <- getLine
    let n = read input :: Int
    solve n x y c