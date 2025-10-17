import Data.Fixed (mod')
main :: IO()
main = do
    input <- getLine
    let  n = read input :: Int
    let res = 2018 + ceiling (logBase 2 (fromIntegral (n + 1)))
    putStrLn $ show res