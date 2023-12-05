import Data.List (nub)
import Data.List (sort)
import Data.List (intercalate)
main :: IO()
main = do
        input <- getLine
        let xs = map read (words input):: [Int]
        let x = nub xs
            r = reverse (sort x)
            t = map show r
            l = "[" ++ intercalate ", " (map (\s -> "'" ++ s ++ "'") t) ++ "]"
        putStrLn l