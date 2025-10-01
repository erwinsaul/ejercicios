import Text.Printf (printf)

main :: IO ()
main = do
    n <- readLn :: IO Int
    datos <- sequence [readLn :: IO Double | _ <- [1..n]]
    let logsNaturales = map log datos
    let promedio = sum logsNaturales / fromIntegral n
    let diferencias = map (\x -> (x - promedio) ** 2) logsNaturales
    let varianza = sum diferencias / fromIntegral (n - 1)
    let desviacionEstandar = sqrt varianza
    let vs = exp (promedio - 2 * desviacionEstandar)
    let s = exp (promedio - desviacionEstandar)
    let m = exp promedio
    let l = exp (promedio + desviacionEstandar)
    let vl = exp (promedio + 2 * desviacionEstandar)
    mapM_ (printf "%.2f\n") [vs, s, m, l, vl]