-- Wrong Answer

import Data.List (permutations)

calcArea :: Int -> Int -> Int -> Int -> Double
calcArea bigB smallB p q = 
    let diff = fromIntegral (abs (bigB - smallB)) / 2  
        p2 = fromIntegral (p * p)                      
        q2 = fromIntegral (q * q)                      
        diff2 = diff * diff                            
    in if p2 >= diff2 && q2 >= diff2                   
       then let h = sqrt (p2 - diff2)                  
            in (fromIntegral (bigB + smallB) / 2) * h  
       else 0                                         

solve :: Int -> Int -> Int -> Int -> Int
solve a b c d = 
    let sides = [a, b, c, d]
        areas = [ calcArea bigB smallB p q 
                | [bigB, smallB, p, q] <- permutations sides, bigB >= smallB ]
    in floor $ maximum areas  

main :: IO ()
main = do
    input <- getLine
    let [a, b, c, d] = map read $ words input :: [Int]
        r = solve a b c d
    putStrLn $ show r