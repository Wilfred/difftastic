proc hello(a: string): string =
  echo "hello ", a

when isMainModule:
  hello("world")
