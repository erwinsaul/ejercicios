import Control.Monad
import Data.List
solve::[Int]->Int->[String]
solve [] k = []
solve (x:xs) k | mod x k == 0 = show x:solve xs k
               | otherwise = "X":solve xs k
main :: IO()
main=do
    input<-getLine
    let n = (read input) :: Int
    input<-getLine
    let xs = map read (words input) :: [Int]
    input<-getLine
    let k = (read input) :: Int
    let r = solve xs k
    putStrLn (unwords r)
