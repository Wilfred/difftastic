module Main where

import Prelude

import Effect (Effect)
import Effect.Console (log)


fib :: Int -> Int
fib = go 1 1
  where
    go a _ 0 = a
    go a b n = go b (a + b) (n - 1)


main :: Effect Unit
main = do
  log (show (fib 10))
