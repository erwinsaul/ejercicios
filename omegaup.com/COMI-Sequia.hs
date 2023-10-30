solve::[Int]->Int->Int->Int
solve [] n r = r
solve (x:xs) n r | n <= 0 = r
               | otherwise = solve xs (n-x) (r+1)

main :: IO ()
main = do  
  input1 <- getLine
  let [n, c] = map read (words input1) :: [Int]
  
  input2 <- getContents
  let rainLevels = map read (lines input2) :: [Int]
  let r = solve rainLevels c 0
  print r