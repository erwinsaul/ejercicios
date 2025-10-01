main :: IO ()
main = do
    input <- getLine
    let n = read input :: Int
    input <- getLine
    let a = read input :: Int
    input <- getLine
    let b = read input :: Int
    input <- getLine
    let c = read input :: Int

    putStrLn $ solve n a 
    putStrLn $ solve n b 
    putStrLn $ solve n c

solve :: Int -> Int -> String
solve n a | n == a = "Te gano en la siguiente"
          | n > a = "Soy Mejor"
          | otherwise = "Shh"