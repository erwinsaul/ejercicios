main = do
  input <- getLine
  let [a, b] = map read (words input) :: [Int]
  let r = div a b
  let m = if mod a b == 0 then 0 else mod a b
  let result = if m==0 then show r else show r++" "++ show m ++"/"++ show b   
  putStrLn result