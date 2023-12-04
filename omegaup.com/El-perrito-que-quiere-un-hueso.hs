solve::Int->Int->Int->Int->String
solve l1 t1 l2 t2  | l1 > l2 && t1 > t2 = "Hueso 1"
                   | l1 < l2 && t1 < t2 = "Hueso 2"
                   | otherwise = "Perrito confundido :("

main :: IO()
main = do
    input <- getLine
    let [l1, t1] = map read (words input) :: [Int]
    input <- getLine
    let [l2, t2] = map read (words input) :: [Int]
    let r = solve l1 t1 l2 t2
    putStrLn r