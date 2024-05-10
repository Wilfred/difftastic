module Main where

import Prelude

import Effect (Effect)
import Effect.Console (log)


fib :: Int -> Int
fib 0 = 1
fib 1 = 1
fib n = fib (n - 2) + fib (n - 1)


main :: Effect Unit
main = do
  log (show (fib 10))
