main :: IO()
main = do
    input <- getLine
    let [nombre, puntos] = words input
    input <- getLine
    let [nombre2, puntos2] = words input
    let p = read puntos :: Int
    let p2 = read puntos2 :: Int
    let resultado = if p > p2 then nombre else nombre2
    putStrLn resultado

