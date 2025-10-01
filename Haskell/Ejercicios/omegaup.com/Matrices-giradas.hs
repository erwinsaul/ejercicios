
import Control.Monad

solve :: [[Int]] -> Int -> [[Int]]
solve [] n = []
solve xs n | n == length xs = []
           | otherwise = [reverse(fila xs n)] ++ solve xs (n+1)
   where
    fila :: [[Int]] -> Int -> [Int]
    fila [] n = []
    fila (x:xs) n = x !! n : fila xs n

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    matriz <- replicateM n ( do
        linea <- getLine                    
        return (map read (words linea) :: [Int])  
        )
    let r = solve matriz 0
    mapM_ (putStrLn.unwords.map show) r
