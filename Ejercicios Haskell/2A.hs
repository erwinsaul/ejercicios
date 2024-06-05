--par o impar con modo
par::Int->Bool
par x = mod x 2==0

impar::Int->Bool
impar x = mod x 2==1

--par o impar recursivo
parRecursivo::Int->Bool
parRecursivo x | x==0 = True
               | x==1 = False
               | otherwise = parRecursivo (x-2)

imparRecursivo::Int->Bool
imparRecursivo x | x == 0 = False
                 | x == 1 = True
                 | otherwise = imparRecursivo (x-2)


main::IO()
main=do
  putStrLn "Ingresa un numero"
  input <- getLine
  let n = read input :: Int
  putStrLn "Par?"
  putStrLn $ show (par n)
  putStrLn $ show (parRecursivo n)
  putStrLn "Impar?"
  putStrLn $ show (impar n)
  putStrLn $ show (imparRecursivo n)

