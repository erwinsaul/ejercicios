import Text.Printf
main :: IO()
main = do
    input <- getLine
    let n = read input :: Double
    input <- getLine
    let l = map read $ words input :: [Double]
        prom = (sum l) / n
    printf "%.2f" prom