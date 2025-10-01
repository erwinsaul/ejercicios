matriz :: Int -> Int -> Int -> Int-> [[Int]]
matriz a b ini t  | a < t = [[]]
                  | otherwise = [fila a b ini t] ++ matriz a b (ini + b) (t+1)
    where
        fila :: Int -> Int -> Int -> Int -> [Int]
        fila a b ini t | mod t 2 /= 0 = [ ini .. ini+b-1] 
                       | otherwise = [ini + b - 1, ini + b - 2 .. ini]
main :: IO()
main = do
    input <- getLine
    let [a, b] = map read (words input) :: [Int]
    let mat = matriz a b 1 1
    mapM_ (putStrLn . unwords . map show) mat