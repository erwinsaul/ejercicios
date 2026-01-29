import Data.Char (toUpper, toLower, isLetter)

solve :: Bool -> String -> String
solve _ [] = []
solve f (x:xs)
    | elem x ".!?" = x : solve True xs
    | isLetter x   = (if f then toUpper x else toLower x) : solve False xs
    | otherwise    = x : solve f xs

main :: IO()
main = do
    input <- getContents
    putStr $ solve True input 