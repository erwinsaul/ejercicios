solve :: Int -> Int -> [String]
solve h w
    | h == 1 = [lineaHorizontal w]
    | w == 1 = replicate h "*"
    | h == 2 = [lineaHorizontal w, lineaHorizontal w]
    | w == 2 = replicate h "* *"
    | otherwise = [lineaHorizontal w] ++ replicate (h-2) (lineaMedio w) ++ [lineaHorizontal w]

lineaHorizontal :: Int -> String
lineaHorizontal 1 = "*"
lineaHorizontal w = unwords (replicate w "*")

lineaMedio :: Int -> String
lineaMedio w = "*" ++ replicate (2*w - 3) ' ' ++ "*"

main :: IO()
main = do
    input <- getLine
    let h = read input :: Int
    input <- getLine
    let w = read input :: Int
    let resp = solve h w
    mapM_ putStrLn resp