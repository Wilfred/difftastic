module A where

data A a = A a

class C a where

a :: C a => A a -> A a
a (A a) =
  A a
