import Data.List (zip)

main :: IO ()
main = do    
    input <- getContents
    let ls = map read (tail (lines input)) :: [Int] 
        res = [pos | (pos, x) <- zip [1..] ls, x `mod` 3 == 0]
        t = length res
    if t == 0 then
        putStrLn "no hay triples"
    else do
        print t
        putStrLn $ unwords (map show res)
