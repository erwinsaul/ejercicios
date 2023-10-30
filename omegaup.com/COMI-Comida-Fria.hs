leerNumeros :: Int -> IO [Int]
leerNumeros n = sequence (replicate n readLn)

main :: IO ()
main = do  
  n <- readLn
  numeros <- leerNumeros n  
  let maximo = maximum numeros
  let minimo = minimum numeros
  let suma = sum numeros
  let prom = fromIntegral suma/ fromIntegral n
  putStrLn (show minimo++" "++show maximo++" "++show (floor prom ))