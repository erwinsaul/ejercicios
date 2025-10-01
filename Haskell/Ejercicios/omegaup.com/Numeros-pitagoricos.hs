import Data.List (sort)
main :: IO()
main = do
    input <-getLine
    let v = map read $ words input :: [Int]
    let vr = sort v
    let [a, b, c] = vr
    let resp = if a*a + b*b == c*c then "Si" else "No"
    putStrLn resp
