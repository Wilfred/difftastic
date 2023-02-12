#lang racket/base

(define (append lst1 lst2)
  (cond [(null? lst1) lst2]
        [else (cons (car lst1)
                    (append (cdr lst1) lst2))]))

(append '(a b c) '(d e))

"Hello, world!"
#(1 2 3)
#\"

#<<END
abc
END
