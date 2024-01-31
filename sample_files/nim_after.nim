proc hello(a: string, b: int): string =
  for i in 0..3:
    echo "hello ", a, b

hello "world", 69
