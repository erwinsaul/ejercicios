import Text.Printf

factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n-1)

formatear :: Integer -> String
formatear n
   | n < 1000000 = show n
   | otherwise = 
       let d = fromIntegral n :: Double
           e = floor (logBase 10 d) :: Int
           m = d / (10 ** fromIntegral e)
        in printf "%.5fe+%03d" m e 

main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    putStrLn $ formatear  (factorial (fromIntegral n))