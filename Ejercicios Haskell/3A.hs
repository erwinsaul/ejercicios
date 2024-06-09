factorial::Int->Int
factorial 0 = 1
factorial x = x * factorial (x-1)

fact::Integer->Integer
fact 0 = 1
fact x = x * fact (x-1)

main::IO()
main = do
    putStrLn "Ingresa un numero"
    n <- readLn :: IO Int
    putStrLn $ "Variable (Int) El factorial de " ++ show n ++ " es: "++ show (factorial n)
    putStrLn $ "Variable (Integer) El factorial de " ++ show n ++ " es: "++ show (fact (toInteger n))