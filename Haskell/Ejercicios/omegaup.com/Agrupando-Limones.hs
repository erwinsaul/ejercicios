solve :: Int->Int->String
solve 0 b = "R"
solve a 0 = "R"
solve a b = if mod b a == 0 then "R" else "I"

leer :: Int -> IO()
leer 0 = return ()
leer n = do
    input <- getLine
    let [a, b] = map read (words input) :: [Int]
    putStrLn (solve a b)
    leer (n-1)

main :: IO()
main = do
    input <- getLine
    let a = read input :: Int
    leer a
    