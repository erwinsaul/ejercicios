import Data.List (minimumBy)
import Data.Ord  (comparing)

main :: IO ()
main = do
    input <- getContents
    let [h, l, r, p, a, b] = map read (words input) :: [Int]

        candidatos = [ (x, y)
                     | x <- [0..p]     
                     , y <- [0..300]   
                     , let alt = h + x*a - y*b
                     , l <= alt && alt <= r
                     ]

        mejor = minimumBy (comparing (\(x, y) -> (x+y, y))) candidatos

    if null candidatos
        then putStrLn "-1"
        else let (x, y) = mejor
             in putStrLn $ show x ++ " " ++ show y