import Data.List (sort)

sumaVeleanas :: [Integer] -> [Integer] -> Integer -> Integer -> Integer
sumaVeleanas [] [] n pos
    | n > 0 = n * (10^pos)
    | otherwise = 0
sumaVeleanas (x:xs) (y:ys) n pos
    | x+y+n > 0 = (mod (x+y+n) 10) * (10^pos) + (sumaVeleanas xs ys (div (x+y+n) 10) (pos+1))
    | otherwise = 0 + (sumaVeleanas xs ys 0 (pos+1))

main :: IO()
main = do
    input <- getLine
    let n = read input :: Integer
    input <- getLine
    let lista1 = map read (words input) :: [Integer]
    input <- getLine
    let lista2 = map read (words input) :: [Integer]
    let result = sumaVeleanas (reverse (sort lista1)) (sort lista2) 0 0
    putStrLn $ show result