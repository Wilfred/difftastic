# the "GNU Emacs Lisp Reference Manual" has very useful info
# in the code below section names will be mentioned, like:
# see "Special Read Syntax"

# bl - begin line
# bc - begin column
# el - end line
# ec - end column
(defn make-attrs
  [& items]
  (zipcoll [:bl :bc :el :ec]
           items))

(defn atom-node
  [node-type peg-form]
  ~(cmt (capture (sequence (line) (column)
                           ,peg-form
                           (line) (column)))
        ,|[node-type (make-attrs ;(slice $& 0 -2)) (last $&)]))

(defn reader-macro-node
  [node-type sigil]
  ~(cmt (capture (sequence (line) (column)
                           ,sigil
                           (any :non-form)
                           :form
                           (line) (column)))
        ,|[node-type (make-attrs ;(slice $& 0 2) ;(slice $& -4 -2))
           ;(slice $& 2 -4)]))

(defn collection-node
  [node-type open-delim close-delim]
  ~(cmt
     (capture
       (sequence
         (line) (column)
         ,open-delim
         (any :input)
         (choice ,close-delim
                 (error
                   (replace (sequence (line) (column))
                            ,|(string/format
                                "line: %p column: %p missing %p for %p"
                                $0 $1 close-delim node-type))))
         (line) (column)))
     ,|[node-type (make-attrs ;(slice $& 0 2) ;(slice $& -4 -2))
        ;(slice $& 2 -4)]))

(def loc-grammar
  ~{:main (sequence (line) (column)
                    (some :input)
                    (line) (column))
    #
    :input (choice :non-form
                   :form)
    #
    :non-form (choice :whitespace
                      :comment)
    #
    :whitespace ,(atom-node :whitespace
                            '(choice (some (set " \f\t\v"))
                                     (choice "\r\n"
                                             "\r"
                                             "\n")))
    # :whitespace
    # (cmt (capture (sequence (line) (column)
    #                         (choice (some (set " \f\t\v"))
    #                                 (choice "\r\n"
    #                                         "\r"
    #                                         "\n"))
    #                         (line) (column)))
    #      ,|[:whitespace (make-attrs ;(slice $& 0 -2)) (last $&)])
    #
    :comment ,(atom-node :comment
                         '(sequence ";"
                                    (any (if-not (set "\r\n") 1))))
    #
    :form (choice # reader macros
                  :backquote
                  :function
                  :quote
                  :unquote-splice
                  :unquote
                  # collections
                  :list
                  :vector
                  :char-table
                  :sub-char-table
                  :hash-table
                  :record
                  :bytecode
                  :string-text-props
                  # atoms
                  # XXX: might need assertions at end of things before
                  #      symbols.  see the partial job in :integer-10 below
                  :float
                  :integer
                  :char
                  :string
                  :symbol)
    # see "Backquote"
    :backquote ,(reader-macro-node :backquote "`")
    # :backquote
    # (cmt (capture (sequence (line) (column)
    #                         "`"
    #                         (any :non-form)
    #                         :form
    #                         (line) (column)))
    #      ,|[:backquote (make-attrs ;(slice $& 0 2) ;(slice $& -4 -2))
    #         ;(slice $& 2 -4)])
    # see "Anonymous Functions"
    :function ,(reader-macro-node :function "#'")
    # see "Quoting"
    :quote ,(reader-macro-node :quote "'")
    # see "Backquote"
    :unquote-splice ,(reader-macro-node :unquote-splice ",@")
    # see "Backquote"
    :unquote ,(reader-macro-node :unquote ",")
    #
    # see "Cons Cell Type"
    :list ,(collection-node :list "(" ")")
    # :list
    # (cmt
    #  (capture
    #    (sequence
    #      (line) (column)
    #      "("
    #      (any :input)
    #      (choice ")"
    #              (error
    #                (replace (sequence (line) (column))
    #                         ,|(string/format
    #                             "line: %p column: %p missing %p for %p"
    #                             $0 $1 ")" :list))))
    #      (line) (column)))
    #  ,|[:list (make-attrs ;(slice $& 0 2) ;(slice $& -4 -2))
    #     ;(slice $& 2 -4)])
    # see "Vectors"
    :vector ,(collection-node :vector "[" "]")
    # see "Char-Table Type"
    :char-table ,(collection-node :char-table "#^[" "]")
    # see "Char-Table Type"
    :sub-char-table ,(collection-node :sub-char-table "#^^[" "]")
    # see "Byte-Code Objects"
    :bytecode ,(collection-node :bytecode "#[" "]")
    # see "Hash Tables"
    :hash-table ,(collection-node :hash-table "#s(hash-table" ")")
    # see "Records"
    :record ,(collection-node :record "#s(" ")")
    # see "Text Props and Strings"
    :string-text-props
    ,(collection-node :string-text-props "#(" ")")
    #
    # see "Float Basics"
    :float ,(atom-node :float
                       '(choice :float-dec
                                :float-exp
                                :float-both
                                :float-inf
                                :float-nan))
    #
    :float-dec (sequence (opt (choice "+" "-"))
                         :d*
                         "."
                         :d+)
    #
    :float-exp (sequence (opt (choice "+" "-"))
                         :d*
                         (choice "e" "E")
                         :d+)
    #
    :float-both (sequence (opt (choice "+" "-"))
                          :d*
                          "."
                          :d+
                          (choice "e" "E")
                          :d+)
    #
    :float-inf (sequence (opt "-")
                         "1.0"
                         (choice "e" "E")
                         "+INF")
    #
    :float-nan (sequence (opt "-")
                         "0.0"
                         (choice "e" "E")
                         "+NaN")
    # see "Integer Basics"
    :integer ,(atom-node :integer
                         '(choice :integer-10
                                  :integer-base))
    #
    :integer-10 (sequence (opt (choice "+" "-"))
                          :d+
                          (opt ".")
                          # XXX: hack?
                          (not (set "+-")))
    #
    :integer-base (sequence "#"
                            (choice "b"
                                    "o"
                                    "x"
                                    # XXX: found in xml.el, but docs...(?)
                                    "X"
                                    (sequence :d+ "r"))
                            # XXX: docs contradict this(?), but works...
                            (opt (choice "+" "-"))
                            (some (choice :a :d)))
    # see "Basic Char Syntax"
    :char ,(atom-node :char
                      '(sequence "?"
                                 (choice :char-octal
                                         :char-hex
                                         :char-uni-name
                                         #:char-uni-val
                                         :char-uni-val-low
                                         :char-uni-val-up
                                         :char-meta-octal
                                         :char-key
                                         :char-basic)))
    # see "General Escape Syntax"
    :char-octal (sequence "\\" (3 (range "07")))
    :char-hex (sequence "\\x" :h+)
    :char-uni-name (sequence "\\N{" (thru "}"))
    #:char-uni-val (sequence "\\N{U+" :h+ "}")
    :char-uni-val-low (sequence "\\u" (4 :h))
    :char-uni-val-up (sequence "\\U" (8 :h))
    # see "Meta-Char Syntax"
    :char-meta-octal (sequence "\\M-" :char-octal)
    # see "Ctl-Char Syntax"
    # see "Other Char Bits"
    :char-key
    (sequence (some (sequence "\\"
                              (choice (sequence (set "ACHMSs") "-")
                                      "^")))
              # XXX: not strictly correct?
              (choice :char-octal
                      :char-hex
                      :char-uni-name
                      #:char-uni-val
                      :char-uni-val-low
                      :char-uni-val-up
                      :char-meta-octal
                      :char-basic))
    # XXX: not strictly correct, but perhaps it's ok?
    :char-basic (choice (sequence "\\" 1)
                        1)
    # see "Syntax for Strings"
    # XXX: escaped newline and escaped space in "Syntax for Strings"?
    :string
    ,(atom-node :string
                '(sequence "\""
                           (any (choice :escape
                                        (if-not "\"" 1)))
                           "\""))
    # XXX: is this complete?
    :escape (sequence "\\" (set "0abdefnrstvx\"\\"))
    # see "Symbol Type"
    # XXX: review about whitespace in symbol names
    :symbol
    ,(atom-node :symbol
                '(choice (sequence :sym-char-head
                                   (any :sym-char-rest))
                         # XXX: some below not really symbols
                         # see "Circular Objects"
                         (sequence "#" :d+ "=")
                         (sequence "#" :d+ "#")
                         # see "Special Read Syntax"
                         #(sequence "#" :d+)
                         # see "Documentation Strings and Compilation"
                         "#$"
                         # see "Symbol Type"
                         "##"))
    #
    :sym-char-head (choice :sym-char-esc
                           # don't start with
                           #(if-not (set " \"#'(),.;?[]`") 1)) # allow .
                           (if-not (set " \"#'(),;?[]`") 1))
    #
    :sym-char-rest (choice :sym-char-esc
                           # . and ? are allowed "inside"
                           (if-not (set " \"#'(),;[]`\n") 1))
    # need to be escaped
    :sym-char-esc (sequence "\\" (set " \"#'(),;?[]`"))
    })

(comment

  (get (peg/match loc-grammar " ") 2)
  # =>
  '(:whitespace @{:bc 1 :bl 1 :ec 2 :el 1} " ")

  (get (peg/match loc-grammar "8.3") 2)
  # =>
  '(:float @{:bc 1 :bl 1 :ec 4 :el 1} "8.3")

  (get (peg/match loc-grammar "printf") 2)
  # =>
  '(:symbol @{:bc 1 :bl 1 :ec 7 :el 1} "printf")

  (get (peg/match loc-grammar ":smile") 2)
  # =>
  '(:symbol @{:bc 1 :bl 1 :ec 7 :el 1} ":smile")

  (get (peg/match loc-grammar "[8]") 2)
  # =>
  '(:vector @{:bc 1 :bl 1
              :ec 4 :el 1}
            (:integer @{:bc 2 :bl 1
                        :ec 3 :el 1} "8"))

  (get (peg/match loc-grammar "`x") 2)
  # =>
  '(:backquote @{:bc 1 :bl 1
                 :ec 3 :el 1}
               (:symbol @{:bc 2 :bl 1
                          :ec 3 :el 1} "x"))

  )

