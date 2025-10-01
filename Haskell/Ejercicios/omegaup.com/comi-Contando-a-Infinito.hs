main = do
  a <- readLn :: IO Int
  mapM_ print [1..a]