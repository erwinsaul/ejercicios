minimo::Int->Int->Int
minimo x y | x<y = x
           | otherwise = y

maximo::Int->Int->Int
maximo x y | x>y = x
           | otherwise = y

menor3::Int->Int->Int->Int
menor3 a b c = minimo a (minimo b c)

mayor3::Int->Int->Int->Int
mayor3 a b c = maximo a (maximo b c)

main::IO()
main = do
    putStrLn("Introduce el Primer Numero")
    input <- getLine
    let a = read input :: Int
    putStrLn("Introduce el Segundo Numero")
    input <- getLine
    let b = read input :: Int
    let m = minimo a b    
    putStrLn("El Menor es: " ++ show m)
    let m = maximo a b
    putStrLn("El Mayor es: " ++ show m)