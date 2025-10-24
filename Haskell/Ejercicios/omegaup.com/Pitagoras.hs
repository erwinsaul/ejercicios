-- Memory Limit Exced
import Text.Printf (printf)
main :: IO()
main = do    
    input <- getLine
    input' <- getLine
    let a = read input :: Double
    let b = read input' :: Double
    let c = sqrt (a*a+b*b)
    printf "%.3f" c