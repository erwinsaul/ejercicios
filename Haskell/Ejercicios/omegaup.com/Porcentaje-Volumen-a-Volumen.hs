import Text.Printf

main :: IO()
main = do
    input <- getContents
    let [a, b, c] = map read $ lines input :: [Double]
        pa = (a * 100.0)/(a+b+c)
        pb = (b * 100.0)/(a+b+c)
    printf "%7.2f%%\n" pa
    printf "%7.2f%%\n" pb