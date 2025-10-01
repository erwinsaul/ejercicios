import Control.Monad

readTuples :: Int -> IO [(Double, Double)]
readTuples n = replicateM n $ do
    line <- getLine
    let [a, b] = map read $ words line
    return (a, b)

velocidad :: (Double, Double) -> (Double, Double) -> Int
velocidad (a, b) (c, d) = floor ((d-b) / (c-a))

solve :: [(Double, Double)] -> Int
solve [] = 0
solve [_] = 0 
solve (x:y:xs) = max (velocidad x y) (solve (y:xs))

main :: IO ()
main = do
    n <- readLn
    tuples <- readTuples n
    let l = solve tuples
    print l
