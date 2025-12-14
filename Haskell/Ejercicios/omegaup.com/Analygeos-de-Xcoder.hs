-- Error de Ejecucion 
import Text.Printf

distancia :: Integer -> Integer -> Integer -> Integer -> Double
distancia x1 y1 x2 y2 = sqrt (dx*dx + dy*dy)
  where
    dx = fromIntegral (x2 - x1) :: Double
    dy = fromIntegral (y2 - y1) :: Double

semiperimetro :: Integer -> Integer -> Integer -> Integer -> Integer -> Integer -> Double
semiperimetro xa ya xb yb xc yc = perimetro xa ya xb yb xc yc / 2

perimetro :: Integer -> Integer -> Integer -> Integer -> Integer -> Integer -> Double
perimetro xa ya xb yb xc yc = ab + bc + ca
  where
    ab = distancia xa ya xb yb
    bc = distancia xb yb xc yc
    ca = distancia xc yc xa ya

area :: Integer -> Integer -> Integer -> Integer -> Integer -> Integer -> Double
area xa ya xb yb xc yc = fromIntegral (abs det) / 2
  where
    det = xa * (yb - yc) + xb * (yc - ya) + xc * (ya - yb)

recta :: Integer -> Integer -> Integer -> Integer -> Integer -> Integer -> String
recta xa ya xb yb xc yc 
  | ya == yb && yb == yc = "Recta paralela al eje x"
  | xa == xb && xb == xc = "Recta paralela al eje y"
  | otherwise            = ""

main :: IO()
main = do
    input <- getLine
    let [xa, ya] = map read $ words input :: [Integer]
    input <- getLine
    let [xb, yb] = map read $ words input :: [Integer]
    input <- getLine
    let [xc, yc] = map read $ words input :: [Integer]
    let sp = semiperimetro xa ya xb yb xc yc
        p = perimetro xa ya xb yb xc yc
        a = area xa ya xb yb xc yc
        r = recta xa ya xb yb xc yc
    
    if r /= "" then do
        print (round sp :: Integer)
        print (round p :: Integer)
        print ( 0 :: Integer)
        putStrLn r
    
    else do
        printf "%.5f\n" sp
        printf "%.4f\n" p
        print (round a :: Integer)

