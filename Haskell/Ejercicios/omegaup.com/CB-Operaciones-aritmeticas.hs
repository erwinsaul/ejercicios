import Text.Printf

main :: IO()
main = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
    let suma = a + b
    let resta = a - b
    let multiplicacion = a * b
    let division = fromIntegral a / fromIntegral b :: Double
    putStrLn $ show suma
    putStrLn $ show resta
    putStrLn $ show multiplicacion
    printf "%.6f" division
