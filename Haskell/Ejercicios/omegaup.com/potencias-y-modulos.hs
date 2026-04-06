solve :: Int -> Int -> Int -> Int
solve x 0 z = mod 1 z
solve x y z
  | even y = mod (medio * medio) z
  | otherwise = mod (mod (x*medio*medio) z) z
  where
    medio = solve x (div y 2) z
main :: IO()
main = do
    input <- getLine
    let [x,y,z] = map read $ words input :: [Int]
    let r = solve x y z
    putStrLn $ show r