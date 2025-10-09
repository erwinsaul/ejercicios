import qualified Data.IntSet as IntSet
import qualified Data.ByteString.Char8 as B

main :: IO ()
main = do
    _ <- B.getLine
    nums <- fmap (map readInt . B.words) B.getLine
    print $ IntSet.size $ IntSet.fromList nums
  where
    readInt bs = case B.readInt bs of
        Just (n, _) -> n
        Nothing -> 0