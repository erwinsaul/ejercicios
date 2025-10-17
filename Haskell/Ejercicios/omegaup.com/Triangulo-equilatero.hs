import Data.List (nub)

solve :: [Int] -> [Int] -> Bool
solve [] lista = False
solve (x:xs) lista | length (filter (== x) lista) == 3 = True
                   | otherwise = solve xs lista

main :: IO()
main = do
    input <- getLine
    let lista = map read $ words input :: [Int]
    let r =  nub lista
    let resp = if solve r lista then "1" else "0"
    putStrLn resp