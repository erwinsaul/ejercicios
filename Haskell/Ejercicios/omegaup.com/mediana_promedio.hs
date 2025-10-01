main :: IO()
main = do
    input<-getLine
    let lista = map read (words input) :: [Int]
    let a = head lista
    let b = last lista
    let r = 2*a-b
    print r