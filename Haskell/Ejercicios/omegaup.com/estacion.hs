
import Data.List (minimumBy)
import Data.Ord (comparing)

solve :: Int -> String
solve n
    | n<540 || n>1520 = "error"
    | otherwise =
        let estaciones = [580, 980, 1190, 1250, 1420]
            distancias = [ ( abs(n-est), est) | est <- estaciones]
            (dist, estacion) = minimumBy comparar distancias
        in if estacion > n
            then "adelante " ++ show dist
            else "atras " ++ show dist
    
    where
        comparar (a,b) (c,d) = 
            case compare a c of
                EQ -> compare d b
                x -> x


main :: IO()
main = do
    input <- getLine
    let n = read input :: Int
    let r = solve n
    putStrLn r