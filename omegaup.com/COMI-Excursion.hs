solve::[Int]->[Int]->[Int]
solve xs [] = []
solve xs (y:ys) = xs!!(y-1):solve xs ys

main :: IO()
main = do  
  input <- getLine
  let [n, c] = map read (words input)  
  v <- sequence $ replicate n getLine
  let vl = map read v :: [Int]
  v <- sequence $ replicate c getLine
  let cl = map read v :: [Int]
  let rl = solve vl cl
  let rs = map show rl  
  mapM_ putStrLn rs