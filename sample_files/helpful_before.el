;;; helpful.el --- a better *help* buffer            -*- lexical-binding: t; -*-

;; Copyright (C) 2017-2018  Wilfred Hughes

(defun helpful-update ()
  "Update the current *Helpful* buffer to the latest
state of the current symbol."
  (interactive)
  (cl-assert (not (null helpful--sym)))
  (unless (buffer-live-p helpful--associated-buffer)
    (setq helpful--associated-buffer nil))
  (-let* ((inhibit-read-only t)
          (start-line (line-number-at-pos))
          (start-column (current-column))
          (primitive-p (helpful--primitive-p helpful--sym helpful--callable-p))
          (look-for-src (or (not primitive-p)
                            find-function-C-source-directory))
          ((buf pos opened)
           (if look-for-src
               (helpful--definition helpful--sym helpful--callable-p)
             '(nil nil nil)))
          (source (when look-for-src
                    (helpful--source helpful--sym helpful--callable-p buf pos)))
          (source-path (when buf
                         (buffer-file-name buf)))
          (references (helpful--calculate-references
                       helpful--sym helpful--callable-p
                       source-path)))

    (erase-buffer)

    (insert (helpful--summary helpful--sym helpful--callable-p buf pos))

    (when (and helpful--callable-p
	       (not (helpful--kbd-macro-p helpful--sym)))
      (helpful--insert-section-break)
      (insert
       (helpful--heading "Signature")
       (helpful--syntax-highlight (helpful--signature helpful--sym))))

    (when (not helpful--callable-p)
      (helpful--insert-section-break)
      (let* ((sym helpful--sym)
             (val (helpful--sym-value sym helpful--associated-buffer))
             (multiple-views-p
              (or (stringp val)
                  (keymapp val)
                  (and (s-ends-with-p "-hook" (symbol-name sym))
                       (consp val)))))
        (insert
         (helpful--heading
          (cond
           ;; Buffer-local variable and we're looking at the value in
           ;; a specific buffer.
           ((and
             helpful--associated-buffer
             (local-variable-p sym helpful--associated-buffer))
            (format "Value in %s"
                    (helpful--button
                     (format "#<buffer %s>" (buffer-name helpful--associated-buffer))
                     'helpful-buffer-button
                     'buffer helpful--associated-buffer
                     'position pos)))
           ;; Buffer-local variable but default/global value.
           ((local-variable-if-set-p sym)
            "Global Value")
           ;; This variable is not buffer-local.
           (t "Value")))
         (cond
          (helpful--view-literal
           (helpful--syntax-highlight (helpful--pretty-print val)))
          ;; Allow strings to be viewed with properties rendered in
          ;; Emacs, rather than as a literal.
          ((stringp val)
           val)
          ;; Allow keymaps to be viewed with keybindings shown and
          ;; links to the commands bound.
          ((keymapp val)
           (helpful--format-keymap val))
          ((and (s-ends-with-p "-hook" (symbol-name sym))
                (consp val))
           (helpful--format-hook val))
          (t
           (helpful--pretty-print val)))
         "\n\n")
        (when multiple-views-p
          (insert (helpful--make-toggle-literal-button) " "))

        (when (local-variable-if-set-p sym)
          (insert
           (helpful--button
            "Buffer values"
            'helpful-associated-buffer-button
            'symbol sym
            'prompt-p t)
           " "
           (helpful--button
            "Global value"
            'helpful-associated-buffer-button
            'symbol sym
            'prompt-p nil)
           " "))
        (when (memq (helpful--sym-value helpful--sym helpful--associated-buffer) '(nil t))
          (insert (helpful--make-toggle-button helpful--sym helpful--associated-buffer) " "))
        (insert (helpful--make-set-button helpful--sym helpful--associated-buffer))
        (when (custom-variable-p helpful--sym)
          (insert " " (helpful--make-customize-button helpful--sym)))))

    (-when-let (docstring (helpful--docstring helpful--sym helpful--callable-p))
      (helpful--insert-section-break)
      (insert
       (helpful--heading "Documentation")
       (helpful--format-docstring docstring))
      (when (helpful--in-manual-p helpful--sym)
        (insert "\n\n")
        (insert (helpful--make-manual-button helpful--sym))))

    ;; Show keybindings.
    ;; TODO: allow users to conveniently add and remove keybindings.
    (when (commandp helpful--sym)
      (helpful--insert-section-break)
      (insert
       (helpful--heading "Key Bindings")
       (helpful--format-keys helpful--sym)))

    (helpful--insert-section-break)

    (insert
     (helpful--heading "References")
     (let ((src-button
            (when source-path
              (helpful--navigate-button
               (file-name-nondirectory source-path)
               source-path
               (or pos
                   0)))))
       (cond
        ((and source-path references)
         (format "References in %s:\n%s"
                 src-button
                 (helpful--format-position-heads references source-path)))
        ((and source-path primitive-p)
         (format
          "Finding references in a .%s file is not supported."
          (f-ext source-path)))
        (source-path
         (format "%s is unused in %s."
                 helpful--sym
                 src-button))
        ((and primitive-p (null find-function-C-source-directory))
         "C code is not yet loaded.")
        (t
         "Could not find source file.")))
     "\n\n"
     (helpful--make-references-button helpful--sym helpful--callable-p))

    (when (and helpful--callable-p source (not primitive-p))
      (insert
       " "
       (helpful--make-callees-button helpful--sym source)))

    (when (helpful--advised-p helpful--sym)
      (helpful--insert-section-break)
      (insert
       (helpful--heading "Advice")
       (format "This %s is advised."
               (if (macrop helpful--sym) "macro" "function"))))

    (let ((can-edebug
           (helpful--can-edebug-p helpful--sym helpful--callable-p buf pos))
          (can-trace
           (and (symbolp helpful--sym)
                helpful--callable-p
                ;; Tracing uses advice, and you can't apply advice to
                ;; primitive functions that are replaced with special
                ;; opcodes. For example, `narrow-to-region'.
                (not (plist-get (symbol-plist helpful--sym) 'byte-opcode))))
          (can-disassemble
           (and helpful--callable-p (not primitive-p)))
          (can-forget
           (and (not (special-form-p helpful--sym))
                (not primitive-p))))
      (when (or can-edebug can-trace can-disassemble can-forget)
        (helpful--insert-section-break)
        (insert (helpful--heading "Debugging")))
      (when can-edebug
        (insert
         (helpful--make-edebug-button helpful--sym)))
      (when can-trace
        (when can-edebug
          (insert " "))
        (insert
         (helpful--make-tracing-button helpful--sym)))

      (when (and
             (or can-edebug can-trace)
             (or can-disassemble can-forget))
        (insert "\n"))

      (when can-disassemble
        (insert (helpful--make-disassemble-button helpful--sym)))

      (when can-forget
        (when can-disassemble
          (insert " "))
        (insert (helpful--make-forget-button helpful--sym helpful--callable-p))))

    (let ((aliases (helpful--aliases helpful--sym helpful--callable-p)))
      (when aliases
        (helpful--insert-section-break)
        (insert
         (helpful--heading "Aliases")
         (s-join "\n" (--map (helpful--format-alias it helpful--callable-p)
                             aliases)))))

    (helpful--insert-section-break)

    (insert
     (helpful--heading "Source Code")
     (cond
      (source-path
       (concat
        (propertize (format "%s Defined in " (if primitive-p "//" ";;"))
                    'face 'font-lock-comment-face)
        (helpful--navigate-button
         (f-abbrev source-path)
         source-path
         pos)
        "\n"))
      (primitive-p
       (concat
        (propertize
         "C code is not yet loaded."
         'face 'font-lock-comment-face)
        "\n\n"
        (helpful--button
         "Set C source directory"
         'helpful-c-source-directory)))
      (t
       "")))
    (when source
      (insert
       (cond
        ((stringp source)
         (helpful--syntax-highlight source (if primitive-p 'c-mode)))
        ((and (consp source) (eq (car source) 'closure))
         (helpful--syntax-highlight
          (concat ";; Closure converted to defun by helpful.\n"
                  (helpful--pretty-print
                   (helpful--format-closure helpful--sym source)))))
        (t
         (helpful--syntax-highlight
          (concat
           ";; Source file is unknown, showing raw function object.\n"
           (helpful--pretty-print source)))))))

    (helpful--insert-section-break)

    (-when-let (formatted-props (helpful--format-properties helpful--sym))
      (insert
       (helpful--heading "Symbol Properties")
       formatted-props))

    (goto-char (point-min))
    (forward-line (1- start-line))
    (forward-char start-column)

    (when opened
      (kill-buffer buf))))
