#lang racket

(define port (open-input-file "res1.txt"))
(define all-result (drop (read port) 4))
(define all-result-line
  (for/list ([r all-result])
    (cons (car r) (caadr r))))
(with-output-to-file "res.txt"
  #:exists 'replace
  (lambda ()
    (let loop ([line 0]
               [firstline? #t]
               [lst all-result-line])
      (match lst
        ['() (void)]
        [(cons fst rem)
         #:when (= (cdr fst) line)
         (when (not firstline?)
           (display " "))
         (display (car fst))
         (loop line (if firstline? #t #f) rem)]
        [(cons fst rem)
         (newline)
         (display (car fst))
         (loop (add1 line) #f rem)]))
    (newline)))
