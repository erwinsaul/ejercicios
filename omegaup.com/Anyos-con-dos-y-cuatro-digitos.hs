replaceChar :: Char -> Char -> String -> String
replaceChar from to = map (\c -> if c == from then to else c)

processLine :: String -> IO ()
processLine input = do
    let s = replaceChar '/' ' ' input
    let v = words s
    let d = read (v!!0) :: Int
    let m = read (v!!1) :: Int
    let y = read (v!!2) :: Int
    if y < 74 then
        putStrLn $ show d ++ "/" ++ show m ++ "/20" ++ show y
    else
        putStrLn $ show d ++ "/" ++ show m ++ "/19" ++ show y

main :: IO ()
main = do
    contents <- getContents
    mapM_ processLine (lines contents)
