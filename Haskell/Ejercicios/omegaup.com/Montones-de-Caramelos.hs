import Control.Monad (replicateM)

solve :: [Int] -> Int
solve xs = sum [avg - x | x <- xs, x < avg]
  where
    s = sum xs
    t = length xs
    avg = div s t

main :: IO()
main = do
    input <- getLine
    let t = read input :: Int

    lista <- replicateM t getLine
    let v = map read lista :: [Int]

    print $ solve v