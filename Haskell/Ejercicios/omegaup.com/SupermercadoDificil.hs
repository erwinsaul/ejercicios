solve :: String -> String
solve "" = ""
solve (x:xs) | elem x "123456789" = x : solve xs
             | otherwise = ' ' : solve xs

sumaLinea :: String -> Int
sumaLinea linea = sum $ map read $ words $ solve linea

main :: IO ()
main = do
    contenido <- getContents
    let lineas = lines contenido
    let sumas = map sumaLinea lineas
    mapM_ print sumas