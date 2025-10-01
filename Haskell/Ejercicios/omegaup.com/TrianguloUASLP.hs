import Data.List (sort)

main :: IO()
main = do
    input <- getContents
    let nums = map read (words input) :: [Int]
    let [a, b, c] = sort (take 3 nums) 
    let resultado = if a + b > c then "SI" else "NO"
    putStrLn resultado 