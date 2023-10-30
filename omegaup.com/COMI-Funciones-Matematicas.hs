import Control.Monad
import Text.Printf

redondear :: Double -> Double
redondear x =fromIntegral (round (x * 100)) / 100

solve :: [Double] -> Double
solve (x:xs)
  | x == 1 = fromIntegral (truncate (abs (head xs)))
  | x == 2 = fromIntegral (truncate (max (head xs) (last xs)))
  | x == 3 = fromIntegral (truncate (min (head xs) (last xs)))
  | x==4 = sqrt (head xs)+0.0000000001
  | x==5 = (fromIntegral (floor (head xs))) ^ (fromIntegral (floor (last xs)))
  | otherwise = head xs

mostrarNumero :: Double -> String
mostrarNumero x
  | x == fromIntegral (truncate x) = printf "%.0f" (fromIntegral (truncate x) :: Double)
  | otherwise = printf "%.2f" x

main :: IO ()
main = do
  n <- readLn
  rows <- replicateM n getLine
  let nums = map read . words <$> rows
      result = map solve nums
  forM_ result $ putStrLn . mostrarNumero