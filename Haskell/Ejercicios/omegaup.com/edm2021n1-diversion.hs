--Memory limit Exced
import Control.Monad
import Data.List


main :: IO ()
main = do
  n <- readLn :: IO Int
  xs <- replicateM n readLn :: IO [Int]
  let v = sort xs  
  let s = sum (tail v)
  print s
