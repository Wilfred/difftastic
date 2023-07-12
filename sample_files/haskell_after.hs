import System.Process

foo x y = x + 1 + W.peek y

bar _ = 'c'

-- | Goodbye world
isOne 1 = True
isOne _ = False
