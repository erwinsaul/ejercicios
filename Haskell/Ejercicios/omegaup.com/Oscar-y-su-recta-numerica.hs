
main :: IO()
main = do
    a <- readLn :: IO Int
    let r = solve a
    putStrLn r

solve :: Int -> String
solve n | n == 0 = "Zero"
        | n < 0 = "Left"
        | otherwise = "Right"