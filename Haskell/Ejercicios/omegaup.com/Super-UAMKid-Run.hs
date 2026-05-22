solve :: String -> Int
solve "" = 0
solve s = go (walk s)
  where
    go :: String -> Int
    go ['#'] = 0
    go s'    = 1 + solve (jump s')

    walk :: String -> String
    walk ('#':'#':xs) = walk ('#':xs)
    walk xs = xs

    jump :: String -> String
    jump xs = drop maxK xs
      where
        maxK = last [ k | (k, c) <- zip[0..6] xs, c == '#']

main :: IO()
main = do
    input <- getLine
    let r = solve input
    putStrLn $ show r