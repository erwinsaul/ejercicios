main = do
  input <- getLine
  let [a, b] = map read (words input) :: [Int]
  input <- getLine
  let [c] = map read (words input) :: [Int]
  let s = if c<a*b then c else a*b
  let r  = if c<s then 0 else c-s  
  let result = show s++" "++show r
  putStrLn result