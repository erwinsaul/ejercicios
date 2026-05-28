
solve :: Int -> Int -> Int -> Int -> Int -> Int -> String
solve y1 m1 d1 y2 m2 d2  = if y1 == y2 then
                            if m1 == m2 then
                                if d1 == d2 then
                                    "Iguales"
                                else
                                    if d1 < d2 then
                                        "Primera"
                                    else
                                        "Segunda"
                            else
                                if m1 < m2 then
                                    "Primera"
                                else
                                    "Segunda"
                        else
                            if y1 < y2 then 
                                "Primera"
                            else
                                "Segunda"

main :: IO()
main = do
    input <- getLine
    let [d1, m1, y1, d2, m2, y2] = map read $ words input :: [Int]
    let r = solve y1 m1 d1 y2 m2 d2
    putStrLn r