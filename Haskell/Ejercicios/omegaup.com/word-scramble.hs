solve:: [String] -> [String]
solve [] = []
solve (x:xs) = reverse x : solve xs

main :: IO()
main = do
    input <- getContents
    let result = map (unwords . solve . words) (lines input)
    mapM_ putStrLn result