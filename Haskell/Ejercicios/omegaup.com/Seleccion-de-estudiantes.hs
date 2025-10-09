import System.IO
import Data.Char (digitToInt, isDigit)

getLastDigit :: IO Int
getLastDigit = do
    let loop lastDigit = do
            eof <- isEOF
            if eof
                then return lastDigit
            else do
                c <- getChar
                if c == '\n'
                    then return lastDigit
                else if isDigit c
                        then loop (digitToInt c)
                        else loop lastDigit
    loop 0

main :: IO()
main = do
    d1 <- getLastDigit
    d2 <- getLastDigit
    print $ mod (d1 * d2) 10