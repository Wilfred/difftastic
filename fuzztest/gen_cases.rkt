#lang racket

(require racket/extflonum)

;; all characters that can appear in a valid number/exflonum
;; remove some insignificant parts to improve performance
;; (define alphabet-char "abdefilnost")
(define alphabet-char "abdefilnostx")
(define special-char "#./@+-")
;; (define numeric-char "0123456789")
(define numeric-char "0179")
(define all-char
  (string-append alphabet-char
                 special-char
                 numeric-char))

(define cnt 0)
(define max-len 5)

(define case-port (open-output-file "case.txt" #:exists 'replace))
(define expect-port (open-output-file "expect.txt" #:exists 'replace))

(define (gen i case)
  (with-handlers ([exn:fail? (lambda _ (void))])
    (when (> i 0)
      (define case-str (list->string case))
      ;; ".0@.0" should be a number according the document,
      ;; but it's actually a symbol.
      ;; It's a bug of Racket reader, and will fix in new Racket release.
      ;; we skip these cases.
      (when (not (string-contains? case-str "@."))
        (with-handlers ([exn:fail? void])
          (with-input-from-string case-str
            (lambda ()
              (define fst (read))
              (define snd (read))
              (when (eof-object? snd)
                (cond [(symbol? fst)
                       (set! cnt (add1 cnt))
                       (displayln case-str case-port)
                       (displayln "symbol" expect-port)]
                      [(number? fst)
                       (set! cnt (add1 cnt))
                       (displayln case-str case-port)
                       (displayln "number" expect-port)]
                      ;; it's here for possible future change that
                      ;; split extflonum from number
                      [(extflonum? fst)
                       (set! cnt (add1 cnt))
                       (displayln case-str case-port)
                       (displayln "number" expect-port)]))))))))
  (when (< i max-len)
    (for ([c all-char])
      (gen (add1 i) (cons c case)))))

(time (gen 0 '()))
(displayln (format "~a cases generated" cnt))
