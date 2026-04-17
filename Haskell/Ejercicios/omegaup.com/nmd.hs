
countGreedy :: String -> Int
countGreedy "" = 0
countGreedy s  =
    let n       = length s
        validos = [ read (take k s) :: Int 
                  | k <- [4, 3, 2, 1]
                  , k <= n 
                  , read (take k s) < 2000 ]
        best    = head validos
        len     = length (show best)
    in 1 + countGreedy (drop len s)

countGreedyRight :: String -> Int
countGreedyRight "" = 0
countGreedyRight s  =
    let n       = length s
        validos = [ read (drop (n - k) s) :: Int
                  | k <- [4, 3, 2, 1]
                  , k <= n
                  , read (drop (n - k) s) < 2000 ]
        best    = head validos
        len     = length (show best)
    in 1 + countGreedyRight (take (n - len) s)

solve :: String -> (Int, Int)
solve s = (countGreedy s, countGreedyRight s)

main :: IO()
main = do
    input <- getLine
    let s = input
    let (a, b) = solve s
    putStrLn $ show a ++ " " ++ show b