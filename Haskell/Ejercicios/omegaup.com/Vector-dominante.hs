import Control.Monad
import Data.List
solve::[Int]->[Int]->Bool
solve [] [] = True
solve (x:xs) (y:ys) | x > y = solve xs ys
                    | otherwise = False

main :: IO()
main=do
    n <- readLn :: IO Int
    input <- getLine          
    let xs = map read (words input) :: [Int]
    input <- getLine          
    let xy = map read (words input) :: [Int]
    if solve xs xy
        then print(1 :: Int)
        else print(0 :: Int)
   
