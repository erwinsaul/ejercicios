main :: IO()
main = do
    input <- getContents
    let [a,b,c,d,e] = map read $ words input :: [Int]
        r = if (a+b+c)> (d+e) then "Juan" else "Pedro"
    putStrLn r
