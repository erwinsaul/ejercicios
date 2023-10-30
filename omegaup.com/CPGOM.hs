main::IO()
main = do
  d  <- getLine
  let [x, y] = map read (words d)::[Int]  
  let r = x+y
  putStrLn $ id (show r)