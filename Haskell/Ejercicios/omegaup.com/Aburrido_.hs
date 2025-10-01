main :: IO()
main = do
    r <- readLn :: IO Int
    let resultado = r*r - 1 + 3
    putStrLn (show resultado)
