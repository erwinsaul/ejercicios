solve::[Int]->Int
solve [] = 0
solve (x:xs) = edad + solve xs 
    where edad = div x 365

main :: IO()
main = do
    _ <- getLine
    input<-getLine
    let lista = map read (words input) :: [Int]
    print $ solve lista