(require 'ert)
(require 'edebug)
(require 'helpful)
(require 'python)

(when noninteractive
  (unless find-function-C-source-directory
    (let* ((emacs-src-path (f-join default-directory "emacs-25.3" "src")))
      (if (f-exists-p emacs-src-path)
          (setq find-function-C-source-directory emacs-src-path)
        (message "No Emacs source code found at %S, some tests will be skipped. Run ./download_emacs_src.sh"
                 emacs-src-path))))

  (setq jka-compr-verbose nil))

(defvar helpful-test-var nil)
(define-obsolete-variable-alias 'helpful-test-var-obsolete
  'helpful-test-var "23.1")

(defun helpful-test-fun-obsolete ()
  (declare (obsolete helpful "1.2.3"))
  nil)

(defun test-foo ()
  "Docstring here."
  nil)

(defun test-foo-advised ()
  "Docstring here too."
  nil)

(autoload 'some-unused-function "somelib.el")

(defadvice test-foo-advised (before test-advice1 activate)
  "Placeholder advice 1."
  nil)

(defadvice test-foo-advised (after test-advice2 activate)
  "Placeholder advice 2."
  nil)

(ert-deftest helpful--docstring ()
  "Basic docstring fetching."
  (should
   (equal
    (helpful--docstring #'test-foo t)
    "Docstring here.")))

(ert-deftest helpful--docstring-symbol ()
  "Correctly handle quotes around symbols."
  ;; We should replace quoted symbols with links, so the punctuation
  ;; should not be in the output.
  (let* ((formatted-docstring (helpful--format-docstring "`message'")))
    (should
     (equal formatted-docstring "message")))
  ;; We should handle stray backquotes.
  (let* ((formatted-docstring (helpful--format-docstring "`foo `message'")))
    (should
     (equal formatted-docstring "`foo message")))
  ;; Handle a missing closing '.
  (let* ((formatted-docstring (helpful--format-docstring "`foo")))
    (should
     (equal formatted-docstring "`foo"))))

(ert-deftest helpful--docstring-unescape ()
  "Discard \\=\\= in docstrings."
  (let* ((docstring (helpful--docstring #'apply t))
         (formatted-docstring (helpful--format-docstring docstring)))
    (should
     (not (s-contains-p "\\=" formatted-docstring)))))

(ert-deftest helpful--docstring-strings ()
  "Double-quoted strings should be treated literally."
  ;; Ensure backslashes are shown escaped, so the output is a valid string literal.
  (let* ((formatted-docstring
          (helpful--format-docstring
           "hello \"x\\y\" world")))
    ;; This test will fail in a local Emacs instance that has modified
    ;; minibuffer keybindings.
    (should
     (string-equal formatted-docstring "hello \"x\\\\y\" world")))
  ;; Don't crash on unbalanced doublequotes.
  (helpful--format-docstring "hello \" world")
  ;; Command sequences \\[foo] should be ignored inside doublequotes.
  (let* ((formatted-docstring
          (helpful--format-docstring
           "hello \"\\[foo]\" world")))
    ;; This test will fail in a local Emacs instance that has modified
    ;; minibuffer keybindings.
    (should
     (string-equal formatted-docstring
                   "hello \"\\\\[foo]\" world"))))

(ert-deftest helpful--docstring-keymap ()
  "Handle keymap references in docstrings."
  (let* ((formatted-docstring
          (helpful--format-docstring
           "\\<minibuffer-local-map>\\[next-history-element]")))
    ;; This test will fail in a local Emacs instance that has modified
    ;; minibuffer keybindings.
    (should
     (string-equal formatted-docstring "M-n"))))

(ert-deftest helpful--docstring-keymap-newline ()
  "If a keymap reference is on its own line, remove the entire line."
  (should
   (string-equal
    (helpful--format-docstring "Foo.
\\<minibuffer-local-map>
bar")
    "Foo.

bar")))

(ert-deftest helpful--docstring-advice ()
  "Get the docstring on advised functions."
  (should
   (equal
    (helpful--docstring #'test-foo-advised t)
    "Docstring here too.")))

(defun test-foo-no-docstring ()
  nil)

(ert-deftest helpful--no-docstring ()
  "We should not crash on a function without a docstring."
  (should (null (helpful--docstring #'test-foo-no-docstring t))))

(ert-deftest helpful--interactively-defined-fn ()
  "We should not crash on a function without source code."
  (eval '(defun test-foo-defined-interactively () 42))
  (with-temp-buffer
    (helpful-function #'test-foo-defined-interactively)
    (should (equal (buffer-name) "*helpful function: test-foo-defined-interactively*"))))

(ert-deftest helpful--edebug-fn ()
  "We should not crash on a function with edebug enabled."
  (let ((edebug-all-forms t)
        (edebug-all-defs t))
    (with-temp-buffer
      (insert "(defun test-foo-edebug () 44)")
      (goto-char (point-min))
      (cl-letf (((symbol-function #'message)
                 (lambda (_format-string &rest _args))))
        (eval (eval-sexp-add-defvars (edebug-read-top-level-form)) t))))
  (helpful-function #'test-foo-edebug))

(defun test-foo-return-arg (s)
  "blah blah."
  s)

(ert-deftest helpful--edebug-p ()
  "Ensure that we don't crash on a function whose body ends with
symbol (not a form)."
  (should
   (not (helpful--edebug-p #'test-foo-return-arg))))

(defun test-foo-usage-docstring ()
  "\n\n(fn &rest ARGS)"
  nil)

(ert-deftest helpful--usage-docstring ()
  "If a function docstring only has usage, do not return it."
  (should (null (helpful--docstring #'test-foo-usage-docstring t))))

(defun test-foo-no-properties ()
  nil)

(ert-deftest helpful--primitive-p ()
  ;; Defined in C.
  (should (helpful--primitive-p 'message t))
  ;; Defined in C, but an alias.
  (should (helpful--primitive-p 'not t))
  ;; Defined in elisp.
  (should (not (helpful--primitive-p 'when t))))

(ert-deftest helpful--primitive-p--advised ()
  "Ensure we handly advised primitive functions correctly."
  ;; `rename-buffer' is primitive, but it's advised by uniquify.
  (should (helpful--primitive-p 'rename-buffer t)))

(ert-deftest helpful--without-advice ()
  "Ensure we remove advice to get the underlying function."
  ;; Removing the advice on an unadvised function should give us the
  ;; same function.
  (should
   (eq (helpful--without-advice #'test-foo)
       (indirect-function #'test-foo)))
  ;; Removing the advice should give us an unadvised function.
  (should
   (not (helpful--advised-p
         (helpful--without-advice #'test-foo-advised)))))

(ert-deftest helpful-callable ()
  ;; Functions. Also a regression test for #170.
  (helpful-callable 'face-attribute)
  ;; We should not crash when looking at macros.
  (helpful-callable 'when)
  ;; Special forms should work too.
  (helpful-callable 'if)
  ;; Named keyboard macros (strings and vectors).
  (fset 'aaa "aaa")
  (helpful-callable 'aaa)
  (fset 'backspace-return [backspace return])
  (helpful-callable 'backspace-return))

(ert-deftest helpful-callable--with-C-source ()
  "Smoke test for special forms when we have the Emacs C source loaded."
  (skip-unless find-function-C-source-directory)
  (helpful-callable 'if))

(ert-deftest helpful--no-symbol-properties ()
  "Helpful should handle functions without any symbol properties."
  ;; Interactively evaluating this file will set edebug properties on
  ;; test-foo-no-properties, so remove all properties.
  (setplist #'test-foo-no-properties nil)

  ;; This shouldn't throw any errors.
  (helpful-function #'test-foo-no-properties))

(ert-deftest helpful--split-first-line ()
  ;; Don't modify a single line string.
  (should
   (equal (helpful--split-first-line "foo") "foo"))
  ;; Don't modify a two-line string if we don't end with .
  (should
   (equal (helpful--split-first-line "foo\nbar") "foo\nbar"))
  ;; If the second line is already empty, do nothing.
  (should
   (equal (helpful--split-first-line "foo.\n\nbar") "foo.\n\nbar"))
  ;; But if we have a single sentence and no empty line, insert one.
  (should
   (equal (helpful--split-first-line "foo.\nbar") "foo.\n\nbar")))

(ert-deftest helpful--format-reference ()
  (should
   (equal
    (helpful--format-reference '(def foo) 10 1 123 "/foo/bar.el")
    "(def foo ...) 1 reference"))
  (should
   (equal
    (helpful--format-reference '(advice-add 'bar) 10 1 123 "/foo/bar.el")
    "(advice-add 'bar ...) 1 reference")))

(ert-deftest helpful--format-docstring ()
  "Ensure we handle `foo' formatting correctly."
  ;; If it's bound, we should link it.
  (let* ((formatted (helpful--format-docstring "foo `message'."))
         (m-position (s-index-of "m" formatted)))
    (should (get-text-property m-position 'button formatted)))
  ;; If it's not bound, we should not.
  (let* ((formatted (helpful--format-docstring "foo `messagexxx'."))
         (m-position (s-index-of "m" formatted)))
    (should (not (get-text-property m-position 'button formatted)))
    ;; But we should always remove the backticks.
    (should (equal formatted "foo messagexxx.")))
  ;; Don't require the text between the quotes to be a valid symbol, e.g.
  ;; support `C-M-\' (found in `vhdl-mode').
  (let* ((formatted (helpful--format-docstring "foo `C-M-\\'")))
    (should (equal formatted "foo C-M-\\"))))

(ert-deftest helpful--format-docstring-escapes ()
  "Ensure we handle escaped quotes correctly."
  (let* ((formatted (helpful--format-docstring "foo \\=`message\\='."))
         (m-position (s-index-of "m" formatted)))
    (should (equal formatted "foo `message'."))
    (should (not (get-text-property m-position 'button formatted)))))

(ert-deftest helpful--format-docstring-command-keys ()
  "Ensure we propertize references to command key sequences."
  ;; This test will fail in your current Emacs instance if you've
  ;; overridden the `set-mark-command' keybinding.
  (-let [formatted (helpful--format-docstring "\\[set-mark-command]")]
    (should
     (string-equal formatted "C-SPC"))
    (should
     (get-text-property 0 'button formatted)))
  ;; If we have quotes around a key sequence, we should not propertize
  ;; it as the button styling will no longer be visible.
  (-let [formatted (helpful--format-docstring "`\\[set-mark-command]'")]
    (should
     (string-equal formatted "C-SPC"))
    (should
     (eq
      (get-text-property 0 'face formatted)
      'button))))

(ert-deftest helpful--format-docstring-mode-maps ()
  "Ensure we propertize references to keymaps."
  (-let [formatted (helpful--format-docstring "\\{python-mode-map}")]
    (should
     (s-contains-p "run-python" formatted)))
  ;; Handle non-existent mode maps gracefully.
  (-let [formatted (helpful--format-docstring "\\{no-such-mode-map}")]
    (should
     (s-contains-p "not currently defined" formatted))))

(ert-deftest helpful--format-docstring--info ()
  "Ensure we propertize references to the info manual."
  ;; This is the typical format.
  (let* ((formatted (helpful--format-docstring "Info node `(elisp)foo'"))
         (paren-position (s-index-of "(" formatted)))
    (should
     (string-equal formatted "Info node (elisp)foo"))
    (should
     (get-text-property paren-position 'button formatted)))
  ;; Some functions, such as `signal', use 'anchor'.
  (let* ((formatted (helpful--format-docstring "Info anchor `(elisp)foo'"))
         (paren-position (s-index-of "(" formatted)))
    (should
     (string-equal formatted "Info anchor (elisp)foo"))
    (should
     (get-text-property paren-position 'button formatted)))
  ;; Ensure we handle wrapped lines too, e.g. in `org-odt-pixels-per-inch'.
  (let* ((formatted (helpful--format-docstring "Info node `(elisp)foo \nbar'"))
         (paren-position (s-index-of "(" formatted)))
    (should
     (string-equal formatted "Info node (elisp)foo \nbar"))
    (should
     (get-text-property paren-position 'button formatted)))
  ;; Some docstrings use "info" (lowercase).
  (let* ((formatted (helpful--format-docstring "info node `(elisp)foo'"))
         (paren-position (s-index-of "(" formatted)))
    (should
     (string-equal formatted "info node (elisp)foo"))
    (should
     (get-text-property paren-position 'button formatted)))
  ;; Some docstrings use angular quotation marks.
  (let* ((formatted (helpful--format-docstring "Info node ‘(elisp)foo’"))
         (paren-position (s-index-of "(" formatted)))
    (should
     (string-equal formatted "Info node (elisp)foo"))
    (should
     (get-text-property paren-position 'button formatted)))
  ;; If there's no manual information, assume it is part of the Emacs manual.
  (let* ((formatted (helpful--format-docstring "Info node ‘foo’"))
         (paren-position (s-index-of "(" formatted)))
    (should
     (string-equal formatted "Info node (emacs)foo"))
    (should
     (get-text-property paren-position 'button formatted))))

(ert-deftest helpful--format-docstring--url ()
  "Ensure we propertize URLs with backticks."
  (let* ((formatted (helpful--format-docstring "URL `http://example.com'"))
         (url-position (s-index-of "h" formatted)))
    (should
     (string-equal formatted "URL http://example.com"))
    (should
     (get-text-property url-position 'button formatted))))

(ert-deftest helpful--format-docstring--bare-url ()
  "Ensure we propertize URLs without backticks."
  (let* ((formatted (helpful--format-docstring "http://example.com\nbar"))
         (url-position (s-index-of "h" formatted)))
    (should
     (string-equal formatted "http://example.com\nbar"))
    (should
     (get-text-property url-position 'button formatted))
    (should
     (equal
      (get-text-property url-position 'url formatted)
      "http://example.com")))
  ;; Don't consider trailing punctuation to be part of the URL.
  (let* ((formatted (helpful--format-docstring "See http://example.com."))
         (url-position (s-index-of "h" formatted)))
    (should
     (string-equal formatted "See http://example.com."))
    (should
     (equal
      (get-text-property url-position 'url formatted)
      "http://example.com")))
  ;; Format markdown-style links.
  (let* ((formatted (helpful--format-docstring "See <http://example.com>."))
         (url-position (s-index-of "h" formatted)))
    (should
     (equal
      (get-text-property url-position 'url formatted)
      "http://example.com"))))

(ert-deftest helpful--definition-c-vars ()
  "Handle definitions of variables in C source code."
  (skip-unless find-function-C-source-directory)
  (helpful--definition 'default-directory nil))

(ert-deftest helpful--definition-special-form ()
  "Ensure we find the position of special forms."
  (skip-unless find-function-C-source-directory)
  (-let [(buf pos _)
         (helpful--definition 'if t)]
    (should buf)
    (should pos)))

(setq helpful-var-without-defvar 'foo)

(ert-deftest helpful--definition-no-defvar ()
  "Ensure we don't crash on calling `helpful--definition' on
variables defined without `defvar'."
  (helpful--definition 'helpful-var-without-defvar nil))

(ert-deftest helpful--definition-buffer-opened ()
  "Ensure we mark buffers as opened for variables."
  (require 'python)
  ;; This test will fail if you already have python.el.gz open in your
  ;; Emacs instance.
  (skip-unless (null (get-buffer "python.el.gz")))

  (-let [(buf pos opened) (helpful--definition 'python-indent-offset nil)]
    (should (bufferp buf))
    (should opened)))

(ert-deftest helpful--definition-edebug-fn ()
  "Ensure we use the position information set by edebug, if present."
  ;; Test with both edebug enabled and disabled. The edebug property
  ;; on the symbol varies based on this.
  (dolist (edebug-on (list nil t))
    (let ((edebug-all-forms edebug-on)
          (edebug-all-defs edebug-on))
      (with-temp-buffer
        (insert "(defun test-foo-edebug-defn () 44)")
        (goto-char (point-min))
	(cl-letf (((symbol-function #'message)
		   (lambda (_format-string &rest _args))))
          (eval (eval-sexp-add-defvars (edebug-read-top-level-form)) t))

        (-let [(buf pos opened) (helpful--definition 'test-foo-edebug-defn t)]
          (should buf))))))

(ert-deftest helpful--definition-defstruct ()
  "Ensure we find the position of struct functions."
  (-let [(buf pos _)
         (helpful--definition #'make-ert-test t)]
    (should buf)
    (should pos)))

(ert-deftest helpful-variable ()
  "Smoke test for `helpful-variable'."
  (helpful-variable 'tab-width))

(ert-deftest helpful-visit-reference ()
  "Smoke test for `helpful-visit-reference'."
  (helpful-function 'replace-regexp-in-string)
  (goto-char (point-min))
  ;; Move forward to the first reference.
  (while (not (get-text-property (point) 'helpful-pos))
    (forward-char 1))
  (helpful-visit-reference))

(ert-deftest helpful--signature ()
  "Ensure that autoloaded functions are handled gracefully"
  (should
   (equal (helpful--signature 'some-unused-function)
          "(some-unused-function [Arg list not available until function definition is loaded.])")))

(ert-deftest helpful--signature-space ()
  "Ensure that symbols with spaces are handled correctly."
  (should
   (equal (helpful--signature 'helpful-test-fn-with\ space)
          "(helpful-test-fn-with\\ space)")))

(ert-deftest helpful--signature--advertised ()
  "Ensure that we respect functions that declare `advertised-calling-convention'."
  (should
   (equal (helpful--signature 'start-process-shell-command)
          "(start-process-shell-command NAME BUFFER COMMAND)")))

(ert-deftest helpful-function--single-buffer ()
  "Ensure that calling `helpful-buffer' does not leave any extra
buffers lying around."
  (let ((initial-buffers (buffer-list))
        expected-buffers results-buffer)
    (helpful-function #'enable-theme)
    (setq results-buffer (get-buffer "*helpful command: enable-theme*"))
    (setq expected-buffers
          (cons results-buffer
                initial-buffers))
    (should
     (null
      (-difference (buffer-list) expected-buffers)))))

(ert-deftest helpful--kind-name ()
  (should
   (equal
    (helpful--kind-name 'message nil)
    "variable"))
  (should
   (equal
    (helpful--kind-name 'message t)
    "function"))
  (should
   (equal
    (helpful--kind-name 'save-excursion t)
    "special form")))

(ert-deftest helpful--pretty-print ()
  ;; Strings should be formatted with double-quotes.
  (should (equal "\"foo\"" (helpful--pretty-print "foo")))
  ;; Don't crash on large plists using keywords.
  (helpful--pretty-print
   '(:foo foooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo :bar bar)))

(ert-deftest helpful-update-after-killing-buf ()
  "If we originally looked at a variable in a specific buffer,
and that buffer has been killed, handle it gracefully."
  ;; Don't crash if the underlying buffer has been killed.
  (let (helpful-buf)
    (with-temp-buffer
      (helpful-variable 'tab-width)
      (setq helpful-buf (current-buffer)))
    (with-current-buffer helpful-buf
      (helpful-update))))

(ert-deftest helpful--canonical-symbol ()
  (should
   (eq (helpful--canonical-symbol 'not t)
       'null))
  (should
   (eq (helpful--canonical-symbol 'search-forward-regexp t)
       're-search-forward))
  (should
   (eq (helpful--canonical-symbol 'emacs-bzr-version nil)
       'emacs-repository-version)))

(ert-deftest helpful--aliases ()
  (should
   (equal (helpful--aliases 'null t)
          (list 'not)))
  (should
   (equal (helpful--aliases 'emacs-repository-version nil)
          (list 'emacs-bzr-version))))

(defun helpful-fn-in-elc ())

(ert-deftest helpful--elc-only ()
  "Ensure we handle functions where we have the .elc but no .el
file."
  ;; Pretend that we've loaded `helpful-fn-in-elc' from /tmp/foo.elc.
  (let ((load-history (cons '("/tmp/foo.elc" (defun . helpful-fn-in-elc))
                            load-history)))
    ;; This should not error.
    (helpful-function 'helpful-fn-in-elc)))

(ert-deftest helpful--unnamed-func ()
  "Ensure we handle unnamed functions too.

This is important for `helpful-key', where a user may have
associated a lambda with a keybinding."
  (let* ((fun (lambda (x) x))
         (buf (helpful--buffer fun t)))
    ;; There's no name, so just show lambda in the buffer name.
    (should
     (equal (buffer-name buf) "*helpful lambda*"))
    ;; Don't crash when we show the buffer.
    (with-current-buffer buf
      (helpful-update))))

(ert-deftest helpful--unnamed-compiled-func ()
  "Ensure we handle unnamed byte-compiled functions.

This is important for `helpful-key', where a user may have
associated a lambda with a keybinding."
  (let* ((fun (byte-compile (lambda (x) x)))
         (buf (helpful--buffer fun t)))
    ;; There's no name, so just show lambda in the buffer name.
    (should
     (equal (buffer-name buf) "*helpful lambda*"))
    ;; Don't crash when we show the buffer.
    (with-current-buffer buf
      (helpful-update))))

(ert-deftest helpful--obsolete-variable ()
  "Test display of obsolete variable."
  (let* ((var 'helpful-test-var-obsolete)
         (info (helpful--format-obsolete-info var nil)))
    (should
     (equal info "This variable is obsolete since 23.1; use helpful-test-var instead."))))

(ert-deftest helpful--obsolete-function ()
  "Test display of obsolete function."
  (let* ((fun 'helpful-test-fun-obsolete)
         (info (helpful--format-obsolete-info fun t)))
    (should
     (equal info "This function is obsolete since 1.2.3; use helpful instead."))))

(ert-deftest helpful--keymap-keys--sparse ()
  (let* ((parent-keymap (make-sparse-keymap))
         (keymap (make-sparse-keymap)))
    (set-keymap-parent keymap parent-keymap)
    (define-key parent-keymap (kbd "a") #'forward-char)
    (define-key keymap (kbd "C-c C-M-a") #'backward-char)
    (define-key keymap [remap quoted-insert] #'forward-line)
    (should
     (equal
      (helpful--keymap-keys keymap)
      '(([17] forward-line)
        ([3 27 1] backward-char)
        ([97] forward-char))))))

(defvar helpful--dummy-keymap
  (let ((keymap (make-sparse-keymap)))
    (define-key keymap (kbd "a") #'forward-char)
    keymap))

;; `fset' is necessary for keymaps as prefixes. This is a quirky Emacs
;; API: https://emacs.stackexchange.com/q/28576/304
(fset 'helpful--dummy-keymap helpful--dummy-keymap)

(ert-deftest helpful--keymap-keys--prefix ()
  "Test we flatten keymaps with prefix keys."
  (let* ((keymap (make-sparse-keymap)))
    (define-key keymap (kbd "C-c") 'helpful--dummy-keymap)
    (should
     (equal
      (helpful--keymap-keys keymap)
      '(([3 97] forward-char))))))

(ert-deftest helpful--keymap-keys ()
  (let* ((parent-keymap (make-keymap))
         (keymap (make-keymap)))
    (set-keymap-parent keymap parent-keymap)
    (define-key parent-keymap (kbd "a") #'forward-char)
    (define-key keymap (kbd "C-c C-M-a") #'backward-char)
    (define-key keymap [remap quoted-insert] #'forward-line)
    (should
     (equal
      ;; This order differs from a sparse keymap. We should fix that
      ;; if it makes any difference.
      (helpful--keymap-keys keymap)
      '(([3 27 1] backward-char)
        ([17] forward-line)
        ([97] forward-char))))))

(ert-deftest helpful--keymap-keys--strings ()
  "Test that we handle maps with format (TYPE ITEM-NAME . BINDING)."
  ;; This is an actual piece of smerge-mode-map.
  (let ((keymap '(keymap (3 keymap
                            (94 keymap
                                (61 keymap
                                    (61 "upper-lower" . smerge-diff-upper-lower)
                                    (62 "base-lower" . smerge-diff-base-lower)
                                    (60 "base-upper" . smerge-diff-base-upper)
                                    "Diff"))))))
    (should
     (equal
      (helpful--keymap-keys keymap)
      '(([3 94 61 61] smerge-diff-upper-lower)
        ([3 94 61 62] smerge-diff-base-lower)
        ([3 94 61 60] smerge-diff-base-upper))))))

(ert-deftest helpful--keymap-keys--anonymous-fns ()
  (let* ((keymap (make-keymap)))
    (define-key keymap (kbd "a")
      (lambda () (message)))
    (define-key keymap (kbd "a")
      (byte-compile-sexp (lambda () (message))))

    ;; Don't crash on anonymous functions in a keymap.
    (helpful--keymap-keys keymap)))

(ert-deftest helpful--format-keymap--keyboard-macros ()
  (let* ((keymap (make-keymap)))
    ;; A keyboard macro can be a string or a vector.
    (define-key keymap "a" "ABC")
    (define-key keymap "b" [TAB])

    (should
     (equal
      (helpful--format-keymap keymap)
      "a  Keyboard Macro\nb  Keyboard Macro"))))

(defun helpful--dummy-command ()
  (interactive))

(ert-deftest helpful--keymaps-containing ()
  "Ensure that we find keymaps for variables with bindings."
  ;; This is defined in the global map.
  (should
   (helpful--keymaps-containing #'where-is))

  ;; Only defined in `minor-mode-map-alist'.
  (let ((keymap (make-sparse-keymap)))
    (define-key keymap (kbd "a") #'helpful--dummy-command)
    (let ((minor-mode-map-alist
           (cons (cons 'foo-mode keymap) minor-mode-map-alist)))
      (should
       (helpful--keymaps-containing #'helpful--dummy-command))))

  ;; Don't crash if there are dodgy values in `minor-mode-map-alist'.
  (let ((minor-mode-map-alist
         ;; I'm not convinced this is legal, but
         ;; pdf-cache-prefetch-minor-mode in pdf-tools has t as a
         ;; keymap.
         (cons (cons 'foo-mode t) minor-mode-map-alist)))
    (helpful--keymaps-containing #'helpful--dummy-command))

  ;; Create a keybinding that is very unlikely to clobber actually
  ;; defined keybindings in the current emacs instance.
  (global-set-key (kbd "C-c M-S-c") #'helpful--dummy-command)

  ;; This command should only be in `global-map' and
  ;; `mode-specific-map'.
  (should
   (equal
    (length (helpful--keymaps-containing #'helpful--dummy-command))
    2))

  ;; Undo keybinding.
  (global-set-key (kbd "C-c M-S-c") nil)

  ;; Check for ido command remapping.
  (ido-mode 1)
  (should
   (equal
    (helpful--keymaps-containing 'ido-find-file)
    '(("minor-mode-map-alist (ido-mode)" "<open>" "C-x C-f"))))
  (ido-mode 0))

(defalias 'helpful--dummy-command-alias #'helpful--dummy-command)

(ert-deftest helpful--keymaps-containing-aliases ()
  "Ensure that we find keymaps that we've bound command aliases
in."
  ;; Create keybindings that are very unlikely to clobber actually
  ;; defined keybindings in the current emacs instance.
  (global-set-key (kbd "C-c M-S-c") #'helpful--dummy-command)
  (global-set-key (kbd "C-c M-S-d") #'helpful--dummy-command-alias)

  (unwind-protect
      (let* ((keymaps (helpful--keymaps-containing-aliases #'helpful--dummy-command (helpful--aliases 'helpful--dummy-command t)))
             (global-keybindings (cdr (assoc "global-map" keymaps))))
        (should
         (equal global-keybindings (list "C-c M-S-c" "C-c M-S-d"))))

    ;; Undo keybindings.
    (global-set-key (kbd "C-c M-S-c") nil)
    (global-set-key (kbd "C-c M-S-d") nil)))

(ert-deftest helpful--merge-alists ()
  (should
   (equal
    (helpful--merge-alists '((a . (1 2 3)) (b . (4)))
                           '((a . (10)) (c . (11))))
    '((a . (1 2 3 10))
      (b . (4))
      (c . (11))))))

(ert-deftest helpful--source ()
  (-let* (((buf pos opened) (helpful--definition #'helpful--source t))
          (source (helpful--source #'helpful--source t buf pos)))
    (should
     (s-starts-with-p "(defun " source))))

(ert-deftest helpful--source-autoloaded ()
  "We should include the autoload cookie."
  (-let* (((buf pos opened) (helpful--definition #'helpful-at-point t))
          (source (helpful--source #'helpful-at-point t buf pos)))
    (should
     (s-starts-with-p ";;;###autoload" source))))

(ert-deftest helpful--source--interactively-defined-fn ()
  "We should return the raw sexp for functions where we can't
find the source code."
  (eval '(defun test-foo-defined-interactively () 42))
  (-let* (((buf pos opened) (helpful--definition #'test-foo-defined-interactively t)))
    (should
     (not
      (null
       (helpful--source #'test-foo-defined-interactively t buf pos))))))

(ert-deftest helpful--outer-sexp ()
  ;; If point is in the middle of a form, we should return its position.
  (with-temp-buffer
    (insert "(foo bar baz)")
    (goto-char (point-min))
    (search-forward "b")

    (-let [(pos subforms)
           (helpful--outer-sexp (current-buffer) (point))]
      (should
       (equal pos (point-min)))
      (should
       (equal subforms '(foo bar)))))
  ;; If point is at the beginning of a form, we should still return its position.
  (with-temp-buffer
    (insert "(foo) (bar)")
    (goto-char (point-min))
    (search-forward "b")
    (backward-char 2)

    (-let [(pos subforms)
           (save-excursion
             (helpful--outer-sexp (current-buffer) (point)))]
      (should
       (equal pos (point)))
      (should
       (equal subforms '(bar))))))

(ert-deftest helpful--summary--aliases ()
  ;; exclude the sym itself
  "Ensure we mention that a symbol is an alias."
  (-let* (((buf pos opened) (helpful--definition '-select t))
          (summary (helpful--summary '-select t buf pos)))
    (when opened
      (kill-buffer buf))
    ;; Strip properties to make assertion messages more readable.
    (set-text-properties 0 (1- (length summary)) nil summary)
    (should
     (equal
      summary
      "-select is a function alias for -filter, defined in dash.el."))))

(ert-deftest helpful--summary--special-form ()
  "Ensure we describe special forms correctly"
  (-let* ((summary (helpful--summary 'if t nil nil)))
    ;; Strip properties to make assertion messages more readable.
    (set-text-properties 0 (1- (length summary)) nil summary)
    (should
     (s-starts-with-p "if is a special form defined in" summary))))

(defun helpful-test-fn-interactive ()
  (interactive))

(ert-deftest helpful--summary--interactive-fn ()
  "Ensure we use \"an\" for interactive functions."
  (let* ((summary (helpful--summary 'helpful-test-fn-interactive t nil nil)))
    ;; Strip properties to make assertion messages more readable.
    (set-text-properties 0 (1- (length summary)) nil summary)
    (should
     (s-starts-with-p "helpful-test-fn-interactive is an interactive function" summary))))

(defun helpful-test-fn? ()
  (interactive))

(ert-deftest helpful--summary--fn-with-? ()
  "Ensure we use don't needlessly escape ? in function names."
  (let* ((summary (helpful--summary 'helpful-test-fn? t nil nil)))
    ;; Strip properties to make assertion messages more readable.
    (set-text-properties 0 (1- (length summary)) nil summary)
    (should
     (s-starts-with-p "helpful-test-fn? is" summary))))

(ert-deftest helpful--signature-fn-with? ()
  "Ensure that symbols with question marks are handled correctly."
  (should
   (equal (helpful--signature 'helpful-test-fn?)
          "(helpful-test-fn?)")))

(defun helpful-test-fn-with\ space ()
  42)

(ert-deftest helpful--summary--symbol-with-space ()
  "Ensure we correctly format symbols containing spaces."
  (let* ((summary (helpful--summary 'helpful-test-fn-with\ space t nil nil)))
    ;; Strip properties to make assertion messages more readable.
    (set-text-properties 0 (1- (length summary)) nil summary)
    (should
     (s-starts-with-p "helpful-test-fn-with\\ space is a function" summary))))

(ert-deftest helpful--bound-p ()
  ;; Functions.
  (should (helpful--bound-p 'message))
  ;; Variables
  (should (helpful--bound-p 'tab-width))
  ;; Unbound.
  (should (not (helpful--bound-p 'this-variable-does-not-exist)))
  ;; For our purposes, we don't consider nil or t to be bound.
  (should (not (helpful--bound-p 'nil)))
  (should (not (helpful--bound-p 't))))

(ert-deftest helpful--callees ()
  (should
   (equal
    (helpful--callees '(quote (foo)))
    nil))
  ;; Simple function calls.
  (should
   (equal
    (helpful--callees '(foo (bar 1) 2))
    '(foo bar))))

(ert-deftest helpful--callees-let ()
  (should
   (equal
    (helpful--callees
     '(progn
        (let ((x (foo))
              (y t))
          (bar x y))
        (let (y)
          (baz))
        (let* ((z (quux))))))
    '(foo bar baz quux))))

(ert-deftest helpful--callees--lambda ()
  (should
   (equal
    (helpful--callees '(lambda (x) (foo x)))
    '(foo))))

(ert-deftest helpful--callees--closure ()
  (should
   (equal
    (helpful--callees '(closure (t) (x) (foo x)))
    '(foo))))

(ert-deftest helpful--callees--function ()
  (should
   (equal
    (helpful--callees '(function (lambda (x) (foo x))))
    '(foo)))
  (should
   (equal
    (helpful--callees '(function foo))
    '(foo))))

(ert-deftest helpful--callees--cond ()
  (should
   (equal
    (helpful--callees
     '(cond
       (x)
       ((foo))
       ((bar)
        (baz))
       (t
        (quux))
       ))
    '(foo bar baz quux))))

(ert-deftest helpful--callees--condition-case ()
  (should
   (equal
    (helpful--callees
     '(condition-case e
          (foo)
        (error (bar))
        ((arith-error file-error) (baz))))
    '(foo bar baz))))

(ert-deftest helpful--callees--funcall ()
  (let ((result (helpful--callees
                 '(progn
                    (funcall 'foo 1)
                    (apply 'bar 2)
                    (apply (baz) 3)
                    (apply unknown-var 3)))))
    (should (memq 'foo result))
    (should (memq 'bar result))
    (should (memq 'baz result))
    (should (not (memq 'unknown-var result))))
  (let ((result (helpful--callees
                 '(progn
                    (funcall #'foo 1)
                    (apply #'bar 2)))))
    (should (memq 'foo result))
    (should (memq 'bar result))))

(ert-deftest helpful--callees-button--smoke ()
  (with-temp-buffer
    (let ((button (helpful--make-callees-button
                   'whatever
                   '(defun whatever () (something) (test 5)))))
      (insert button)
      (goto-char (point-min))
      (push-button)))
  (with-temp-buffer
    (let ((button (helpful--make-callees-button
                   '(lambda () (interactive) (other-window -1))
                   '(lambda () (interactive) (other-window -1)))))
      (insert button)
      (goto-char (point-min))
      (push-button))))

(ert-deftest helpful--autoloaded-p ()
  (-let [(buf pos opened) (helpful--definition 'rx-to-string t)]
    (should (helpful--autoloaded-p 'rx-to-string buf))
    (when opened
      (kill-buffer buf))))

(ert-deftest helpful--inhibit-read-only ()
  (helpful-variable 'inhibit-read-only)
  (should
   (s-contains-p "Value\nnil" (buffer-string))))

(ert-deftest helpful--convert-c-name ()
  (should
   (equal
    'make-string
    (helpful--convert-c-name 'Fmake_string nil)))
  (should
   (equal
    'gc-cons-percentage
    (helpful--convert-c-name 'Vgc_cons_percentage t)))
  (should-not
   (helpful--convert-c-name 'Fmake_string t))
  (should-not
   (helpful--convert-c-name 'Vgc_cons_percentage nil)))

(ert-deftest helpful-symbol-c-style ()
  (helpful-symbol 'Fget_char_property)
  (helpful-symbol 'Vinhibit_field_text_motion))

(ert-deftest helpful-symbol-unbound ()
  "Ensure we inform the user if we're given an unbound symbol."
  (should
   (condition-case _
       (helpful-symbol 'notboundtoanything)
     ('user-error t))))

(ert-deftest helpful--loads-autoload-symbol ()
  "When asked to describe an autoloaded symbol, just load it."
  ;; This test assumes that you haven't loaded tetris.el.gz in your
  ;; current instance.
  (skip-unless (autoloadp (symbol-function 'tetris)))
  ;; This is a regression test: `tetris' has `tetris-mode-map' in its
  ;; docstring, so we can't display the mode map unless tetris.el.gz is
  ;; loaded.
  ;;
  (helpful-function #'tetris))

(defcustom helpful-test-custom-var 123
  "I am an example custom variable."
  :type 'number
  :group 'helpful
  :package-version '(helpful . "1.2.3"))

;; Ensure the current value differs from the original value.
(setq helpful-test-custom-var 456)

(ert-deftest helpful--original-value ()
  "Show the original value for defcustom variables."
  (helpful-variable 'helpful-test-custom-var)
  (should
   (s-contains-p "Original Value\n123" (buffer-string))))

(ert-deftest helpful--package-version ()
  "Report when a variable was added"
  (helpful-variable 'helpful-test-custom-var)
  (should
   (s-contains-p
    (s-word-wrap
     70
     "This variable was added, or its default value changed, in helpful version 1.2.3.")
    (buffer-string))))

(ert-deftest helpful--display-implementations ()
  (require 'xref)
  (helpful-function 'xref-location-marker)
  (should (s-contains-p "Implementations" (buffer-string)))
  (should (s-contains-p "((l xref-file-location))" (buffer-string)))
  (should (s-contains-p "((l xref-buffer-location))" (buffer-string))))
