-- Presentation Error

import Numeric (showFFloat)

formatear :: Float -> String
formatear x
    | x == fromIntegral (round x :: Int) = show (round x :: Int)
    | otherwise = showFFloat (Just 4) x ""
main :: IO()
main = do
    input <- getLine
    let [a,b] = map read (words input) :: [Float]
    let d = sqrt(a*a + b*b)
    putStrLn $ formatear d