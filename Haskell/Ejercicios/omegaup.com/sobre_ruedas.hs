main :: IO()
main = do
    input <- getLine
    let lista = map read $ words input :: [Int]
    let     r = filter (\x -> x <= 168) lista
    let mensaje = if length r == 0 then "NO CRASH" else "CRASH " ++ show ( head r )
    putStrLn $ mensaje