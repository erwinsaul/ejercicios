import Text.Printf

main :: IO()
main = do
    input <- getContents
    let [n, k] = map read $ words input :: [Double]
    let s = n + k
    let r = (n * 100) / s
    printf "%.2f%%" r