main :: IO()
main = do
    input <- getContents
    let [a, b] = map read (words input) :: [Int]
    let r = if a > b then
                "mayor"
            else if a < b then
                "menor"
            else
                "igual"
    putStrLn r