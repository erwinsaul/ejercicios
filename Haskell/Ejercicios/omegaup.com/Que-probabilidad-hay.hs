import Text.Printf
main :: IO()
main = do
  k <- readLn :: IO Int
  if k<=3
    then putStrLn $ printf "%.6f" (1.0 :: Double)
    else do
      let prob = (3.0 :: Double) / fromIntegral k
      putStrLn $ printf "%.6f" prob
