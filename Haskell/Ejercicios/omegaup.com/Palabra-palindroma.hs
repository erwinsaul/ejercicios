palindrome :: String -> Bool
palindrome "" = True
palindrome [x] = True
palindrome xs | head xs == last xs = palindrome (tail (init xs))
              | otherwise = False

main :: IO()
main = do
    input <- getLine
    let r = if palindrome input then "SI" else "NO"
    putStrLn r