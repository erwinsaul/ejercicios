vocales::String->Int
vocales [] = 0
vocales (x:xs) | elem x "AEIOU" = 1 + vocales xs
               | otherwise = vocales xs

consonantes::String->Int
consonantes [] = 0
consonantes (x:xs) | notElem x "AEIOU" = 1+ consonantes xs
                   | otherwise = consonantes xs

main :: IO()
main = do
    a <- getLine
    let v = vocales a
    let c = consonantes a
    putStrLn $ show c ++ " " ++ show v
