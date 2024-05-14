;;; deadgrep.el --- fast, friendly searching with ripgrep  -*- lexical-binding: t; -*-

;; Copyright (C) 2018  Wilfred Hughes

;; Author: Wilfred Hughes <me@wilfred.me.uk>
;; URL: https://github.com/Wilfred/deadgrep
;; Keywords: tools
;; Version: 0.13
;; Package-Requires: ((emacs "25.1") (dash "2.12.0") (s "1.11.0") (spinner "1.7.3"))

;; This program is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with this program.  If not, see <https://www.gnu.org/licenses/>.

;;; Commentary:

;; Perform text searches with the speed of ripgrep and the comfort of
;; Emacs.  This is a bespoke mode that does not rely on
;; compilation-mode, but tries to be a perfect fit for ripgrep.

;; Install from MELPA, then `M-x deadgrep' will do a search!

;;; Code:

(require 'cl-lib)
(require 's)
(require 'dash)
(require 'spinner)
(require 'project)

(defgroup deadgrep nil
  "A powerful text search UI using ripgrep."
  :group 'tools
  :group 'matching)

(defcustom deadgrep-executable
  "rg"
  "The rg executable used by deadgrep.
This will be looked up on `exec-path' if it isn't an absolute
path to the binary."
  :type 'string
  :group 'deadgrep)

(defcustom deadgrep-max-buffers
  4
  "The maximum number of deadgrep results buffers.

If the number of results buffers exceeds this value, deadgrep
will kill results buffers. The least recently used buffers are
killed first.

To disable cleanup entirely, set this variable to nil."
  :type '(choice
          (number :tag "Maximum of buffers allowed")
          (const :tag "Disable cleanup" nil))
  :group 'deadgrep)

(defcustom deadgrep-project-root-function
  #'deadgrep--project-root
  "Function called by `deadgrep' to work out the root directory
to search from.

See also `deadgrep-project-root-overrides'."
  :type 'function
  :group 'deadgrep)

(defvar deadgrep-project-root-overrides nil
  "An alist associating project directories with the desired
search directory.

This is useful for large repos where you only want to search a
subdirectory. It's also handy for nested repos where you want to
search from the parent.

This affects the behaviour of `deadgrep--project-root', so this
variable has no effect if you change
`deadgrep-project-root-function'.")

(defvar deadgrep-history
  nil
  "A list of the previous search terms.")

(defvar deadgrep-max-line-length
  500
  "Truncate lines if they are longer than this.

Emacs performance can be really poor with long lines, so this
ensures that searching minified files does not slow down movement
in results buffers.

In extreme cases (100KiB+ single-line files), we can get a stack
overflow on our regexp matchers if we don't apply this.")

(defcustom deadgrep-display-buffer-function
  'switch-to-buffer-other-window
  "Function used to show the deadgrep result buffer.

This function is called with one argument, the results buffer to
display."
  :type 'function
  :group 'deadgrep)

(defface deadgrep-meta-face
  '((t :inherit font-lock-comment-face))
  "Face used for deadgrep UI text."
  :group 'deadgrep)

(defface deadgrep-filename-face
  '((t :inherit bold))
  "Face used for filename headings in results buffers."
  :group 'deadgrep)

(defface deadgrep-search-term-face
  '((t :inherit font-lock-variable-name-face))
  "Face used for the search term in results buffers."
  :group 'deadgrep)

(defface deadgrep-regexp-metachar-face
  '((t :inherit
       ;; TODO: I've seen a more appropriate face in some themes,
       ;; find out what to use instead here.
       font-lock-constant-face))
  "Face used for regexp metacharacters in search terms."
  :group 'deadgrep)

(defface deadgrep-match-face
  '((t :inherit match))
  "Face used for the portion of a line that matches the search term."
  :group 'deadgrep)

(defvar-local deadgrep--search-term nil)
;; Ensure this variable is ignored by `kill-all-local-variables' when
;; switching between `deadgrep-mode' and `deadgrep-edit-mode'.
(put 'deadgrep--search-term 'permanent-local t)

(defvar-local deadgrep--search-type 'string)
(put 'deadgrep--search-type 'permanent-local t)
(defvar-local deadgrep--search-case 'smart)
(put 'deadgrep--search-case 'permanent-local t)
(defvar-local deadgrep--file-type 'all)
(put 'deadgrep--file-type 'permanent-local t)

(defvar-local deadgrep--context nil
  "When set, also show context of results.
This is stored as a cons cell of integers (lines-before . lines-after).")
(put 'deadgrep--context 'permanent-local t)
(defvar-local deadgrep--initial-filename nil
  "The filename of the buffer that deadgrep was started from.
Used to offer better default values for file options.")
(put 'deadgrep--initial-filename 'permanent-local t)

(defvar-local deadgrep--current-file nil
  "The file we're currently inserting results for.")
(defvar-local deadgrep--spinner nil)
(defvar-local deadgrep--remaining-output nil
  "We can't guarantee that our process filter will always receive whole lines.
We save the last line here, in case we need to append more text to it.")
(defvar-local deadgrep--postpone-start nil
  "If non-nil, don't (re)start searches.")
(defvar-local deadgrep--running nil
  "If non-nil, a search is still running.")

(defvar-local deadgrep--debug-command nil)
(put 'deadgrep--debug-command 'permanent-local t)
(defvar-local deadgrep--debug-first-output nil)
(put 'deadgrep--debug-first-output 'permanent-local t)

(defvar-local deadgrep--imenu-alist nil
  "Alist that stores filename and position for each matched files.
It is used to create `imenu' index.")

(defconst deadgrep--position-column-width 5)

(defconst deadgrep--color-code
  (rx "\x1b[" (+ digit) "m")
  "Regular expression for an ANSI color code.")

(defvar deadgrep--incremental-active nil)

(defun deadgrep--insert-output (output &optional finished)
  "Propertize OUTPUT from rigrep and write to the current buffer."
  ;; If we had an unfinished line from our last call, include that.
  (when deadgrep--remaining-output
    (setq output (concat deadgrep--remaining-output output))
    (setq deadgrep--remaining-output nil))

  (let ((inhibit-read-only t)
        (lines (s-lines output))
        prev-line-num)
    ;; Process filters run asynchronously, and don't guarantee that
    ;; OUTPUT ends with a complete line. Save the last line for
    ;; later processing.
    (unless finished
      (setq deadgrep--remaining-output (-last-item lines))
      (setq lines (butlast lines)))

    (save-excursion
      (goto-char (point-max))
      (dolist (line lines)
        (cond
         ;; Ignore blank lines.
         ((s-blank? line))
         ;; Lines of just -- are used as a context separator when
         ;; calling ripgrep with context flags.
         ((string= line "--")
          (let ((separator "--"))
            ;; Try to make the separator length match the previous
            ;; line numbers.
            (when prev-line-num
              (setq separator
                    (s-repeat (log prev-line-num 10) "-")))
            (insert
             (propertize (concat separator "\n")
                         'face 'deadgrep-meta-face
                         'deadgrep-separator t))))
         ;; If we have a warning or don't have a color code, ripgrep
         ;; must be complaining about something (e.g. zero matches for
         ;; a glob, or permission denied on some directories).
         ((or
           (s-starts-with-p "WARNING: " line)
           (not (s-matches-p deadgrep--color-code line)))
          (when deadgrep--current-file
            (setq deadgrep--current-file nil)
            (insert "\n"))
          (insert line "\n\n"))
         (t
          (-let* ((truncate-p (> (length line) deadgrep-max-line-length))
                  (line
                   (if truncate-p
                       (substring line 0 deadgrep-max-line-length)
                     line))
                  ((filename line-num content) (deadgrep--split-line line))
                  (formatted-line-num
                   (s-pad-right deadgrep--position-column-width " "
                                (number-to-string line-num)))
                  (pretty-line-num
                   (propertize formatted-line-num
                               'face 'deadgrep-meta-face
                               'deadgrep-filename filename
                               'deadgrep-line-number line-num
                               'read-only t
                               'front-sticky t
                               'rear-nonsticky t))
                  (pretty-filename
                   (propertize filename
                               'face 'deadgrep-filename-face
                               'deadgrep-filename filename
                               'read-only t
                               'front-sticky t)))
            (cond
             ;; This is the first file we've seen, print the heading.
             ((null deadgrep--current-file)
              (push (cons filename (point)) deadgrep--imenu-alist)
              (insert pretty-filename "\n"))
             ;; This is a new file, print the heading with a spacer.
             ((not (equal deadgrep--current-file filename))
              (push (cons filename (1+ (point))) deadgrep--imenu-alist)
              (insert "\n" pretty-filename "\n")))
            (setq deadgrep--current-file filename)

            ;; TODO: apply the invisible property if the user decided
            ;; to hide this filename before we finished finding
            ;; results in it.
            (insert pretty-line-num content)
            (when truncate-p
              (insert
               (propertize " ... (truncated)"
                           'face 'deadgrep-meta-face)))
            (insert "\n")

            (setq prev-line-num line-num))))))))

(defcustom deadgrep-finished-hook nil
  "Hook run when `deadgrep' search is finished."
  :type 'hook
  :group 'deadgrep)

(defun deadgrep--process-sentinel (process output)
  "Update the deadgrep buffer associated with PROCESS as complete."
  (let ((buffer (process-buffer process))
        (finished-p (string= output "finished\n")))
    (when (buffer-live-p buffer)
      (with-current-buffer buffer
        (setq deadgrep--running nil)
        ;; rg has terminated, so stop the spinner.
        (spinner-stop deadgrep--spinner)

        (deadgrep--insert-output "" finished-p)

        ;; Report any errors that occurred.
        (unless (member output
                        (list
                         "exited abnormally with code 1\n"
                         "interrupt\n"
                         "finished\n"))
          (save-excursion
            (let ((inhibit-read-only t))
              (goto-char (point-max))
              (insert output))))

        (run-hooks 'deadgrep-finished-hook)
        (unless deadgrep--incremental-active
          (message "Deadgrep finished"))))))

(defun deadgrep--process-filter (process output)
  ;; Searches may see a lot of output, but it's really useful to have
  ;; a snippet of output when debugging. Store the first output received.
  (unless deadgrep--debug-first-output
    (setq deadgrep--debug-first-output output))

  ;; If we had an unfinished line from our last call, include that.
  (when deadgrep--remaining-output
    (setq output (concat deadgrep--remaining-output output))
    (setq deadgrep--remaining-output nil))

  (when (buffer-live-p (process-buffer process))
    (with-current-buffer (process-buffer process)
      (deadgrep--insert-output output))))

(defun deadgrep--extract-regexp (pattern s)
  "Search for PATTERN in S, and return the content of the first group."
  (string-match pattern s)
  (match-string 1 s))

(defconst deadgrep--filename-regexp
  (rx bos "\x1b[0m\x1b[3" (or "5" "6") "m"
      (? "./")
      (group (+? anything))
      "\x1b[")
  "Extracts the filename from a ripgrep line with ANSI color sequences.
We use the color sequences to extract the filename exactly, even
if the path contains colons.")

(defconst deadgrep--line-num-regexp
  (rx "\x1b[32m" (group (+ digit)))
  "Extracts the line number from a ripgrep line with ANSI color sequences.
Ripgrep uses a unique color for line numbers, so we use that to
extract the linue number exactly.")

(defconst deadgrep--line-contents-regexp
  (rx "\x1b[32m" (+ digit) "\x1b[0m" (or ":" "-") (group (* anything)))
  "Extract the line contents from a ripgrep line with ANSI color sequences.
Use the unique color for line numbers to ensure we start at the
correct colon.

Note that the text in the group will still contain color codes
highlighting which parts matched the user's search term.")

(defconst deadgrep--hit-regexp
  (rx-to-string
   `(seq
     ;; A reset color code.
     "\x1b[0m"
     ;; Two color codes, bold and color (any order).
     (regexp ,deadgrep--color-code)
     (regexp ,deadgrep--color-code)
     ;; The actual text.
     (group (+? anything))
     ;; A reset color code again.
     "\x1b[0m"))
  "Extract the portion of a line found by ripgrep that matches the user's input.
This may occur multiple times in one line.")

(defun deadgrep--split-line (line)
  "Split out the components of a raw LINE of output from rg.
Return the filename, line number, and the line content with ANSI
color codes replaced with string properties."
  (list
   (deadgrep--extract-regexp deadgrep--filename-regexp line)
   (string-to-number
    (deadgrep--extract-regexp deadgrep--line-num-regexp line))
   (deadgrep--propertize-hits
    (deadgrep--extract-regexp deadgrep--line-contents-regexp line))))

(defun deadgrep--escape-backslash (s)
  "Escape occurrences of backslashes in S.

This differs from `regexp-quote', which outputs a regexp pattern.
Instead, we provide a string suitable for REP in
`replace-regexp-in-string'."
  (s-replace "\\" "\\\\" s))

(defun deadgrep--propertize-hits (line-contents)
  "Given LINE-CONTENTS from ripgrep, replace ANSI color codes
with a text face property `deadgrep-match-face'."
  (replace-regexp-in-string
   deadgrep--hit-regexp
   (lambda (s)
     (propertize
      (deadgrep--escape-backslash (match-string 1 s))
      'face 'deadgrep-match-face))
   line-contents))

(define-button-type 'deadgrep-search-term
  'action #'deadgrep--search-term
  'help-echo "Change search term")

(defun deadgrep--search-prompt (&optional default)
  "The prompt shown to the user when starting a deadgrep search."
  (let ((kind (if (eq deadgrep--search-type 'regexp)
                  "by regexp" "for text")))
    (if default
        (format "Search %s (default %s): " kind default)
      (format "Search %s: " kind))))

(defun deadgrep--search-term (_button)
  (deadgrep-search-term))

(defun deadgrep-search-term ()
  "Change the current search term and restart the search."
  (interactive)
  (setq deadgrep--search-term
        (read-from-minibuffer
         (deadgrep--search-prompt)
         deadgrep--search-term))
  (rename-buffer
   (deadgrep--buffer-name deadgrep--search-term default-directory) t)
  (deadgrep-restart))

(define-button-type 'deadgrep-type
  'action #'deadgrep--search-type
  'search-type nil
  'help-echo "Change search type")

(defun deadgrep--search-type (button)
  (setq deadgrep--search-type (button-get button 'search-type))
  (deadgrep-restart))

(define-button-type 'deadgrep-case
  'action #'deadgrep--case
  'case nil
  'help-echo "Change case sensitivity")

(defun deadgrep--case (button)
  (setq deadgrep--search-case (button-get button 'case))
  (deadgrep-restart))

(define-button-type 'deadgrep-context
  'action #'deadgrep--context
  'context nil
  'help-echo "Show/hide context around match")

(defun deadgrep--context (button)
  ;; deadgrep--context takes the value of (before . after) when set.
  (setq deadgrep--context
        (cl-case (button-get button 'context)
          ((nil)
           nil)
          (before
           (cons
            (read-number "Show N lines before: ")
            (or (cdr-safe deadgrep--context) 0)))
          (after
           (cons
            (or (car-safe deadgrep--context) 0)
            (read-number "Show N lines after: ")))
          (t
           (error "Unknown context type"))))

  (deadgrep-restart))

(defun deadgrep--type-list ()
  "Query the rg executable for available file types."
  (let* ((output (with-output-to-string
                   (with-current-buffer standard-output
                     (process-file-shell-command
                      (format "%s --type-list" deadgrep-executable)
                      nil '(t nil)))))
         (lines (s-lines (s-trim output)))
         (types-and-globs
          (--map
           (s-split (rx ": ") it)
           lines)))
    (-map
     (-lambda ((type globs))
       (list type (s-split (rx ", ") globs)))
     types-and-globs)))

(define-button-type 'deadgrep-file-type
  'action #'deadgrep--file-type
  'case nil
  'help-echo "Change file type")

(defun deadgrep--format-file-type (file-type extensions)
  (let* ((max-exts 4)
         (truncated (> (length extensions) max-exts)))
    (when truncated
      (setq extensions
            (append (-take max-exts extensions)
                    (list "..."))))
    (format "%s (%s)"
            file-type
            (s-join ", " extensions))))

(defun deadgrep--glob-regexp (glob)
  "Convert GLOB pattern to the equivalent elisp regexp."
  (let* ((i 0)
         (result "^"))
    (while (< i (length glob))
      (let* ((char (elt glob i)))
        (cond
         ;; . matches a literal . in globs.
         ((eq char ?.)
          (setq result (concat result "\\."))
          (cl-incf i))
         ;; ? matches a single char in globs.
         ((eq char ??)
          (setq result (concat result "."))
          (cl-incf i))
         ;; * matches zero or more of anything.
         ((eq char ?*)
          (setq result (concat result ".*"))
          (cl-incf i))
         ;; [ab] matches a literal a or b.
         ;; [a-z] matches characters between a and z inclusive.
         ;; [?] matches a literal ?.
         ((eq char ?\[)
          ;; Find the matching ].
          (let ((j (1+ i)))
            (while (and (< j (length glob))
                        (not (eq (elt glob j) ?\])))
              (cl-incf j))
            (cl-incf j)
            (setq result (concat result
                                 (substring glob i j)))
            (setq i j)))
         (t
          (setq result (concat result (char-to-string char)))
          (cl-incf i)))))
    (concat result "$")))

(defun deadgrep--matches-globs-p (filename globs)
  "Return non-nil if FILENAME matches any glob pattern in GLOBS."
  (when filename
    (--any (string-match-p (deadgrep--glob-regexp it) filename)
           globs)))

(defun deadgrep--relevant-file-type (filename types-and-globs)
  "Try to find the most relevant item in TYPES-AND-GLOBS for FILENAME."
  (let (;; Find all the items in TYPES-AND-GLOBS whose glob match
        ;; FILENAME.
        (matching (-filter (-lambda ((_type globs))
                             (deadgrep--matches-globs-p filename globs))
                           types-and-globs)))
    (->> matching
         ;; Prefer longer names, so "markdown" over "md" for the type
         ;; name.
         (-sort (-lambda ((type1 _) (type2 _))
                  (< (length type1) (length type2))))
         ;; Prefer types with more extensions, as they tend to be more
         ;; common languages (e.g. 'ocaml' over 'ml').
         (-sort (-lambda ((_ globs1) (_ globs2))
                  (< (length globs1) (length globs2))))
         ;; But prefer elisp over lisp for .el files.
         (-sort (-lambda ((type1 _) (type2 _))
                  ;; Return t if we're comparing elisp with lisp, nil
                  ;; otherwise.
                  (and (equal type1 "lisp")
                       (equal type2 "elisp"))))
         ;; Take the highest scoring matching.
         (-last-item))))

(defun deadgrep--read-file-type (filename)
  "Read a ripgrep file type, defaulting to the type that matches FILENAME."
  (let* (;; Get the list of types we can offer.
         (types-and-globs (deadgrep--type-list))
         ;; Build a list mapping the formatted types to the type name.
         (type-choices
          (-map
           (-lambda ((type globs))
             (list
              (deadgrep--format-file-type type globs)
              type))
           types-and-globs))
         ;; Work out the default type name based on the filename.
         (default-type-and-globs
           (deadgrep--relevant-file-type filename types-and-globs))
         (default
           (-when-let ((default-type default-globs) default-type-and-globs)
             (deadgrep--format-file-type default-type default-globs)))
         ;; Prompt the user for a file type.
         (chosen
          (completing-read
           "File type: " type-choices nil t nil nil default)))
    (nth 1 (assoc chosen type-choices))))

(defun deadgrep--read-file-glob ()
  (let*
      ((initial-value
        (cond
         ;; If we already have a glob pattern, edit it.
         ((eq (car-safe deadgrep--file-type) 'glob)
          (cdr deadgrep--file-type))
         ;; If the initial file had a file name of the form
         ;; foo.bar, offer *.bar as the initial glob.
         ((and deadgrep--initial-filename
               (file-name-extension deadgrep--initial-filename))
          (format "*.%s"
                  (file-name-extension deadgrep--initial-filename)))
         (t
          "*")))
       (prompt
        (if (string= initial-value "*")
            ;; Show an example to avoid confusion with regexp syntax.
            "Glob (e.g. *.js): "
          "Glob: "))
       (glob
        (read-from-minibuffer
         prompt
         initial-value)))
    glob))

(defun deadgrep--file-type (button)
  (let ((button-type (button-get button 'file-type)))
    (cond
     ((eq button-type 'all)
      (setq deadgrep--file-type 'all))
     ((eq button-type 'type)
      (setq deadgrep--file-type
            (cons 'type (deadgrep--read-file-type deadgrep--initial-filename))))
     ((eq button-type 'glob)
      (setq deadgrep--file-type (cons 'glob (deadgrep--read-file-glob))))
     (t
      (error "Unknown button type: %S" button-type))))
  (deadgrep-restart))

(define-button-type 'deadgrep-directory
  'action #'deadgrep--directory
  'help-echo "Change base directory")

(defun deadgrep--directory (_button)
  (deadgrep-directory))

(defun deadgrep-directory ()
  "Prompt the user for a new search directory, then restart the search."
  (interactive)
  (setq default-directory
        (expand-file-name
         (read-directory-name "Search files in: ")))
  (rename-buffer
   (deadgrep--buffer-name deadgrep--search-term default-directory)
   t)
  (deadgrep-restart))

(defun deadgrep-parent-directory ()
  "Restart the search in the parent directory."
  (interactive)
  (setq default-directory
        (file-name-directory (directory-file-name default-directory)))
  (rename-buffer
   (deadgrep--buffer-name deadgrep--search-term default-directory)
   t)
  (deadgrep-restart))

(defun deadgrep--button (text type &rest properties)
  ;; `make-text-button' mutates the string to add properties, so copy
  ;; TEXT first.
  (setq text (substring-no-properties text))
  (apply #'make-text-button text nil :type type properties))

(defun deadgrep--arguments (search-term search-type case context)
  "Return a list of command line arguments that we can execute in a shell
to obtain ripgrep results."
  (let (args)
    (push "--color=ansi" args)
    (push "--line-number" args)
    (push "--no-heading" args)
    (push "--no-column" args)
    (push "--with-filename" args)
    (push "--no-config" args)

    (cond
     ((eq search-type 'string)
      (push "--fixed-strings" args))
     ((eq search-type 'words)
      (push "--fixed-strings" args)
      (push "--word-regexp" args))
     ((eq search-type 'regexp))
     (t
      (error "Unknown search type: %s" search-type)))

    (cond
     ((eq case 'smart)
      (push "--smart-case" args))
     ((eq case 'sensitive)
      (push "--case-sensitive" args))
     ((eq case 'ignore)
      (push "--ignore-case" args))
     (t
      (error "Unknown case: %s" case)))

    (cond
     ((eq deadgrep--file-type 'all))
     ((eq (car-safe deadgrep--file-type) 'type)
      (push (format "--type=%s" (cdr deadgrep--file-type)) args))
     ((eq (car-safe deadgrep--file-type) 'glob)
      (push (format "--type-add=custom:%s" (cdr deadgrep--file-type)) args)
      (push "--type=custom" args))
     (t
      (error "Unknown file-type: %S" deadgrep--file-type)))

    (when context
      (push (format "--before-context=%s" (car context)) args)
      (push (format "--after-context=%s" (cdr context)) args))

    (push "--" args)
    (push search-term args)
    (push "." args)

    (nreverse args)))

(defun deadgrep--write-heading ()
  "Write the deadgrep heading with buttons reflecting the current
search settings."
  (let ((start-pos (point))
        (inhibit-read-only t))
    (insert (propertize "Search term: "
                        'face 'deadgrep-meta-face)
            (if (eq deadgrep--search-type 'regexp)
                (deadgrep--propertize-regexp deadgrep--search-term)
              (propertize
               deadgrep--search-term
               'face 'deadgrep-search-term-face))
            " "
            (deadgrep--button "change" 'deadgrep-search-term)
            "\n"
            (propertize "Search type: "
                        'face 'deadgrep-meta-face)

            (if (eq deadgrep--search-type 'string)
                "string"
              (deadgrep--button "string" 'deadgrep-type
                                'search-type 'string))
            " "
            (if (eq deadgrep--search-type 'words)
                "words"
              (deadgrep--button "words" 'deadgrep-type
                                'search-type 'words))
            " "
            (if (eq deadgrep--search-type 'regexp)
                "regexp"
              (deadgrep--button "regexp" 'deadgrep-type
                                'search-type 'regexp))
            "\n"
            (propertize "Case: "
                        'face 'deadgrep-meta-face)
            (if (eq deadgrep--search-case 'smart)
                "smart"
              (deadgrep--button "smart" 'deadgrep-case
                                'case 'smart))
            " "
            (if (eq deadgrep--search-case 'sensitive)
                "sensitive"
              (deadgrep--button "sensitive" 'deadgrep-case
                                'case 'sensitive))
            " "
            (if (eq deadgrep--search-case 'ignore)
                "ignore"
              (deadgrep--button "ignore" 'deadgrep-case
                                'case 'ignore))
            "\n"
            (propertize "Context: "
                        'face 'deadgrep-meta-face)
            (if deadgrep--context
                (deadgrep--button "none" 'deadgrep-context
                                  'context nil)
              "none")
            " "
            (deadgrep--button "before" 'deadgrep-context
                              'context 'before)
            (if deadgrep--context
                (format ":%d" (car deadgrep--context))
              "")
            " "
            (deadgrep--button "after" 'deadgrep-context
                              'context 'after)
            (if deadgrep--context
                (format ":%d" (cdr deadgrep--context))
              "")

            "\n\n"
            (propertize "Directory: "
                        'face 'deadgrep-meta-face)
            (deadgrep--button
             (abbreviate-file-name default-directory)
             'deadgrep-directory)
            (if (get-text-property 0 'deadgrep-overridden default-directory)
                (propertize " (from override)" 'face 'deadgrep-meta-face)
              "")
            "\n"
            (propertize "Files: "
                        'face 'deadgrep-meta-face)
            (if (eq deadgrep--file-type 'all)
                "all"
              (deadgrep--button "all" 'deadgrep-file-type
                                'file-type 'all))
            " "
            (deadgrep--button "type" 'deadgrep-file-type
                              'file-type 'type)
            (if (eq (car-safe deadgrep--file-type) 'type)
                (format ":%s" (cdr deadgrep--file-type))
              "")
            " "
            (deadgrep--button "glob" 'deadgrep-file-type
                              'file-type 'glob)
            (if (eq (car-safe deadgrep--file-type) 'glob)
                (format ":%s" (cdr deadgrep--file-type))
              "")
            "\n\n")
    (put-text-property
     start-pos (point)
     'read-only t)
    (put-text-property
     start-pos (point)
     'front-sticky t)))

;; TODO: could we do this in the minibuffer too?
(defun deadgrep--propertize-regexp (regexp)
  "Given a string REGEXP representing a search term with regular
expression syntax, highlight the metacharacters.
Returns a copy of REGEXP with properties set."
  (setq regexp (copy-sequence regexp))

  ;; See https://docs.rs/regex/1.0.0/regex/#syntax
  (let ((metachars
         ;; Characters that don't match themselves.
         '(?\( ?\) ?\[ ?\] ?\{ ?\} ?| ?. ?+ ?* ?? ?^ ?$))
        ;; Characters that have special regexp meaning when preceded
        ;; with a backslash. This includes things like \b but not
        ;; things like \n.
        (escape-metachars
         '(?A ?b ?B ?d ?D ?p ?s ?S ?w ?W ?z))
        (prev-char nil))
    ;; Put the standard search term face on every character
    ;; individually.
    (dotimes (i (length regexp))
      (put-text-property
       i (1+ i)
       'face 'deadgrep-search-term-face
       regexp))
    ;; Put the metacharacter face on any character that isn't treated
    ;; literally.
    (--each-indexed (string-to-list regexp)
      (cond
       ;; Highlight everything between { and }.
       ((and (eq it ?\{) (not (equal prev-char ?\\)))
        (let ((closing-pos it-index))
          ;; TODO: we have loops like this in several places, factor
          ;; out.
          (while (and (< closing-pos (length regexp))
                      (not (eq (elt regexp closing-pos)
                               ?\})))
            (cl-incf closing-pos))
          ;; Step over the closing }, if we found one.
          (unless (= closing-pos (length regexp))
            (cl-incf closing-pos))
          (put-text-property
           it-index closing-pos
           'face
           'deadgrep-regexp-metachar-face
           regexp)))
       ;; Highlight individual metachars.
       ((and (memq it metachars) (not (equal prev-char ?\\)))
        (put-text-property
         it-index (1+ it-index)
         'face
         'deadgrep-regexp-metachar-face
         regexp))
       ((and (memq it escape-metachars) (equal prev-char ?\\))
        (put-text-property
         (1- it-index) (1+ it-index)
         'face 'deadgrep-regexp-metachar-face
         regexp)))

      (setq prev-char it)))
  regexp)

(defun deadgrep--buffer-name (search-term directory)
  (format "*deadgrep %s %s*"
          (s-truncate 30 search-term)
          (abbreviate-file-name directory)))

(defun deadgrep--buffers ()
  "All the current deadgrep results buffers.
Returns a list ordered by the most recently accessed."
  (--filter (with-current-buffer it
              (eq major-mode 'deadgrep-mode))
            ;; `buffer-list' seems to be ordered by most recently
            ;; visited first.
            (buffer-list)))

(defun deadgrep--buffer (search-term directory initial-filename)
  "Create and initialise a search results buffer."
  (let* ((buf-name (deadgrep--buffer-name search-term directory))
         (buf (get-buffer buf-name)))
    (if buf
        ;; There was already a buffer with this name. Reset its search
        ;; state.
        (with-current-buffer buf
          (deadgrep--stop-and-reset))
      ;; We need to create the buffer, ensure we don't exceed
      ;; `deadgrep-max-buffers' by killing the least recently used.
      (progn
        (when (numberp deadgrep-max-buffers)
          (let* ((excess-buffers (-drop (1- deadgrep-max-buffers)
                                        (deadgrep--buffers))))
            ;; Kill buffers so we have one buffer less than the maximum
            ;; before we create a new one.
            (-each excess-buffers #'kill-buffer)))

        (setq buf (get-buffer-create buf-name))))

    (with-current-buffer buf
      (setq default-directory directory)
      (let ((inhibit-read-only t))
        ;; This needs to happen first, as it clobbers all buffer-local
        ;; variables.
        (deadgrep-mode)
        (erase-buffer)

        (setq deadgrep--search-term search-term)
        (setq deadgrep--current-file nil)
        (setq deadgrep--initial-filename initial-filename))
      (setq buffer-read-only t))
    buf))

(defun deadgrep-cycle-files ()
  "Cycle which files are searched (all / type / glob) and restart the search."
  (interactive)
  (cond
   ((eq deadgrep--file-type 'all)
    (setq deadgrep--file-type
          (cons 'type (deadgrep--read-file-type deadgrep--initial-filename))))
   ((eq (car-safe deadgrep--file-type) 'type)
    (setq deadgrep--file-type (cons 'glob (deadgrep--read-file-glob))))
   ((eq (car-safe deadgrep--file-type) 'glob)
    (setq deadgrep--file-type 'all)))
  (deadgrep-restart))

(defun deadgrep-cycle-search-type ()
  "Cycle the search type (string / words / regexp) and restart the search."
  (interactive)
  (cond
   ((eq deadgrep--search-type 'string) (setq deadgrep--search-type 'words))
   ((eq deadgrep--search-type 'words) (setq deadgrep--search-type 'regexp))
   ((eq deadgrep--search-type 'regexp) (setq deadgrep--search-type 'string)))
  (deadgrep-restart))

(defun deadgrep-cycle-search-case ()
  "Cycle the search case (smart / sensitive / ignore) and restart the search."
  (interactive)
  (cond
   ((eq deadgrep--search-case 'smart) (setq deadgrep--search-case 'sensitive))
   ((eq deadgrep--search-case 'sensitive) (setq deadgrep--search-case 'ignore))
   ((eq deadgrep--search-case 'ignore) (setq deadgrep--search-case 'smart)))
  (deadgrep-restart))

(defvar deadgrep-mode-map
  (let ((map (make-sparse-keymap)))
    (define-key map (kbd "RET") #'deadgrep-visit-result)
    (define-key map (kbd "o") #'deadgrep-visit-result-other-window)
    ;; TODO: we should still be able to click on buttons.

    (define-key map (kbd "S") #'deadgrep-search-term)
    (define-key map (kbd "T") #'deadgrep-cycle-search-type)
    (define-key map (kbd "C") #'deadgrep-cycle-search-case)
    (define-key map (kbd "F") #'deadgrep-cycle-files)
    (define-key map (kbd "D") #'deadgrep-directory)
    (define-key map (kbd "^") #'deadgrep-parent-directory)
    (define-key map (kbd "g") #'deadgrep-restart)
    (define-key map (kbd "I") #'deadgrep-incremental)

    ;; TODO: this should work when point is anywhere in the file, not
    ;; just on its heading.
    (define-key map (kbd "TAB") #'deadgrep-toggle-file-results)

    ;; Keybinding chosen to match `kill-compilation'.
    (define-key map (kbd "C-c C-k") #'deadgrep-kill-process)

    (define-key map (kbd "n") #'deadgrep-forward-match)
    (define-key map (kbd "p") #'deadgrep-backward-match)
    (define-key map (kbd "M-n") #'deadgrep-forward-filename)
    (define-key map (kbd "M-p") #'deadgrep-backward-filename)

    map)
  "Keymap for `deadgrep-mode'.")

(defvar deadgrep-edit-mode-map
  (let ((map (make-sparse-keymap)))
    (define-key map (kbd "RET") #'deadgrep-visit-result)
    map)
  "Keymap for `deadgrep-edit-mode'.")

(define-derived-mode deadgrep-mode special-mode
  '("Deadgrep" (:eval (spinner-print deadgrep--spinner)))
  "Major mode for deadgrep results buffers."
  (remove-hook 'after-change-functions #'deadgrep--propagate-change t))

(defun deadgrep--find-file (path)
  "Open PATH in a buffer, and return a cons cell
\(BUF . OPENED). OPENED is nil if there was already a buffer for
this path."
  (let* ((initial-buffers (buffer-list))
         (opened nil)
         ;; Skip running find-file-hook since it may prompt the user.
         (find-file-hook nil)
         ;; If we end up opening a buffer, don't bother with file
         ;; variables. It prompts the user, and we discard the buffer
         ;; afterwards anyway.
         (enable-local-variables nil)
         ;; Bind `auto-mode-alist' to nil, so we open the buffer in
         ;; `fundamental-mode' if it isn't already open.
         (auto-mode-alist nil)
         ;; Use `find-file-noselect' so we still decode bytes from the
         ;; underlying file.
         (buf (find-file-noselect path)))
    (unless (-contains-p initial-buffers buf)
      (setq opened t))
    (cons buf opened)))

(defun deadgrep--propagate-change (beg end length)
  "Repeat the last modification to the results buffer in the
underlying file."
  ;; We should never be called outside an edit buffer, but be
  ;; defensive. Buggy functions in change hooks are painful.
  (when (eq major-mode 'deadgrep-edit-mode)
    (save-mark-and-excursion
      (goto-char beg)
      (-let* ((column (+ (deadgrep--current-column) length))
              (filename (deadgrep--filename))
              (line-number (deadgrep--line-number))
              ((buf . opened) (deadgrep--find-file filename))
              (inserted (buffer-substring beg end)))
        (with-current-buffer buf
          (save-mark-and-excursion
            (save-restriction
              (widen)
              (goto-char
               (deadgrep--buffer-position line-number column))
<<<<<<< Updated upstream
              (delete-char (- length))
              (insert inserted)))
||||||| Stash base
              (if (> length 0)
                  ;; We removed chars in the results buffer, so remove.
                  (delete-char (- length))
                ;; We inserted something, so insert the same chars.
                (insert inserted))))
=======
              (if (> length 0)
                  ;; We removed chars in the results buffer, so remove.
                  (delete-char (- length))
                ;; We inserted something, so insert the same chars.
                ;; BUG: errors when file is freshly opened.
                )
              (insert inserted)))
>>>>>>> Stashed changes
          ;; If we weren't visiting this file before, just save it and
          ;; close it.
          (when opened
            (basic-save-buffer)
            (kill-buffer buf)))))))

(defcustom deadgrep-edit-mode-hook nil
  "Called after `deadgrep-edit-mode' is turned on."
  :type 'hook
  :group 'deadgrep)

(defun deadgrep-edit-mode ()
  "Major mode for editing the results files directly from a
deadgrep results buffer.

\\{deadgrep-edit-mode-map}"
  (interactive)
  (unless (eq major-mode 'deadgrep-mode)
    (user-error "deadgrep-edit-mode only works in deadgrep result buffers"))
  (when deadgrep--running
    (user-error "Can't edit a results buffer until the search is finished"))
  ;; We deliberately don't use `define-derived-mode' here because we
  ;; want to check the previous value of `major-mode'. Initialise the
  ;; major mode manually.
  (delay-mode-hooks
    (kill-all-local-variables)
    (setq major-mode 'deadgrep-edit-mode)
    (setq mode-name
          '(:propertize "Deadgrep:Edit" face mode-line-emphasis))
    (use-local-map deadgrep-edit-mode-map)
    ;; Done major mode manual initialise (copied from `define-derived-mode').

    ;; Allow editing, and propagate changes.
    (setq buffer-read-only nil)
    (add-hook 'after-change-functions #'deadgrep--propagate-change nil t)

    (message "Now editing, use `M-x deadgrep-mode' when finished"))

  (run-mode-hooks 'deadgrep-edit-mode-hook))

(defun deadgrep--current-column ()
  "Get the current column position in char terms.
This treats tabs as 1 and ignores the line numbers in the results
buffer."
  (let* ((line-start (line-beginning-position))
         (line-number
          (get-text-property line-start 'deadgrep-line-number))
         (line-number-width
          (max deadgrep--position-column-width
               (length (number-to-string line-number))))
         (char-count 0))
    (save-excursion
      (while (not (equal (point) line-start))
        (cl-incf char-count)
        (backward-char 1)))
    (max
     (- char-count line-number-width)
     0)))

(defun deadgrep--flash-column-offsets (start end)
  "Temporarily highlight column offset from START to END."
  (let* ((line-start (line-beginning-position))
         (overlay (make-overlay
                   (+ line-start start)
                   (+ line-start end))))
    (overlay-put overlay 'face 'highlight)
    (run-with-timer 1.0 nil 'delete-overlay overlay)))

(defun deadgrep--match-face-p (pos)
  "Is there a match face at POS?"
  (eq (get-text-property pos 'face) 'deadgrep-match-face))

(defun deadgrep--match-positions ()
  "Return a list of indexes of the current line's matches."
  (let (positions)
    (save-excursion
      (beginning-of-line)

      (let* ((line-number
              (get-text-property (point) 'deadgrep-line-number))
             (line-number-width
              (max deadgrep--position-column-width
                   (length (number-to-string line-number))))
             (i 0)
             (start-pos 0)
             (line-end-pos (line-end-position)))

        (forward-char line-number-width)

        (while (<= (point) line-end-pos)
          ;; If we've just entered a match, record the start position.
          (when (and (deadgrep--match-face-p (point))
                     (not (deadgrep--match-face-p (1- (point)))))
            (setq start-pos i))
          ;; If we've just left a match, record the match range.
          (when (and (not (deadgrep--match-face-p (point)))
                     (deadgrep--match-face-p (1- (point))))
            (push (list start-pos i) positions))

          (setq i (1+ i))
          (forward-char 1))))

    (nreverse positions)))

(defun deadgrep--buffer-position (line-number column-offset)
  "Return the position equivalent to LINE-NUMBER at COLUMN-OFFSET
in the current buffer."
  (save-excursion
    (save-restriction
      (widen)
      (goto-char (point-min))
      (forward-line (1- line-number))
      (forward-char column-offset)

      (point))))

(defun deadgrep--filename (&optional pos)
  "Get the filename of the result at point POS.
If POS is nil, use the beginning position of the current line."
  (get-text-property (or pos (line-beginning-position)) 'deadgrep-filename))

(defun deadgrep--line-number ()
  "Get the filename of the result at point."
  (get-text-property (line-beginning-position) 'deadgrep-line-number))

(defun deadgrep--visit-result (open-fn)
  "Goto the search result at point."
  (interactive)
  (let* ((pos (line-beginning-position))
         (file-name (deadgrep--filename))
         (line-number (deadgrep--line-number))
         (column-offset (when line-number (deadgrep--current-column)))
         (match-positions (when line-number (deadgrep--match-positions))))
    (when file-name
      (when overlay-arrow-position
        (set-marker overlay-arrow-position nil))
      ;; Show an arrow next to the last result viewed. This is
      ;; consistent with `compilation-next-error-function' and also
      ;; useful with `deadgrep-visit-result-other-window'.
      (setq overlay-arrow-position (copy-marker pos))
      (setq next-error-last-buffer (current-buffer))

      (funcall open-fn file-name)
      (goto-char (point-min))

      (when line-number
        (-let [destination-pos (deadgrep--buffer-position
                                line-number column-offset)]
          ;; Put point on the position of the match, widening the
          ;; buffer if necessary.
          (when (or (< destination-pos (point-min))
                    (> destination-pos (point-max)))
            (widen))
          (goto-char destination-pos)

          ;; Temporarily highlight the parts of the line that matched
          ;; the search term.
          (-each match-positions
            (-lambda ((start end))
              (deadgrep--flash-column-offsets start end))))))))

(defun deadgrep-visit-result-other-window ()
  "Goto the search result at point, opening in another window."
  (interactive)
  (deadgrep--visit-result #'find-file-other-window))

(defun deadgrep-visit-result ()
  "Goto the search result at point."
  (interactive)
  (deadgrep--visit-result #'find-file))

(defvar-local deadgrep--hidden-files nil
  "An alist recording which files currently have their lines
hidden in this deadgrep results buffer.

Keys are interned filenames, so they compare with `eq'.")

(defun deadgrep-toggle-file-results ()
  "Show/hide the results of the file at point."
  (interactive)
  (let* ((file-name (deadgrep--filename))
         (line-number (deadgrep--line-number)))
    (when (and file-name (not line-number))
      ;; We're on a file heading.
      (if (alist-get (intern file-name) deadgrep--hidden-files)
          (deadgrep--show)
        (deadgrep--hide)))))

(defun deadgrep--show ()
  (-let* ((file-name (deadgrep--filename))
          ((start-pos end-pos) (alist-get (intern file-name) deadgrep--hidden-files)))
    (remove-overlays start-pos end-pos 'invisible t)
    (setf (alist-get (intern file-name) deadgrep--hidden-files)
          nil)))

(defun deadgrep--hide ()
  "Hide the file results immediately after point."
  (save-excursion
    (let* ((file-name (deadgrep--filename))
           (start-pos
            (progn
              (forward-line)
              (point)))
           (end-pos
            (progn
              (while (and
                      (or (get-text-property (point) 'deadgrep-line-number)
                          (get-text-property (point) 'deadgrep-separator))
                      (not (bobp)))
                (forward-line))
              ;; Step over the newline.
              (1+ (point))))
           (o (make-overlay start-pos end-pos)))
      (overlay-put o 'invisible t)
      (setf (alist-get (intern file-name) deadgrep--hidden-files)
            (list start-pos end-pos)))))

(defun deadgrep--interrupt-process ()
  "Gracefully stop the rg process, synchronously."
  (-when-let (proc (get-buffer-process (current-buffer)))
    ;; Ensure that our process filter is not called again.
    (set-process-filter proc #'ignore)

    (interrupt-process proc)
    ;; Wait for the process to terminate, so we know that
    ;; `deadgrep--process-sentinel' has been called.
    (while (process-live-p proc)
      ;; `redisplay' can trigger process filters or sentinels.
      (redisplay)
      (sleep-for 0.1))))

(defun deadgrep-kill-process ()
  "Kill the deadgrep process associated with the current buffer."
  (interactive)
  (if (get-buffer-process (current-buffer))
      (deadgrep--interrupt-process)
    (message "No process running.")))

(defun deadgrep--item-p (pos)
  "Is there something at POS that we can interact with?"
  (or (button-at pos)
      (deadgrep--filename pos)))

(defun deadgrep--filename-p (pos)
  "Is there a filename at POS that we can interact with?"
  (eq (get-text-property pos 'face) 'deadgrep-filename-face))

(defun deadgrep--move (forward-p)
  "Move to the next item.
This will either be a button, a filename, or a search result."
  (interactive)
  (let ((pos (point)))
    ;; If point is initially on an item, move past it.
    (while (and (deadgrep--item-p pos)
                (if forward-p
                    (< pos (point-max))
                  (> pos (point-min))))
      (if forward-p
          (cl-incf pos)
        (cl-decf pos)))
    ;; Find the next item.
    (while (and (not (deadgrep--item-p pos))
                (if forward-p
                    (< pos (point-max))
                  (> pos (point-min))))
      (if forward-p
          (cl-incf pos)
        (cl-decf pos)))
    ;; Regardless of direction, ensure point is at the beginning of
    ;; the item.
    (while (and (if forward-p
                    (< pos (point-max))
                  (> pos (point-min)))
                (deadgrep--item-p (1- pos)))
      (cl-decf pos))
    ;; If we reached an item (we aren't at the first/last item), then
    ;; go to it.
    (when (deadgrep--item-p pos)
      (goto-char pos))))

(defun deadgrep-forward ()
  "Move forward to the next item.
This will either be a button, a filename, or a search result. See
also `deadgrep-forward-match'."
  (interactive)
  (deadgrep--move t))

(defun deadgrep-backward ()
  "Move backward to the previous item.
This will either be a button, a filename, or a search result. See
also `deadgrep-backward-match'."
  (interactive)
  (deadgrep--move nil))

(defun deadgrep-forward-filename ()
  "Move forward to the next filename."
  (interactive)
  (deadgrep--move-match t 'deadgrep-filename-face))

(defun deadgrep-backward-filename ()
  "Move backward to the previous filename."
  (interactive)
  (deadgrep--move-match nil 'deadgrep-filename-face))

(defun deadgrep--move-match (forward-p face)
  "Move point to the beginning of the next/previous match."
  (interactive)
  (let ((start-pos (point)))
    ;; Move over the current match, if we were already on one.
    (while (eq (get-text-property (point) 'face)
               face)
      (if forward-p (forward-char) (backward-char)))
    (condition-case nil
        (progn
          ;; Move point to the next match, which may be on the same line.
          (while (not (eq (get-text-property (point) 'face)
                          face))
            (if forward-p (forward-char) (backward-char)))
          ;; Ensure point is at the beginning of the match.
          (unless forward-p
            (while (eq (get-text-property (point) 'face)
                       face)
              (backward-char))
            (forward-char)))
      ;; Don't move point beyond the last match. However, it's still
      ;; useful to signal that we're at the end, so users can use this
      ;; command with macros and terminate when it's done.
      (beginning-of-buffer
       (goto-char start-pos)
       (signal 'beginning-of-buffer nil))
      (end-of-buffer
       (goto-char start-pos)
       (signal 'end-of-buffer nil)))))

(defun deadgrep-forward-match ()
  "Move point forward to the beginning of next match.
Note that a result line may contain more than one match, or zero
matches (if the result line has been truncated)."
  (interactive)
  (deadgrep--move-match t 'deadgrep-match-face))

(defun deadgrep-backward-match ()
  "Move point backward to the beginning of previous match."
  (interactive)
  (deadgrep--move-match nil 'deadgrep-match-face))

(defun deadgrep--start (search-term search-type case)
  "Start a ripgrep search."
  (setq deadgrep--spinner (spinner-create 'progress-bar t))
  (setq deadgrep--running t)
  (spinner-start deadgrep--spinner)
  (let* ((args (deadgrep--arguments
                search-term search-type case
                deadgrep--context))
         (process
          (apply #'start-file-process
                 (format "rg %s" search-term)
                 (current-buffer)
                 deadgrep-executable
                 args)))
    (setq deadgrep--debug-command
          (format "%s %s" deadgrep-executable (s-join " " args)))
    (set-process-filter process #'deadgrep--process-filter)
    (set-process-sentinel process #'deadgrep--process-sentinel)))

(defun deadgrep--stop-and-reset ()
  "Terminate the current search and reset any search state."
  ;; Stop the old search, so we don't carry on inserting results from
  ;; the last thing we searched for.
  (deadgrep--interrupt-process)

  (let ((inhibit-read-only t))
    ;; Reset UI: remove results, reset items hidden by TAB, and arrow
    ;; position.
    (erase-buffer)
    (setq deadgrep--hidden-files nil)
    (when overlay-arrow-position
      (set-marker overlay-arrow-position nil))

    ;; Reset intermediate search state.
    (setq deadgrep--current-file nil)
    (setq deadgrep--spinner nil)
    (setq deadgrep--remaining-output nil)
    (setq deadgrep--current-file nil)
    (setq deadgrep--debug-first-output nil)
    (setq deadgrep--imenu-alist nil)))

(defun deadgrep-restart ()
  "Re-run ripgrep with the current search settings."
  (interactive)
  ;; If we haven't started yet, start the search if we've been called
  ;; by the user.
  (when (and deadgrep--postpone-start
             (called-interactively-p 'interactive))
    (setq deadgrep--postpone-start nil))

  (deadgrep--stop-and-reset)

  (let ((start-point (point))
        (inhibit-read-only t))
    (deadgrep--write-heading)
    ;; If the point was in the heading, ensure that we restore its
    ;; position.
    (goto-char (min (point-max) start-point))

    (if deadgrep--postpone-start
        (deadgrep--write-postponed)
      (deadgrep--start
       deadgrep--search-term
       deadgrep--search-type
       deadgrep--search-case))))

(defun deadgrep--read-search-term ()
  "Read a search term from the minibuffer.
If region is active, return that immediately.  Otherwise, prompt
for a string, offering the current word as a default."
  (let (search-term)
    (if (use-region-p)
        (progn
          (setq search-term
                (buffer-substring-no-properties (region-beginning) (region-end)))
          (deactivate-mark))
      (let* ((sym (symbol-at-point))
             (sym-name (when sym
                         (substring-no-properties (symbol-name sym))))
             ;; TODO: prompt should say search string or search regexp
             ;; as appropriate.
             (prompt
              (deadgrep--search-prompt sym-name)))
        (setq search-term
              (read-from-minibuffer
               prompt nil nil nil 'deadgrep-history sym-name))
        (when (equal search-term "")
          (setq search-term sym-name))))
    (unless (equal (car deadgrep-history) search-term)
      (push search-term deadgrep-history))
    search-term))

(defun deadgrep-incremental ()
  (interactive)
  (catch 'break
    (let ((deadgrep--incremental-active t)
          (search-term (or deadgrep--search-term "")))
      (while t
        (let ((next-char
               (read-char
                ;; TODO: Use the same prompt format as other search options.
                (format "%s %s"
                        (apply #'propertize "Incremental Search (RET when done):" minibuffer-prompt-properties)
                        search-term))))
          (cond
           ((eq next-char ?\C-m)
            (throw 'break nil))
           ((eq next-char ?\C-?)
            (setq search-term (s-left -1 search-term)))
           (t
            (setq search-term (concat search-term (list next-char))))))
        (when (> (length search-term) 2)
          (setq deadgrep--search-term search-term)
          (deadgrep-restart))))))


(defun deadgrep--normalise-dirname (path)
  "Expand PATH and ensure that it doesn't end with a slash.
If PATH is remote path, it is not expanded."
  (directory-file-name (if (file-remote-p path)
                           path
                         (let (file-name-handler-alist)
                           (expand-file-name path)))))

(defun deadgrep--lookup-override (path)
  "If PATH is present in `deadgrep-project-root-overrides',
return the overridden value.
Otherwise, return PATH as is."
  (let* ((normalised-path (deadgrep--normalise-dirname path))
         (override
          (-first
           (-lambda ((original . _))
             (equal (deadgrep--normalise-dirname original) normalised-path))
           deadgrep-project-root-overrides)))
    (when override
      (setq path (cdr override))
      (unless (stringp path)
        (user-error "Bad override: expected a path string, but got: %S" path))
      (setq path (propertize path 'deadgrep-overridden t)))
    path))

(defun deadgrep--project-root ()
  "Guess the project root of the given FILE-PATH."
  (let ((root default-directory)
        (project (project-current)))
    (when project
      (cond ((and (fboundp 'project-root)
                  (>= emacs-major-version 28))
             ;; `project-root' was added in Emacs 28, but projectile
             ;; defines it unconditionally.
             (setq root (project-root project)))
            (t
             ;; Older Emacsen.
             (-when-let (roots (project-roots project))
               (setq root (car roots))))))
    (when root
      (deadgrep--lookup-override root))))

(defun deadgrep--write-postponed ()
  "Write a message to the current buffer informing the user that
deadgrep is ready but not yet searching."
  (let* ((inhibit-read-only t)
         (restart-key
          (where-is-internal #'deadgrep-restart deadgrep-mode-map t)))
    (save-excursion
      (goto-char (point-max))
      (insert
       (format "Press %s to start the search."
               (key-description restart-key))))))

(defun deadgrep--create-imenu-index ()
  "Create `imenu' index for matched files."
  (when deadgrep--imenu-alist
    (list (cons "Files" (reverse deadgrep--imenu-alist)))))

;;;###autoload
(defun deadgrep (search-term &optional directory)
  "Start a ripgrep search for SEARCH-TERM in DIRECTORY.

If not provided, DIR defaults to the directory as determined by
`deadgrep-project-root-function'.

See also `deadgrep-project-root-overrides'.

If called with a prefix argument, create the results buffer but
don't actually start the search."
  (interactive (list (deadgrep--read-search-term)))
  (let* ((dir (or directory
                  (funcall deadgrep-project-root-function)))
         (buf (deadgrep--buffer
               search-term
               dir
               (or deadgrep--initial-filename
                   (buffer-file-name))))
         (last-results-buf (car-safe (deadgrep--buffers)))
         prev-search-type
         prev-search-case)
    ;; Find out what search settings were used last time.
    (when last-results-buf
      (with-current-buffer last-results-buf
        (setq prev-search-type deadgrep--search-type)
        (setq prev-search-case deadgrep--search-case)))

    (funcall deadgrep-display-buffer-function buf)

    (with-current-buffer buf
      (setq imenu-create-index-function #'deadgrep--create-imenu-index)
      (setq next-error-function #'deadgrep-next-error)

      ;; If we have previous search settings, apply them to our new
      ;; search results buffer.
      (when last-results-buf
        (setq deadgrep--search-type prev-search-type)
        (setq deadgrep--search-case prev-search-case))

      (deadgrep--write-heading)

      (if current-prefix-arg
          ;; Don't start the search, just create the buffer and inform
          ;; the user how to start when they're ready.
          (progn
            (setq deadgrep--postpone-start t)
            (deadgrep--write-postponed))
        ;; Start the search immediately.
        (deadgrep--start
         search-term
         deadgrep--search-type
         deadgrep--search-case)))))

(defun deadgrep-next-error (arg reset)
  "Move to the next error.
If ARG is given, move by that many errors.

This is intended for use with `next-error-function', which see."
  (when reset
    (goto-char (point-min)))
  (beginning-of-line)
  (let ((direction (> arg 0)))
    (setq arg (abs arg))

    (while (and
            (not (zerop arg))
            (not (eobp)))
      (if direction
          (forward-line 1)
        (forward-line -1))
      ;; If we are on a specific result (not a heading), we have a line
      ;; number.
      (when (get-text-property (point) 'deadgrep-line-number)
        (cl-decf arg))))
  (deadgrep-visit-result-other-window))

(defun deadgrep-debug ()
  "Show a buffer with some debug information about the current search."
  (interactive)
  (unless (eq major-mode 'deadgrep-mode)
    (user-error "deadgrep-debug should be run in a deadgrep results buffer"))

  (let ((command deadgrep--debug-command)
        (output deadgrep--debug-first-output)
        (buf (get-buffer-create "*deadgrep debug*"))
        (inhibit-read-only t))
    (pop-to-buffer buf)
    (erase-buffer)
    (special-mode)
    (setq buffer-read-only t)

    (insert
     (propertize
      "About your environment:\n"
      'face 'deadgrep-filename-face)
     (format "Platform: %s\n" system-type)
     (format "Emacs version: %s\n" emacs-version)
     (format "Command: %s\n" command)
     (format "default-directory: %S\n" default-directory)
     (format "exec-path: %S\n" exec-path)
     (if (boundp 'tramp-remote-path)
     (format "tramp-remote-path: %S\n" tramp-remote-path)
       "")
     (propertize
      "\nInitial output from ripgrep:\n"
      'face 'deadgrep-filename-face)
     (format "%S" output)
     (propertize
      "\n\nPlease file bugs at https://github.com/Wilfred/deadgrep/issues/new"
      'face 'deadgrep-filename-face))))

(defun deadgrep-kill-all-buffers ()
  "Kill all open deadgrep buffers."
  (interactive)
  (dolist (buffer (deadgrep--buffers))
    (kill-buffer buffer)))

(provide 'deadgrep)
;;; deadgrep.el ends here

;; Local Variables:
;; byte-compile-warnings: (not obsolete)
;; End:
