solve::Int->Int->Int->Int
solve a b c = (a^b) * c    

main :: IO()
main = do
    input<-getLine
    let lista = map read (words input) :: [Int]
    let a = lista!!0
    let b = lista!!1
    let c = lista!!2
    print $ solve a b c