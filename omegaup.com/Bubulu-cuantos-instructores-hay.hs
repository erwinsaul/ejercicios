main ::IO()
main = do
        input <- getLine
        let v = words input
        let tam = length v
        putStrLn(show tam)

