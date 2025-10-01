solve :: Int -> IO ()
solve saldo = do
    input <- getLine
    if input == "S"
        then return ()
    else do
        let tokens = words input 
        if null tokens
            then solve saldo
        else do
            let opcion = head (head tokens) 
            case opcion of
                'C' -> do
                    putStrLn $ "$" ++ show saldo
                    solve saldo
                'D' -> do
                    if length tokens >= 2
                        then do
                            let valor = read (tokens !! 1) :: Int  -- Segundo token es el valor
                            solve (saldo + valor)
                        else solve saldo
                'R' -> do
                    if length tokens >= 2
                        then do
                            let valor = read (tokens !! 1) :: Int  -- Segundo token es el valor
                            solve (saldo - valor)
                        else solve saldo
                _ -> solve saldo 

main :: IO ()
main = do
    solve 1000