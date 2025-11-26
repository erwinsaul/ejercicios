main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    -- Los minutos son de 50 segundos, las horas de 70 minutos y los días de 12 horas.
    let d = div n (50*70*12) 
    let r = mod n (50*70*12)
    let h = div r (50*70)
    let m = mod r (50*70)
    let min = div m 50
    let s = mod m 50
    putStrLn $ show d ++" "++ show h++" "++ show min++" "++ show s