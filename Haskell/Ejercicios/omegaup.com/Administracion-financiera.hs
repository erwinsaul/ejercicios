main :: IO()
main = do
    input <- getContents
    let datos = map read $ Lines input :: [Double]
    let suma = sum datos
    let media = suma / 12.0
    putStrLn $ "$" ++ show $ media