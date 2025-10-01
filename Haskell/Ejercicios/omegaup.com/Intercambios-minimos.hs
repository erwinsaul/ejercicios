import Data.List

contar :: [Int] -> [Int] -> Int
contar [a,b,c] [d,e,f] = iguales a d + iguales b e + iguales c f
    where iguales x y = if x == y then 0 else 1

main :: IO()
main = do
    input <- getLine
    let [a,b,c] = map read $ words input :: [Int]
    let [d,e,f] = sort [a,b,c]
    let r = contar [a,b,c] [d,e,f]
    let resp = if r == 0 then "0" else if r == 2 then "1" else "2"
    putStrLn resp


