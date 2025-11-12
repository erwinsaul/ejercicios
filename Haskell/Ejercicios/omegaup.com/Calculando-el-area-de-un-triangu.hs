import Text.Printf
main :: IO()
main = do
    input <- getLine
    let [x1,y1,x2,y2,x3,y3] = map read $ words input :: [Double]
        area = 0.5 * abs ( x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2) )
    printf "%.6f" area
