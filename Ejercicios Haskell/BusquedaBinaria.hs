import Data.List

busquedaBinaria :: Int->[Int]->Int->Bool
busquedaBinaria n [] d = False
busquedaBinaria n xs d | d == xs !! mid = True
                       | d > xs !! mid = busquedaBinaria (length v_der)  v_der d
                       | otherwise = busquedaBinaria (length v_izq) v_izq d
    where
        mid = div n 2
        v_izq = take mid xs
        v_der = drop (mid+1) xs
        
    
main::IO()
main = do
    putStrLn "Ingresa la Dimension del array"
    input<-getLine
    let  n = read input :: Int
    putStrLn "Ingresa el array"
    input<-getLine
    let v = map read (words input) :: [Int]
    let vs = sort v
    --putStrLn(unwords (map show vs) ) Mostrar el array ordenado
    putStrLn "Ingresa el elemento a buscar"
    input<-getLine
    let d = read input :: Int
    putStrLn(show (busquedaBinaria n vs d))
    