#lang racket

(define (append lst1 lst2)
  (if (null? lst1)
      lst2
      (cons (car lst1)
            (append (cdr lst1) lst2))))

(append '(a b c) '(d e f))

"Hello, world!\n"
#(0 1 2 3 4)
#\space

#<<E
abc
E
