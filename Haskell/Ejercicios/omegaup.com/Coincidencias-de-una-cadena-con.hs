import Data.Char

solve :: String -> String -> Int
solve _ [] = 0
solve (x:xs) (y:ys) | toLower x == toLower y = 1 + solve xs ys
                    | otherwise = solve xs ys

main :: IO ()
main = do
  input <- getLine
  let s = reverse input
  let n = solve input s
  putStrLn (show n)
