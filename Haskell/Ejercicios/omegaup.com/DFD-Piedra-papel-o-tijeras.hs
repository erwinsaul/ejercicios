
solve :: Int -> Int -> String
solve a b 
    | a == b = "EMPATE"
    | a == 4 && b /= 4 = "FLIX"
    | a /= 4 && b == 4 = "MARTONTITO"
    | a == 0 && b == 2 = "FLIX"
    | a == 0 && b == 5 = "MARTONTITO"
    | a == 2 && b == 0 = "MARTONTITO"
    | a == 2 && b == 5 = "FLIX"
    | a == 5 && b == 0 = "FLIX"
    | a == 5 && b == 2 = "MARTONTITO"

main :: IO()
main = do
    input <- getLine
    let [a, b] = map read $ words input :: [Int]
    let r = solve a b
    putStrLn r