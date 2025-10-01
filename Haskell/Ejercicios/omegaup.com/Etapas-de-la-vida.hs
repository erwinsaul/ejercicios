solve::Int->String
solve n | n<=3 = "BEBE"
        | n<=14 = "NINO"
        | n<=18 = "JOVEN"
        | n<=65 = "ADULTO"
        | otherwise = "ADULTO 3RA"
main :: IO()
main = do
    input<- getLine
    let n = read input :: Int
    putStrLn (solve n)

