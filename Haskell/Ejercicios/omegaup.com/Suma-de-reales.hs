import Text.Printf

main :: IO()
main = do
    input <- getLine
    let [a, b] = map read (words input) :: [Double]    
    let c = a + b
    printf "%.2f" c