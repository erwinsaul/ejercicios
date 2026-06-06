import Data.Bits (xor, shiftR)

solve :: Integer -> Integer
solve n = xor n (shiftR n 1)


main :: IO()
main = do
    input <- getLine
    let n = read input :: Integer
    let r = solve n
    putStrLn $ show r