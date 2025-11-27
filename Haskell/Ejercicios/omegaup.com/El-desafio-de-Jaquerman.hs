-- TLE  
import Data.List (foldl1')

solve :: Int -> Int
solve n = sumar 1 n
   where 
      sumar :: Int -> Int -> Int
      sumar i t | i <= t = let mcd = foldl1' gcd [i..t]
                          in mcd + sumar (i+1) t
                | otherwise = 0


-- ACC
main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
        r = 2*n-1 -- solve n
    print r