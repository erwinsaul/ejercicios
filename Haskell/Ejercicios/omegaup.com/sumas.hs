main :: IO()
main = do
   input <- getContents
   let [a, b] = map read $ lines input :: [Int]
       r = a + b
   print r
