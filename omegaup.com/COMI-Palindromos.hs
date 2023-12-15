palindrome :: String -> Int -> Int -> Bool
palindrome s ini fin | ini >= fin = True
                     | s !! ini /= s !! fin = False
                     | otherwise = palindrome s (ini + 1) (fin - 1)

main = do  
  linea <- getLine
  if palindrome linea 0 (length linea - 1)
    then putStrLn "Si "
    else putStrLn "No"