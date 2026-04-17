-- MLE
import Data.Set (Set)
import qualified Data.Set as Set

parseLine :: String -> Set Int
parseLine line =
    let nums = map read (words line) :: [Int]
        lamps = tail nums
    in Set.fromList lamps

solve :: Int -> [Set Int] -> Int
solve n conjuntos =
    let encendidas = Set.unions conjuntos
    in n - Set.size encendidas

main :: IO()
main = do
    input <- getLine
    let [n, m] = map read (words input) ::[Int]
    lineas <- sequence (replicate m getLine)
    let conjuntos = map parseLine lineas
    let r = solve n conjuntos
    putStrLn $ show r
