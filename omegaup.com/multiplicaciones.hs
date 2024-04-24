--Error de ejecucion
main :: IO ()
main = do
    input <- getLine
    let a = read input :: Int
    input <- getLine
    let b = read input :: Int    
    let r = a*b
    print r