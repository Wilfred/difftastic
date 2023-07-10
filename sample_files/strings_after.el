;;; hack-mode.el --- Major mode for the Hack programming language -*- lexical-binding: t -*-

;; Copyright (c) Facebook, Inc. and its affiliates. All Rights Reserved.

;; This program is free software: you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with this program.  If not, see <https://www.gnu.org/licenses/>.

;; Author: John Allen <jallen@fb.com>, Wilfred Hughes <me@wilfred.me.uk>
;; Version: 1.1.0
;; Package-Requires: ((emacs "25.1") (s "1.11.0"))
;; URL: https://github.com/hhvm/hack-mode

;;; Commentary:
;;
;; Implements `hack-mode' for the Hack programming language.  This
;; includes basic support for highlighting and indentation.
;;

;;; Code:
(require 's)

(defgroup hack nil
  "Major mode `hack-mode' for editing Hack code."
  :prefix "hack-"
  :group 'languages)

(defcustom hack-client-program-name "hh_client"
  "The command to run to communicate with hh_server."
  :type 'string
  :group 'hack-mode)

(defcustom hack-format-on-save nil
  "Format the current buffer on save."
  :type 'boolean
  :safe #'booleanp
  :group 'hack-mode)

(defcustom hack-hackfmt-name "hackfmt"
  "The command to run to format code."
  :type 'string
  :group 'hack-mode)

(defcustom hack-indent-offset 2
  "Indentation amount (in spaces) for Hack code."
  :safe #'integerp
  :type 'integer
  :group 'hack-mode)

(defface hack-xhp-tag
  '((t . (:inherit font-lock-function-name-face)))
  "Face used to highlight XHP tags in `hack-mode' buffers."
  :group 'hack-mode)

(defun hack--propertize-xhp ()
  "Put syntax properties on XHP blocks."
  (let* ((start-pos (match-beginning 1))
         (ppss (syntax-ppss start-pos))
         (in-comment (nth 4 ppss)))
    (unless in-comment
      (hack--forward-parse-xhp start-pos nil)
      ;; Point is now at the end of the XHP section.
      (let ((end-pos (point)))
        (goto-char start-pos)
        ;; Ensure that ' is not treated as a string delimiter, unless
        ;; we're in an XHP interpolated region.
        (while (search-forward "'" end-pos t)
          (let* ((ppss (syntax-ppss))
                 (paren-pos (nth 1 ppss)))
            (when (or (null paren-pos)
                      (> start-pos paren-pos))
              (put-text-property (1- (point)) (point)
                                 'syntax-table
                                 (string-to-syntax ".")))))
        ;; We need to leave point after where we started, or we get an
        ;; infinite loop.
        (goto-char end-pos)))))

(defun hack--propertize-heredoc ()
  "Put `syntax-table' text properties on heredoc and nowdoc string literals.

See <http://php.net/manual/en/language.types.string.php>."
  ;; Point starts just after the <<<, so the start position is three
  ;; chars back.
  (let ((start-pos (match-beginning 0))
        (identifier (match-string 1)))
    ;; Nowdoc literals have the form
    ;; $x <<<'FOO'
    ;; bar
    ;; FOO; // unquoted at end.
    (setq identifier
          (s-chop-suffix "'" (s-chop-prefix "'" identifier)))
    ;; The closing identifier must be at the beginning of a line.
    (search-forward (format "\n%s" identifier) nil t)

    ;; Mark the beginning < as a string beginning, so we don't think
    ;; any ' or " inside the heredoc are string delimiters.
    (put-text-property start-pos (1+ start-pos)
                       'syntax-table
                       (string-to-syntax "|"))
    (put-text-property (1- (point)) (point)
                       'syntax-table
                       (string-to-syntax "|"))))

(defun hack--propertize-xhp-class-name ()
  "Ensure that : and - in XHP class names are marked as symbol constituents.

Note that the first : is excluded, so :foo:bar is considered to
be punctuation : followed by symbol foo:bar. This ensures we
match XHP usage, which looks like <foo:bar>."
  (let ((start (match-beginning 1))
        (end (match-end 1)))
    (save-excursion
      (goto-char (1+ start))
      (while (re-search-forward (rx (or ":" "-")) end t)
        (put-text-property (1- (point)) (point)
		           'syntax-table (string-to-syntax "_"))))))

(eval-when-compile
  ;; https://www.php.net/manual/en/language.types.string.php#language.types.string.syntax.heredoc
  (defconst hack--heredoc-regex
    (rx
     "<<<"
     (group
      (or
       (+ (or (syntax word) (syntax symbol)))
       ;; https://www.php.net/manual/en/language.types.string.php#language.types.string.syntax.nowdoc
       (seq "'" (+ (or (syntax word) (syntax symbol))) "'")))
     "\n"))

  (defconst hack--header-regex
    ;; <?hh can only occur on the first line. The only thing it may be preceded
    ;; by is a shebang. It's compulsory, except in .hack files. See hphp.ll.
    (rx
     (or
      buffer-start
      (seq "#!" (* not-newline) "\n"))
     (group "<?hh")
     ;; Match // strict if it's present.
     ;; See full_fidelity_parser.ml which calls FileInfo.parse_mode.
     (? (0+ space)
	"//"
	(0+ space)
	(group (or "strict" "partial" "experimental"))
	(or space "\n"))))

  (defconst hack--xhp-class-name-regex
    ;; Based on is_next_xhp_class_name in full_fidelity_lexer.ml.
    (rx
     (or whitespace line-start)
     (group
      ":"
      (+ (or (syntax word) (syntax symbol) ":" "-"))))
    "Regex used to match :foo-bar:baz class names.")

  ;; TODO: Check against next_xhp_element_token in full_fidelity_lexer.ml
  (defconst hack-xhp-start-regex
    (rx (or
         (seq symbol-start "return" symbol-end)
         bol
         "==>"
         "?"
         "="
         "(")
        (* space)
        (group "<" (not (any ?< ?\\ ??))))
    "The regex used to match the start of an XHP expression."))

(defun hack-font-lock-xhp (limit)
  "Search up to LIMIT for an XHP expression.
If we find one, move point to its end, and set match data."
  (let ((start-pos nil)
        (end-pos nil))
    (save-excursion
      (while (and (not end-pos)
                  (re-search-forward hack-xhp-start-regex limit t))
        ;; Ignore XHP in comments.
        (unless (nth 4 (syntax-ppss (match-beginning 1)))
          (setq start-pos (match-beginning 1))
          (hack--forward-parse-xhp start-pos limit t)
          (setq end-pos (point)))))
    (when end-pos
      (set-match-data (list start-pos end-pos))
      (goto-char end-pos))))

(defun hack--propertize-lt ()
  "Ensure < is not treated a < delimiter in other syntactic contexts."
  (let ((start (1- (point))))
    (when (or (looking-at "?hh")
              ;; Ignore left shift operators 1 << 2.
              (looking-at "< ")
              ;; If there's a following space, assume it's 1 < 2.
              (looking-at " "))
      (put-text-property start (1+ start)
		         'syntax-table (string-to-syntax ".")))))

(defun hack-->-paired-p (pos)
  "Return t if the > at POS is a paired delimiter.

E.g. Foo<int> has a paired delimiter, 1 > 2 does not."
  (when (> pos (1+ (point-min)))
    (let ((prev-char (char-before pos))
          (prev-prev-char (char-before (1- pos)))
          (next-char (char-after (1+ pos))))
      (not
       (or
        ;; If there's a preceding space, we assume it's 1 > 2 rather
        ;; than vec < int > with excess space.
        (eq prev-char ?\ )
        ;; 1 >> 2, looking at the second >.
        (and (eq prev-char ?>) (eq prev-prev-char ?\ ))
        ;; $foo->bar and 1<=>2
        (memq prev-char (list ?= ?-))
        ;; 1>=2
        (eq next-char ?=))))))

(defun hack--propertize-gt ()
  "Ensure > in -> or => isn't treated as a > delimiter."
  (unless (hack-->-paired-p (1- (point)))
    (put-text-property (1- (point)) (point)
		       'syntax-table (string-to-syntax "."))))

(defconst hack--syntax-propertize-function
  (syntax-propertize-rules
   ;; Heredocs, e.g.
   ;; $x = <<<EOT
   ;; foo bar
   ;; EOT;
   (hack--heredoc-regex
    (0 (ignore (hack--propertize-heredoc))))
   (hack--xhp-class-name-regex
    (0 (ignore (hack--propertize-xhp-class-name))))
   (hack-xhp-start-regex
    (0 (ignore (hack--propertize-xhp))))
   ("<"
    (0 (ignore (hack--propertize-lt))))
   (">"
    (0 (ignore (hack--propertize-gt))))))

(defun hack-font-lock-fallthrough (limit)
  "Search for FALLTHROUGH comments."
  (let ((case-fold-search nil)
	(found-pos nil)
	(match-data nil))
    ;; FALLTHROUGH must start with //, and can have any text afterwards. See
    ;; full_fidelity_lexer.ml.
    (save-excursion
      (while (and (not found-pos)
		  (search-forward "FALLTHROUGH" limit t))
	(let* ((ppss (syntax-ppss))
	       (in-comment (nth 4 ppss))
	       (comment-start (nth 8 ppss)))
	  (when in-comment
	    (save-excursion
	      (goto-char comment-start)
	      (when (re-search-forward
		     (rx point "//" (0+ whitespace) (group "FALLTHROUGH"))
		     limit t)
		(setq found-pos (point))
		(setq match-data (match-data))))))))
    (when found-pos
      (set-match-data match-data)
      (goto-char found-pos))))

(defun hack-font-lock-unsafe (limit)
  "Search for UNSAFE comments."
  (let ((case-fold-search nil)
	(found-pos nil)
	(match-data nil))
    ;; UNSAFE must start with //, and can have any text afterwards. See
    ;; full_fidelity_lexer.ml.
    (save-excursion
      (while (and (not found-pos)
		  (search-forward "UNSAFE" limit t))
	(let* ((ppss (syntax-ppss))
	       (in-comment (nth 4 ppss))
	       (comment-start (nth 8 ppss)))
	  (when in-comment
	    (save-excursion
	      (goto-char comment-start)
	      (when (re-search-forward
		     (rx point "//" (0+ whitespace) (group "UNSAFE"))
		     limit t)
		(setq found-pos (point))
		(setq match-data (match-data))))))))
    (when found-pos
      (set-match-data match-data)
      (goto-char found-pos))))

(defun hack-font-lock-unsafe-expr (limit)
  "Search for UNSAFE_EXPR comments."
  (let ((case-fold-search nil)
	(found-pos nil)
	(match-data nil))
    ;; UNSAFE_EXPR must start with /*, and can have any text afterwards. See
    ;; full_fidelity_lexer.ml.
    (save-excursion
      (while (and (not found-pos)
		  (search-forward "UNSAFE_EXPR" limit t))
	(let* ((ppss (syntax-ppss))
	       (in-comment (nth 4 ppss))
	       (comment-start (nth 8 ppss)))
	  (when in-comment
	    (save-excursion
	      (goto-char comment-start)
	      (when (re-search-forward
		     (rx point "/*" (0+ whitespace) (group "UNSAFE_EXPR"))
		     limit t)
		(setq found-pos (point))
		(setq match-data (match-data))))))))
    (when found-pos
      (set-match-data match-data)
      (goto-char found-pos))))

(defun hack-font-lock-fixme (limit)
  "Search for HH_FIXME comments."
  (let ((case-fold-search nil)
	(found-pos nil)
	(match-data nil))
    ;; HH_FIXME must start with /*, see full_fidelity_lexer.ml. The
    ;; format is matched by scour_comments in full_fidelity_ast.ml,
    ;; using, the ignore_error regex defined in that file.
    (save-excursion
      (while (and (not found-pos)
		  (search-forward "HH_FIXME" limit t))
	(let* ((ppss (syntax-ppss))
	       (in-comment (nth 4 ppss))
	       (comment-start (nth 8 ppss)))
	  (when in-comment
	    (save-excursion
	      (goto-char comment-start)
	      (when (re-search-forward
		     (rx point "/*" (0+ whitespace)
			 (group "HH_FIXME" (0+ whitespace) "[" (+ digit) "]"))
		     limit t)
		(setq found-pos (point))
		(setq match-data (match-data))))))))
    (when found-pos
      (set-match-data match-data)
      (goto-char found-pos))))

(defun hack-font-lock-ignore-error (limit)
  "Search for HH_IGNORE_ERROR comments."
  (let ((case-fold-search nil)
	(found-pos nil)
	(match-data nil))
    ;; HH_IGNORE_ERROR must start with /*, see full_fidelity_lexer.ml. The
    ;; format is matched by scour_comments in full_fidelity_ast.ml,
    ;; using, the ignore_error regex defined in that file.
    (save-excursion
      (while (and (not found-pos)
		  (search-forward "HH_IGNORE_ERROR" limit t))
	(let* ((ppss (syntax-ppss))
	       (in-comment (nth 4 ppss))
	       (comment-start (nth 8 ppss)))
	  (when in-comment
	    (save-excursion
	      (goto-char comment-start)
	      (when (re-search-forward
		     (rx point "/*" (0+ whitespace)
			 (group "HH_IGNORE_ERROR" (0+ whitespace) "[" (+ digit) "]"))
		     limit t)
		(setq found-pos (point))
		(setq match-data (match-data))))))))
    (when found-pos
      (set-match-data match-data)
      (goto-char found-pos))))

(defun hack-font-lock-interpolate (limit)
  "Search for $foo string interpolation."
  (let ((pattern
         (rx (not (any "\\"))
             (group
              (or
               (seq
                ;; $foo
                "$" (+ (or (syntax word) (syntax symbol))) symbol-end
                (0+ (or
                     ;; $foo->bar
                     (seq "->" (+ (or (syntax word) (syntax symbol))) symbol-end)
                     ;; $foo[123]
                     (seq "[" (+ (or (syntax word) (syntax symbol))) symbol-end "]"))))
               ;; ${foo}
               (seq "${" (+ (or (syntax word) (syntax symbol))) symbol-end "}")))))
        res match-data)
    (save-match-data
      ;; Search forward for $foo and terminate on the first
      ;; instance we find that's inside a sring.
      (while (and
              (not res)
              (re-search-forward pattern limit t))
        (let* ((ppss (syntax-ppss))
               (in-string-p (nth 3 ppss))
               (string-delimiter-pos (nth 8 ppss))
               (string-delimiter
                (when in-string-p (char-after string-delimiter-pos)))
               (interpolation-p in-string-p))
          (cond
           ;; Interpolation does not apply in single-quoted strings.
           ((eq string-delimiter ?')
            (setq interpolation-p nil))
           ;; We can interpolate in <<<FOO, but not in <<<'FOO'
           ((eq string-delimiter ?<)
            (save-excursion
              (goto-char string-delimiter-pos)
              (save-match-data
                (re-search-forward (rx (+ "<")))
                (when (looking-at (rx "'"))
                  (setq interpolation-p nil))))))

          (when interpolation-p
            (setq res (point))
            ;; Set match data to the group we matched.
            (setq match-data (list (match-beginning 1) (match-end 1)))))))
    ;; Set match data and return point so we highlight this
    ;; instance.
    (when res
      (set-match-data match-data)
      res)))

(defun hack--forward-parse-xhp (start-pos limit &optional propertize-tags)
  "Move point past the XHP expression beginning at START-POS.

If PROPERTIZE-TAGS is nil, apply syntax properties to text.
If PROPERTIZE-TAGS is non-nil, apply `hack-xhp-tag' to tag names."
  (let ((tags nil)
        prev-tag-end)
    (goto-char start-pos)

    (catch 'done
      ;; Whilst we're inside XHP, and there are still more
      ;; tags in the buffer.
      (while t
        ;; Find the next tag start.
        (unless (search-forward "<" limit t)
          ;; Can't find any more tags.
          (throw 'done t))

        ;; Set syntax properties on text content between tags.
        (when (and prev-tag-end (not propertize-tags))
          (let ((tag-start (1- (point))))
            (save-excursion
              (goto-char prev-tag-end)
              ;; Ensure XHP contents are punctuation unless interpolated.
              (while (re-search-forward
                      (rx (or "'" "\"" ">")) tag-start t)
                (cond
                 ;; Ensure that $foo->bar is not treated as a paired < > inside interpolated XHP.
                 ((and (eq (char-before) ?>)
                       ;; We deliberately check for interpolation
                       ;; *before* the >. This ensures that we don't
                       ;; get confused if we still think > is a paired
                       ;; delimiter.
                       (hack--in-xhp-interpolation-p (1- (point)) start-pos))
                  (unless (hack-->-paired-p (1- (point)))
                    (put-text-property (1- (point)) (point)
		                       'syntax-table (string-to-syntax "."))))
                 ;; Ensure that " and ' are just punctuation inside XHP expressions.
                 ((memq (char-before) (list ?\" ?'))
                  (unless (hack--in-xhp-interpolation-p (point) start-pos)
                    (put-text-property (1- (point)) (point)
		                       'syntax-table (string-to-syntax ".")))))))))

        (let ((close-p (looking-at-p "/"))
              tag-name tag-name-start tag-name-end
              self-closing-p)
          (when close-p
            (forward-char 1))
          ;; Get the name of the current tag.
          (re-search-forward
           (rx (+ (or (syntax word) (syntax symbol) ":" "-"))))
          (setq tag-name (match-string 0))
	  (setq tag-name-start (match-beginning 0))
          (setq tag-name-end (match-end 0))

	  (if propertize-tags
              (add-face-text-property tag-name-start tag-name-end 'hack-xhp-tag)

            ;; Ensure : and - are symbol consituents on tag names.
            (goto-char tag-name-start)
            (while (re-search-forward (rx (or ":" "-")) tag-name-end t)
              (put-text-property (1- (point)) (point)
		                 'syntax-table (string-to-syntax "_"))))

          (unless (search-forward ">" limit t)
            ;; Can't find the matching close angle bracket, so the XHP
            ;; expression is incomplete.
            (throw 'done t))

          (save-excursion
            (backward-char 2)
            (when (looking-at "/>")
              (setq self-closing-p t)))
          (cond
           (self-closing-p
            ;; A self-closing tag doesn't need pushing to the stack.
            nil)
           ((and close-p (string= tag-name (car tags)))
            ;; A balanced closing tag.
            (pop tags))
           (close-p
            ;; An unbalanced close tag, we were expecting something
            ;; else. Assume this is the end of the XHP section.
            (throw 'done t))
           (t
            ;; An open tag.
            (push tag-name tags)))

          (unless tags
            ;; Reach the close of the initial open XHP tag.
            (throw 'done t))

          (setq prev-tag-end (point)))))

    (put-text-property start-pos (point)
                       'hack-xhp-expression start-pos)))

(defun hack-font-lock-interpolate-complex (limit)
  "Search for {$foo} string interpolation."
  (let (res start)
    (while (and
            (not res)
            (search-forward "{$" limit t))
      (let* ((ppss (syntax-ppss))
             (in-string-p (nth 3 ppss))
             (string-delimiter-pos (nth 8 ppss))
             (string-delimiter
              (when in-string-p (char-after string-delimiter-pos)))
             (interpolation-p in-string-p))
        (cond
         ;; Interpolation does not apply in single-quoted strings.
         ((eq string-delimiter ?')
          (setq interpolation-p nil))
         ;; We can interpolate in <<<FOO, but not in <<<'FOO'
         ((eq string-delimiter ?<)
          (save-excursion
            (goto-char string-delimiter-pos)
            (save-match-data
              (re-search-forward (rx (+ "<")))
              (when (looking-at (rx "'"))
                (setq interpolation-p nil))))))

        (when interpolation-p
          (setq start (match-beginning 0))
          (let ((restart-pos (match-end 0)))
            ;; Search forward for the } that matches the opening {.
            (while (and (not res) (search-forward "}" limit t))
              (let ((end-pos (point)))
                (save-excursion
                  (when (and (ignore-errors (backward-list 1))
                             (= start (point)))
                    (setq res end-pos)))))
            (unless res
              (goto-char restart-pos))))))
    ;; Set match data and return point so we highlight this
    ;; instance.
    (when res
      (set-match-data (list start res))
      res)))

(defconst hack--keyword-regex
  ;; Keywords, based on hphp.ll.
  ;; We don't highlight endforeach etc, as they're syntax errors.
  ;; From full_fidelity_lexer.ml.
  (regexp-opt
   '(;; This is the list of keywords from full_fidelity_lexer.ml, but
     ;; removing types (boolean etc) and constants (true, false, null).
     "__halt_compiler" "abstract" "and" "as" "break"
     "case" "catch" "class" "clone" "const" "continue" "declare" "default"
     "die" "do" "echo" "else" "elseif" "empty" "enddeclare" "endfor"
     "endforeach" "endif" "endswitch" "endwhile" "eval" "exit" "extends"
     "final" "finally" "for" "foreach" "function" "global" "goto" "if"
     "implements" "include" "include_once" "instanceof" "insteadof"
     "interface" "isset" "list" "namespace" "new" "or" "parent"
     "print" "private" "protected" "public" "require" "require_once"
     "return" "self" "static" "switch" "throw" "trait"
     "try" "unset" "use" "var" "while"
     "xor" "yield"
     "inout" "using"

     ;; Contextual keywords.
     "async"
     "await"
     "enum"
     "newtype"
     "record"
     "shape"
     "super"
     "tuple"
     "type"
     "where"

     ;; These contextual keywords are also used for literals, so highlight them as keywords.
     "array"
     "darray"
     "dict"
     "keyset"
     "varray"
     "vec"

     ;; XHP keywords
     "attribute"
     "category"
     "children"
     "required"

     ;; Highlight a lambda function as a keyword to make it clear,
     ;; even though users can't shadow this anyway.
     "==>"

     ;; Treat self:: and static:: as keywords.
     "self"
     "parent")
   'symbols))

(defconst hack--type-regex
  (rx
   (or symbol-start whitespace "<")
   (? "?")
   (group
    (or
     ;; Built-in classes, based on Classes in
     ;; naming_special_names.ml, excluding self/parent (which we've
     ;; treated as keywords above).
     "stdClass"
     "classname"
     "typename"

     ;; Built-in types, based on Typehints in naming_special_names.ml
     ;; and as_case_insensitive_keyword in full_fidelity_lexer.ml.
     "arraykey"
     "bool"
     "boolean"
     "callable"
     "double"
     "dynamic"
     "float"
     "int"
     "integer"
     "mixed"
     "nonnull"
     "noreturn"
     "num"
     "null"
     "nothing"
     "object"
     "real"
     "resource"
     "string"
     "this"
     "varray_or_darray"
     "void"

     ;; Placeholder types, e.g. in vec<_>.
     "_"

     ;; PHP built-in classes that don't start with an upper case character
     ;; https://docs.hhvm.com/php/reference/
     "finfo"
     "libXMLError"
     "mysqli"
     "mysqli_driver"
     "mysqli_result"
     "mysqli_stmt"
     "mysqli_warning"
     "php_user_filter"

     ;; User-defined type.
     (seq
      (0+ "_")
      (any upper)
      (* (or (syntax word) (syntax symbol))))

     ;; XHP type, based on is_next_xhp_class_name in full_fidelity_lexer.ml.
     (seq
      ":"
      (+ (or (syntax word) (syntax symbol) ":" "-")))))
   symbol-end))

(defconst hack--built-in-fun-regex
  (rx
   (or line-start whitespace)
   symbol-start
   (group
    (or
     ;; https://docs.hhvm.com/hack/reference/function/ HH\foo functions
     "array_key_cast" "asio_get_current_context_idx" "asio_get_running" "asio_get_running_in_context" "autoload_set_paths"
     "class_meth" "clear_instance_memoization" "clear_lsb_memoization" "clear_static_memoization" "could_include"
     "curl_create_pool" "curl_destroy_pool" "curl_init_pooled" "curl_list_pools" "darray"
     "deferred_errors" "disable_code_coverage_with_frequency" "enable_legacy_behavior" "execution_context" "ext_factparse_version"
     "ext_watchman_version" "facts_parse" "ffp_parse_string" "ffp_parse_string_native" "fun"
     "get_headers_secure" "heapgraph_create" "heapgraph_dfs_edges" "heapgraph_dfs_nodes" "heapgraph_edge"
     "heapgraph_foreach_edge" "heapgraph_foreach_node" "heapgraph_foreach_root" "heapgraph_foreach_root_node" "heapgraph_node"
     "heapgraph_node_in_edges" "heapgraph_node_out_edges" "heapgraph_stats" "heapgraph_version" "idx"
     "inst_meth" "invariant" "invariant_callback_register" "invariant_violation" "is_any_array"
     "is_darray" "is_dict" "is_keyset" "is_list_like" "is_varray"
     "is_vec" "meth_caller" "non_crypto_md5_lower" "non_crypto_md5_upper" "object_prop_array"
     "objprof_get_data" "objprof_get_paths" "objprof_get_strings" "serialize_memoize_param" "serialize_with_options"
     "server_health_level" "server_is_prepared_to_stop" "server_is_stopping" "server_process_start_time" "server_uptime"
     "server_warmup_status" "server_warmup_status_monotonic" "set_frame_metadata" "set_mem_threshold_callback" "set_soft_late_init_default"
     "thread_mark_stack" "thread_memory_stats" "varray" "watchman_check_sub" "watchman_run"
     "watchman_subscribe" "watchman_sync_sub" "watchman_unsubscribe" "xenon_get_and_clear_missed_sample_count" "xenon_get_and_clear_samples"
     "xenon_get_data" "xenon_get_is_profiled_request"

     ;; https://docs.hhvm.com/hack/reference/function/ global functions
     "call_user_func_array" "curl_multi_await" "fb_autoload_map" "fb_compact_serialize" "fb_compact_unserialize"
     "fb_curl_getopt" "fb_curl_multi_fdset" "fb_disable_code_coverage" "fb_enable_code_coverage" "fb_get_code_coverage"
     "fb_get_last_flush_size" "fb_htmlspecialchars" "fb_intercept" "fb_lazy_lstat" "fb_lazy_realpath"
     "fb_output_compression" "fb_rename_function" "fb_serialize" "fb_set_exit_callback" "fb_setprofile"
     "fb_unserialize" "fb_utf8_strlen" "fb_utf8_strlen_deprecated" "fb_utf8_substr" "fb_utf8ize"
     "forward_static_call_array" "furchash_hphp_ext" "furchash_hphp_ext_supported" "get_class_constants" "get_http_request_size"
     "hphp_array_idx" "hphp_clear_hardware_events" "hphp_clear_unflushed" "hphp_crash_log" "hphp_create_continuation"
     "hphp_create_object" "hphp_create_object_without_constructor" "hphp_current_ref" "hphp_debug_backtrace_hash" "hphp_debug_break"
     "hphp_debug_caller_info" "hphp_debug_session_auth" "hphp_debugger_attached" "hphp_directoryiterator___construct" "hphp_directoryiterator___tostring"
     "hphp_directoryiterator_current" "hphp_directoryiterator_isdot" "hphp_directoryiterator_key" "hphp_directoryiterator_next" "hphp_directoryiterator_rewind"
     "hphp_directoryiterator_seek" "hphp_directoryiterator_valid" "hphp_get_class_constant" "hphp_get_extension_info" "hphp_get_hardware_counters"
     "hphp_get_iostatus" "hphp_get_iterator" "hphp_get_mutable_iterator" "hphp_get_property" "hphp_get_static_property"
     "hphp_get_stats" "hphp_get_status" "hphp_get_this" "hphp_get_thread_id" "hphp_get_timers"
     "hphp_gettid" "hphp_instanceof" "hphp_instruction_counter" "hphp_invoke" "hphp_invoke_method"
     "hphp_memory_get_interval_peak_usage" "hphp_memory_heap_capacity" "hphp_memory_heap_usage" "hphp_memory_start_interval" "hphp_memory_stop_interval"
     "hphp_murmurhash" "hphp_object_pointer" "hphp_output_global_state" "hphp_process_abort" "hphp_recursivedirectoryiterator___construct"
     "hphp_recursivedirectoryiterator___tostring" "hphp_recursivedirectoryiterator_current" "hphp_recursivedirectoryiterator_getchildren" "hphp_recursivedirectoryiterator_getsubpath" "hphp_recursivedirectoryiterator_getsubpathname"
     "hphp_recursivedirectoryiterator_haschildren" "hphp_recursivedirectoryiterator_key" "hphp_recursivedirectoryiterator_next" "hphp_recursivedirectoryiterator_rewind" "hphp_recursivedirectoryiterator_seek"
     "hphp_recursivedirectoryiterator_valid" "hphp_recursiveiteratoriterator___construct" "hphp_recursiveiteratoriterator_current" "hphp_recursiveiteratoriterator_getinneriterator" "hphp_recursiveiteratoriterator_key"
     "hphp_recursiveiteratoriterator_next" "hphp_recursiveiteratoriterator_rewind" "hphp_recursiveiteratoriterator_valid" "hphp_scalar_typehints_enabled" "hphp_set_error_page"
     "hphp_set_hardware_events" "hphp_set_iostatus_address" "hphp_set_property" "hphp_set_static_property" "hphp_stats"
     "hphp_thread_type" "hphp_throw_fatal_error" "hphp_to_string" "hphpd_auth_token" "hphpd_break"
     "lz4hccompress" "memory_get_allocation" "mysql_async_connect_completed" "mysql_async_connect_start" "mysql_async_fetch_array"
     "mysql_async_query_completed" "mysql_async_query_result" "mysql_async_query_start" "mysql_async_status" "mysql_async_wait_actionable"
     "mysql_connect_with_db" "mysql_more_results" "mysql_multi_query" "mysql_next_result" "mysql_pconnect_with_db"
     "mysql_set_timeout" "mysql_warning_count" "pagelet_server_flush" "pagelet_server_is_done" "pagelet_server_is_enabled"
     "pagelet_server_task_result" "pagelet_server_task_start" "pagelet_server_task_status" "pagelet_server_tasks_started" "register_postsend_function"
     "sncompress" "stream_await" "xbox_get_thread_time" "xbox_get_thread_timeout" "xbox_post_message"
     "xbox_process_call_message" "xbox_schedule_thread_reset" "xbox_send_message" "xbox_set_thread_timeout" "xbox_task_result"
     "xbox_task_start" "xbox_task_status" "xhprof_disable" "xhprof_enable" "xhprof_frame_begin"
     "xhprof_frame_end" "xhprof_network_disable" "xhprof_network_enable" "xhprof_sample_disable" "xhprof_sample_enable"

     ;; https://docs.hhvm.com/php/reference/
     ;; Contains some duplicates with the above.
     "abs" "acos" "acosh" "addcslashes" "addslashes"
     "apc_add" "apc_cache_info" "apc_cas" "apc_clear_cache" "apc_dec"
     "apc_delete" "apc_exists" "apc_fetch" "apc_inc" "apc_sma_info"
     "apc_store" "array_change_key_case" "array_chunk" "array_column" "array_combine"
     "array_count_values" "array_diff" "array_diff_assoc" "array_diff_key" "array_diff_uassoc"
     "array_diff_ukey" "array_fill" "array_fill_keys" "array_filter" "array_flip"
     "array_intersect" "array_intersect_assoc" "array_intersect_key" "array_intersect_uassoc" "array_intersect_ukey"
     "array_key_exists" "array_keys" "array_map" "array_merge" "array_merge_recursive"
     "array_multisort" "array_pad" "array_pop" "array_product" "array_push"
     "array_rand" "array_reduce" "array_replace" "array_replace_recursive" "array_reverse"
     "array_search" "array_shift" "array_slice" "array_splice" "array_sum"
     "array_udiff" "array_udiff_assoc" "array_udiff_uassoc" "array_uintersect" "array_uintersect_assoc"
     "array_uintersect_uassoc" "array_unique" "array_unshift" "array_values" "array_walk"
     "array_walk_recursive" "arsort" "asin" "asinh" "asort"
     "assert" "assert_options" "atan" "atan2" "atanh"
     "base64_decode" "base64_encode" "base_convert" "basename" "bcadd"
     "bccomp" "bcdiv" "bcmod" "bcmul" "bcpow"
     "bcpowmod" "bcscale" "bcsqrt" "bcsub" "bin2hex"
     "bind_textdomain_codeset" "bindec" "bindtextdomain" "boolval" "bzclose"
     "bzcompress" "bzdecompress" "bzerrno" "bzerror" "bzerrstr"
     "bzflush" "bzopen" "bzread" "bzwrite" "call_user_func"
     "call_user_func_array" "call_user_method" "call_user_method_array" "ceil" "chdir"
     "checkdate" "checkdnsrr" "chgrp" "chmod" "chop"
     "chown" "chr" "chroot" "chunk_split" "class_alias"
     "class_exists" "class_implements" "class_parents" "class_uses" "clearstatcache"
     "closedir" "closelog" "compact" "connection_aborted" "connection_status"
     "constant" "convert_cyr_string" "convert_uudecode" "convert_uuencode" "copy"
     "cos" "cosh" "count" "count_chars" "crc32"
     "crypt" "ctype_alnum" "ctype_alpha" "ctype_cntrl" "ctype_digit"
     "ctype_graph" "ctype_lower" "ctype_print" "ctype_punct" "ctype_space"
     "ctype_upper" "ctype_xdigit" "curl_close" "curl_copy_handle" "curl_errno"
     "curl_error" "curl_exec" "curl_file_create" "curl_getinfo" "curl_init"
     "curl_multi_add_handle" "curl_multi_close" "curl_multi_exec" "curl_multi_getcontent" "curl_multi_info_read"
     "curl_multi_init" "curl_multi_remove_handle" "curl_multi_select" "curl_multi_setopt" "curl_multi_strerror"
     "curl_reset" "curl_setopt" "curl_setopt_array" "curl_share_close" "curl_share_init"
     "curl_share_setopt" "curl_strerror" "curl_version" "current" "date"
     "date_add" "date_create" "date_create_from_format" "date_create_immutable" "date_date_set"
     "date_default_timezone_get" "date_default_timezone_set" "date_diff" "date_format" "date_get_last_errors"
     "date_interval_create_from_date_string" "date_interval_format" "date_isodate_set" "date_modify" "date_offset_get"
     "date_parse" "date_parse_from_format" "date_sub" "date_sun_info" "date_sunrise"
     "date_sunset" "date_time_set" "date_timestamp_get" "date_timestamp_set" "date_timezone_get"
     "date_timezone_set" "dcgettext" "dcngettext" "debug_backtrace" "debug_print_backtrace"
     "debug_zval_dump" "decbin" "dechex" "decoct" "define"
     "define_syslog_variables" "defined" "deg2rad" "dgettext" "dir"
     "dirname" "disk_free_space" "disk_total_space" "diskfreespace" "dl"
     "dngettext" "dns_check_record" "dns_get_mx" "dns_get_record" "dom_import_simplexml"
     "doubleval" "each" "end" "ereg" "ereg_replace"
     "eregi" "eregi_replace" "error_get_last" "error_log" "error_reporting"
     "escapeshellarg" "escapeshellcmd" "exec" "exif_imagetype" "exif_read_data"
     "exif_tagname" "exif_thumbnail" "exp" "explode" "expm1"
     "extension_loaded" "ezmlm_hash" "fclose" "feof" "fflush"
     "fgetc" "fgetcsv" "fgets" "fgetss" "file"
     "file_exists" "file_get_contents" "file_put_contents" "fileatime" "filectime"
     "filegroup" "fileinode" "filemtime" "fileowner" "fileperms"
     "filesize" "filetype" "filter_has_var" "filter_id" "filter_input"
     "filter_input_array" "filter_list" "filter_var" "filter_var_array" "finfo_buffer"
     "finfo_close" "finfo_file" "finfo_open" "finfo_set_flags" "floatval"
     "flock" "floor" "flush" "fmod" "fnmatch"
     "fopen" "forward_static_call" "forward_static_call_array" "fpassthru" "fprintf"
     "fputcsv" "fputs" "fread" "fscanf" "fseek"
     "fsockopen" "fstat" "ftell" "ftok" "ftruncate"
     "func_get_arg" "func_get_args" "func_num_args" "function_exists" "fwrite"
     "gc_collect_cycles" "gc_disable" "gc_enable" "gc_enabled" "gc_mem_caches"
     "gd_info" "get_called_class" "get_cfg_var" "get_class" "get_class_methods"
     "get_class_vars" "get_current_user" "get_declared_classes" "get_declared_interfaces" "get_declared_traits"
     "get_defined_constants" "get_defined_functions" "get_defined_vars" "get_extension_funcs" "get_headers"
     "get_html_translation_table" "get_include_path" "get_included_files" "get_loaded_extensions" "get_magic_quotes_gpc"
     "get_magic_quotes_runtime" "get_meta_tags" "get_object_vars" "get_parent_class" "get_required_files"
     "get_resource_type" "getcwd" "getdate" "getenv" "gethostbyaddr"
     "gethostbyname" "gethostbynamel" "gethostname" "getimagesize" "getimagesizefromstring"
     "getlastmod" "getmxrr" "getmygid" "getmyinode" "getmypid"
     "getmyuid" "getopt" "getprotobyname" "getprotobynumber" "getrandmax"
     "getrusage" "getservbyname" "getservbyport" "gettext" "gettimeofday"
     "gettype" "glob" "gmdate" "gmmktime" "gmp_abs"
     "gmp_add" "gmp_and" "gmp_clrbit" "gmp_cmp" "gmp_com"
     "gmp_div" "gmp_div_q" "gmp_div_qr" "gmp_div_r" "gmp_divexact"
     "gmp_fact" "gmp_gcd" "gmp_gcdext" "gmp_hamdist" "gmp_init"
     "gmp_intval" "gmp_invert" "gmp_jacobi" "gmp_legendre" "gmp_mod"
     "gmp_mul" "gmp_neg" "gmp_nextprime" "gmp_or" "gmp_perfect_square"
     "gmp_popcount" "gmp_pow" "gmp_powm" "gmp_prob_prime" "gmp_random"
     "gmp_root" "gmp_rootrem" "gmp_scan0" "gmp_scan1" "gmp_setbit"
     "gmp_sign" "gmp_sqrt" "gmp_sqrtrem" "gmp_strval" "gmp_sub"
     "gmp_testbit" "gmp_xor" "gmstrftime" "grapheme_extract" "grapheme_stripos"
     "grapheme_stristr" "grapheme_strlen" "grapheme_strpos" "grapheme_strripos" "grapheme_strrpos"
     "grapheme_strstr" "grapheme_substr" "gzclose" "gzcompress" "gzdecode"
     "gzdeflate" "gzencode" "gzeof" "gzfile" "gzgetc"
     "gzgets" "gzgetss" "gzinflate" "gzopen" "gzpassthru"
     "gzputs" "gzread" "gzrewind" "gzseek" "gztell"
     "gzuncompress" "gzwrite" "hash" "hash_algos" "hash_copy"
     "hash_equals" "hash_file" "hash_final" "hash_hmac" "hash_hmac_file"
     "hash_init" "hash_pbkdf2" "hash_update" "hash_update_file" "hash_update_stream"
     "header" "header_register_callback" "header_remove" "headers_list" "headers_sent"
     "hebrev" "hebrevc" "hex2bin" "hexdec" "html_entity_decode"
     "htmlentities" "htmlspecialchars" "htmlspecialchars_decode" "http_build_query" "http_response_code"
     "hypot" "iconv" "iconv_get_encoding" "iconv_mime_decode" "iconv_mime_decode_headers"
     "iconv_mime_encode" "iconv_set_encoding" "iconv_strlen" "iconv_strpos" "iconv_strrpos"
     "iconv_substr" "idate" "idn_to_ascii" "idn_to_utf8" "ignore_user_abort"
     "image2wbmp" "image_type_to_extension" "image_type_to_mime_type" "imageaffine" "imageaffinematrixconcat"
     "imageaffinematrixget" "imagealphablending" "imageantialias" "imagearc" "imagechar"
     "imagecharup" "imagecolorallocate" "imagecolorallocatealpha" "imagecolorat" "imagecolorclosest"
     "imagecolorclosestalpha" "imagecolorclosesthwb" "imagecolordeallocate" "imagecolorexact" "imagecolorexactalpha"
     "imagecolormatch" "imagecolorresolve" "imagecolorresolvealpha" "imagecolorset" "imagecolorsforindex"
     "imagecolorstotal" "imagecolortransparent" "imageconvolution" "imagecopy" "imagecopymerge"
     "imagecopymergegray" "imagecopyresampled" "imagecopyresized" "imagecreate" "imagecreatefromgd"
     "imagecreatefromgd2" "imagecreatefromgd2part" "imagecreatefromgif" "imagecreatefromjpeg" "imagecreatefrompng"
     "imagecreatefromstring" "imagecreatefromwbmp" "imagecreatefromwebp" "imagecreatefromxbm" "imagecreatetruecolor"
     "imagecrop" "imagecropauto" "imagedashedline" "imagedestroy" "imageellipse"
     "imagefill" "imagefilledarc" "imagefilledellipse" "imagefilledpolygon" "imagefilledrectangle"
     "imagefilltoborder" "imagefilter" "imageflip" "imagefontheight" "imagefontwidth"
     "imageftbbox" "imagefttext" "imagegammacorrect" "imagegd" "imagegd2"
     "imagegif" "imageinterlace" "imageistruecolor" "imagejpeg" "imagelayereffect"
     "imageline" "imageloadfont" "imagepalettecopy" "imagepng" "imagepolygon"
     "imagerectangle" "imagerotate" "imagesavealpha" "imagescale" "imagesetbrush"
     "imagesetinterpolation" "imagesetpixel" "imagesetstyle" "imagesetthickness" "imagesettile"
     "imagestring" "imagestringup" "imagesx" "imagesy" "imagetruecolortopalette"
     "imagettfbbox" "imagettftext" "imagetypes" "imagewbmp" "imagewebp"
     "imap_8bit" "imap_alerts" "imap_base64" "imap_binary" "imap_body"
     "imap_bodystruct" "imap_check" "imap_clearflag_full" "imap_close" "imap_createmailbox"
     "imap_delete" "imap_deletemailbox" "imap_errors" "imap_expunge" "imap_fetch_overview"
     "imap_fetchbody" "imap_fetchheader" "imap_fetchstructure" "imap_gc" "imap_header"
     "imap_headerinfo" "imap_last_error" "imap_list" "imap_listmailbox" "imap_mail"
     "imap_mail_copy" "imap_mail_move" "imap_mailboxmsginfo" "imap_msgno" "imap_num_msg"
     "imap_num_recent" "imap_open" "imap_ping" "imap_qprint" "imap_renamemailbox"
     "imap_reopen" "imap_search" "imap_setflag_full" "imap_status" "imap_subscribe"
     "imap_timeout" "imap_uid" "imap_undelete" "imap_unsubscribe" "imap_utf8"
     "implode" "import_request_variables" "in_array" "inet_ntop" "inet_pton"
     "ini_alter" "ini_get" "ini_get_all" "ini_restore" "ini_set"
     "intdiv" "interface_exists" "intl_error_name" "intl_get_error_code" "intl_get_error_message"
     "intl_is_failure" "intval" "ip2long" "iptcembed" "iptcparse"
     "is_a" "is_array" "is_bool" "is_callable" "is_dir"
     "is_double" "is_executable" "is_file" "is_finite" "is_float"
     "is_infinite" "is_int" "is_integer" "is_link" "is_long"
     "is_nan" "is_null" "is_numeric" "is_object" "is_readable"
     "is_real" "is_resource" "is_scalar" "is_soap_fault" "is_string"
     "is_subclass_of" "is_uploaded_file" "is_writable" "is_writeable" "iterator_apply"
     "iterator_count" "iterator_to_array" "join" "jpeg2wbmp" "json_decode"
     "json_encode" "json_last_error" "json_last_error_msg" "key" "key_exists"
     "krsort" "ksort" "lcfirst" "lcg_value" "lchgrp"
     "lchown" "ldap_add" "ldap_bind" "ldap_close" "ldap_compare"
     "ldap_connect" "ldap_control_paged_result" "ldap_control_paged_result_response" "ldap_count_entries" "ldap_delete"
     "ldap_dn2ufn" "ldap_err2str" "ldap_errno" "ldap_error" "ldap_escape"
     "ldap_explode_dn" "ldap_first_attribute" "ldap_first_entry" "ldap_first_reference" "ldap_free_result"
     "ldap_get_attributes" "ldap_get_dn" "ldap_get_entries" "ldap_get_option" "ldap_get_values"
     "ldap_get_values_len" "ldap_list" "ldap_mod_add" "ldap_mod_del" "ldap_mod_replace"
     "ldap_modify" "ldap_modify_batch" "ldap_next_attribute" "ldap_next_entry" "ldap_next_reference"
     "ldap_parse_reference" "ldap_parse_result" "ldap_read" "ldap_rename" "ldap_search"
     "ldap_set_option" "ldap_set_rebind_proc" "ldap_sort" "ldap_start_tls" "ldap_unbind"
     "levenshtein" "libxml_clear_errors" "libxml_disable_entity_loader" "libxml_get_errors" "libxml_get_last_error"
     "libxml_set_streams_context" "libxml_use_internal_errors" "link" "linkinfo" "localeconv"
     "localtime" "log" "log10" "log1p" "long2ip"
     "lstat" "ltrim" "magic_quotes_runtime" "mail" "mailparse_determine_best_xfer_encoding"
     "mailparse_msg_create" "mailparse_msg_extract_part" "mailparse_msg_extract_part_file" "mailparse_msg_extract_whole_part_file" "mailparse_msg_free"
     "mailparse_msg_get_part" "mailparse_msg_get_part_data" "mailparse_msg_get_structure" "mailparse_msg_parse" "mailparse_msg_parse_file"
     "mailparse_rfc822_parse_addresses" "mailparse_stream_encode" "mailparse_uudecode_all" "max" "mb_check_encoding"
     "mb_convert_case" "mb_convert_encoding" "mb_convert_kana" "mb_convert_variables" "mb_decode_mimeheader"
     "mb_decode_numericentity" "mb_detect_encoding" "mb_detect_order" "mb_encode_mimeheader" "mb_encode_numericentity"
     "mb_encoding_aliases" "mb_ereg" "mb_ereg_match" "mb_ereg_replace" "mb_ereg_search"
     "mb_ereg_search_getpos" "mb_ereg_search_getregs" "mb_ereg_search_init" "mb_ereg_search_pos" "mb_ereg_search_regs"
     "mb_ereg_search_setpos" "mb_eregi" "mb_eregi_replace" "mb_get_info" "mb_http_input"
     "mb_http_output" "mb_internal_encoding" "mb_language" "mb_list_encodings" "mb_output_handler"
     "mb_parse_str" "mb_preferred_mime_name" "mb_regex_encoding" "mb_regex_set_options" "mb_send_mail"
     "mb_split" "mb_strcut" "mb_strimwidth" "mb_stripos" "mb_stristr"
     "mb_strlen" "mb_strpos" "mb_strrchr" "mb_strrichr" "mb_strripos"
     "mb_strrpos" "mb_strstr" "mb_strtolower" "mb_strtoupper" "mb_strwidth"
     "mb_substitute_character" "mb_substr" "mb_substr_count" "mcrypt_cbc" "mcrypt_cfb"
     "mcrypt_create_iv" "mcrypt_decrypt" "mcrypt_ecb" "mcrypt_enc_get_algorithms_name" "mcrypt_enc_get_block_size"
     "mcrypt_enc_get_iv_size" "mcrypt_enc_get_key_size" "mcrypt_enc_get_modes_name" "mcrypt_enc_get_supported_key_sizes" "mcrypt_enc_is_block_algorithm"
     "mcrypt_enc_is_block_algorithm_mode" "mcrypt_enc_is_block_mode" "mcrypt_enc_self_test" "mcrypt_encrypt" "mcrypt_generic"
     "mcrypt_generic_deinit" "mcrypt_generic_end" "mcrypt_generic_init" "mcrypt_get_block_size" "mcrypt_get_cipher_name"
     "mcrypt_get_iv_size" "mcrypt_get_key_size" "mcrypt_list_algorithms" "mcrypt_list_modes" "mcrypt_module_close"
     "mcrypt_module_get_algo_block_size" "mcrypt_module_get_algo_key_size" "mcrypt_module_get_supported_key_sizes" "mcrypt_module_is_block_algorithm" "mcrypt_module_is_block_algorithm_mode"
     "mcrypt_module_is_block_mode" "mcrypt_module_open" "mcrypt_module_self_test" "mcrypt_ofb" "md5"
     "md5_file" "mdecrypt_generic" "memory_get_peak_usage" "memory_get_usage" "metaphone"
     "method_exists" "microtime" "mime_content_type" "min" "mkdir"
     "mktime" "money_format" "move_uploaded_file" "msg_get_queue" "msg_queue_exists"
     "msg_receive" "msg_remove_queue" "msg_send" "msg_set_queue" "msg_stat_queue"
     "mt_getrandmax" "mt_rand" "mt_srand" "mysql_affected_rows" "mysql_client_encoding"
     "mysql_close" "mysql_connect" "mysql_create_db" "mysql_data_seek" "mysql_db_name"
     "mysql_db_query" "mysql_drop_db" "mysql_errno" "mysql_error" "mysql_escape_string"
     "mysql_fetch_array" "mysql_fetch_assoc" "mysql_fetch_field" "mysql_fetch_lengths" "mysql_fetch_object"
     "mysql_fetch_row" "mysql_field_flags" "mysql_field_len" "mysql_field_name" "mysql_field_seek"
     "mysql_field_table" "mysql_field_type" "mysql_free_result" "mysql_get_client_info" "mysql_get_host_info"
     "mysql_get_proto_info" "mysql_get_server_info" "mysql_info" "mysql_insert_id" "mysql_list_dbs"
     "mysql_list_fields" "mysql_list_processes" "mysql_list_tables" "mysql_num_fields" "mysql_num_rows"
     "mysql_pconnect" "mysql_ping" "mysql_query" "mysql_real_escape_string" "mysql_result"
     "mysql_select_db" "mysql_set_charset" "mysql_stat" "mysql_tablename" "mysql_thread_id"
     "mysql_unbuffered_query" "mysqli_connect" "mysqli_escape_string" "mysqli_report" "natcasesort"
     "natsort" "next" "ngettext" "nl2br" "nl_langinfo"
     "number_format" "ob_clean" "ob_end_clean" "ob_end_flush" "ob_flush"
     "ob_get_clean" "ob_get_contents" "ob_get_flush" "ob_get_length" "ob_get_level"
     "ob_get_status" "ob_iconv_handler" "ob_implicit_flush" "ob_list_handlers" "ob_start"
     "octdec" "opendir" "openlog" "openssl_cipher_iv_length" "openssl_csr_export"
     "openssl_csr_export_to_file" "openssl_csr_get_public_key" "openssl_csr_get_subject" "openssl_csr_new" "openssl_csr_sign"
     "openssl_decrypt" "openssl_digest" "openssl_encrypt" "openssl_error_string" "openssl_free_key"
     "openssl_get_cipher_methods" "openssl_get_curve_names" "openssl_get_md_methods" "openssl_get_privatekey" "openssl_get_publickey"
     "openssl_open" "openssl_pkcs12_export" "openssl_pkcs12_export_to_file" "openssl_pkcs12_read" "openssl_pkcs7_decrypt"
     "openssl_pkcs7_encrypt" "openssl_pkcs7_sign" "openssl_pkcs7_verify" "openssl_pkey_export" "openssl_pkey_export_to_file"
     "openssl_pkey_free" "openssl_pkey_get_details" "openssl_pkey_get_private" "openssl_pkey_get_public" "openssl_pkey_new"
     "openssl_private_decrypt" "openssl_private_encrypt" "openssl_public_decrypt" "openssl_public_encrypt" "openssl_random_pseudo_bytes"
     "openssl_seal" "openssl_sign" "openssl_verify" "openssl_x509_check_private_key" "openssl_x509_checkpurpose"
     "openssl_x509_export" "openssl_x509_export_to_file" "openssl_x509_free" "openssl_x509_parse" "openssl_x509_read"
     "ord" "output_add_rewrite_var" "output_reset_rewrite_vars" "pack" "parse_ini_file"
     "parse_ini_string" "parse_str" "parse_url" "passthru" "password_get_info"
     "password_hash" "password_needs_rehash" "password_verify" "pathinfo" "pclose"
     "pcntl_alarm" "pcntl_exec" "pcntl_fork" "pcntl_getpriority" "pcntl_setpriority"
     "pcntl_signal" "pcntl_signal_dispatch" "pcntl_sigprocmask" "pcntl_wait" "pcntl_waitpid"
     "pcntl_wexitstatus" "pcntl_wifexited" "pcntl_wifsignaled" "pcntl_wifstopped" "pcntl_wstopsig"
     "pcntl_wtermsig" "pfsockopen" "pg_affected_rows" "pg_cancel_query" "pg_client_encoding"
     "pg_close" "pg_connect" "pg_connection_busy" "pg_connection_reset" "pg_connection_status"
     "pg_dbname" "pg_escape_bytea" "pg_escape_identifier" "pg_escape_literal" "pg_escape_string"
     "pg_execute" "pg_fetch_all" "pg_fetch_all_columns" "pg_fetch_array" "pg_fetch_assoc"
     "pg_fetch_object" "pg_fetch_result" "pg_fetch_row" "pg_field_is_null" "pg_field_name"
     "pg_field_num" "pg_field_prtlen" "pg_field_size" "pg_field_table" "pg_field_type"
     "pg_field_type_oid" "pg_free_result" "pg_get_pid" "pg_get_result" "pg_host"
     "pg_last_error" "pg_last_notice" "pg_last_oid" "pg_num_fields" "pg_num_rows"
     "pg_options" "pg_parameter_status" "pg_pconnect" "pg_ping" "pg_port"
     "pg_prepare" "pg_query" "pg_query_params" "pg_result_error" "pg_result_error_field"
     "pg_result_seek" "pg_result_status" "pg_send_execute" "pg_send_prepare" "pg_send_query"
     "pg_send_query_params" "pg_set_client_encoding" "pg_set_error_verbosity" "pg_transaction_status" "pg_unescape_bytea"
     "pg_version" "php_ini_loaded_file" "php_ini_scanned_files" "php_sapi_name" "php_uname"
     "phpinfo" "phpversion" "pi" "png2wbmp" "popen"
     "pos" "posix_access" "posix_ctermid" "posix_errno" "posix_get_last_error"
     "posix_getcwd" "posix_getegid" "posix_geteuid" "posix_getgid" "posix_getgrgid"
     "posix_getgrnam" "posix_getgroups" "posix_getlogin" "posix_getpgid" "posix_getpgrp"
     "posix_getpid" "posix_getppid" "posix_getpwnam" "posix_getpwuid" "posix_getrlimit"
     "posix_getsid" "posix_getuid" "posix_initgroups" "posix_isatty" "posix_kill"
     "posix_mkfifo" "posix_mknod" "posix_setegid" "posix_seteuid" "posix_setgid"
     "posix_setpgid" "posix_setsid" "posix_setuid" "posix_strerror" "posix_times"
     "posix_ttyname" "posix_uname" "pow" "preg_filter" "preg_grep"
     "preg_last_error" "preg_match" "preg_match_all" "preg_quote" "preg_replace"
     "preg_replace_callback" "preg_replace_callback_array" "preg_split" "prev" "print_r"
     "printf" "proc_close" "proc_get_status" "proc_nice" "proc_open"
     "proc_terminate" "property_exists" "putenv" "quoted_printable_decode" "quoted_printable_encode"
     "quotemeta" "rad2deg" "rand" "random_bytes" "random_int"
     "range" "rawurldecode" "rawurlencode" "read_exif_data" "readdir"
     "readfile" "readgzfile" "readline" "readline_add_history" "readline_clear_history"
     "readline_completion_function" "readline_info" "readline_read_history" "readline_write_history" "readlink"
     "realpath" "register_shutdown_function" "rename" "reset" "restore_error_handler"
     "restore_exception_handler" "restore_include_path" "rewind" "rewinddir" "rmdir"
     "round" "rsort" "rtrim" "scandir" "sem_acquire"
     "sem_get" "sem_release" "sem_remove" "serialize" "session_cache_expire"
     "session_cache_limiter" "session_commit" "session_decode" "session_destroy" "session_encode"
     "session_get_cookie_params" "session_id" "session_module_name" "session_name" "session_regenerate_id"
     "session_register_shutdown" "session_save_path" "session_set_cookie_params" "session_set_save_handler" "session_start"
     "session_status" "session_unset" "session_write_close" "set_error_handler" "set_exception_handler"
     "set_file_buffer" "set_include_path" "set_magic_quotes_runtime" "set_time_limit" "setcookie"
     "setlocale" "setrawcookie" "settype" "sha1" "sha1_file"
     "shell_exec" "shm_attach" "shm_detach" "shm_get_var" "shm_has_var"
     "shm_put_var" "shm_remove" "shm_remove_var" "shmop_close" "shmop_delete"
     "shmop_open" "shmop_read" "shmop_size" "shmop_write" "shuffle"
     "similar_text" "simplexml_import_dom" "simplexml_load_file" "simplexml_load_string" "sin"
     "sinh" "sizeof" "sleep" "socket_accept" "socket_bind"
     "socket_clear_error" "socket_close" "socket_connect" "socket_create" "socket_create_listen"
     "socket_create_pair" "socket_get_option" "socket_get_status" "socket_getpeername" "socket_getsockname"
     "socket_last_error" "socket_listen" "socket_read" "socket_recv" "socket_recvfrom"
     "socket_select" "socket_send" "socket_sendto" "socket_set_block" "socket_set_blocking"
     "socket_set_nonblock" "socket_set_option" "socket_set_timeout" "socket_shutdown" "socket_strerror"
     "socket_write" "sodium_add" "sodium_bin2hex" "sodium_compare" "sodium_crypto_aead_aes256gcm_decrypt"
     "sodium_crypto_aead_aes256gcm_encrypt" "sodium_crypto_aead_aes256gcm_is_available" "sodium_crypto_aead_aes256gcm_keygen" "sodium_crypto_aead_chacha20poly1305_decrypt" "sodium_crypto_aead_chacha20poly1305_encrypt"
     "sodium_crypto_aead_chacha20poly1305_ietf_decrypt" "sodium_crypto_aead_chacha20poly1305_ietf_encrypt" "sodium_crypto_aead_chacha20poly1305_ietf_keygen" "sodium_crypto_aead_chacha20poly1305_keygen" "sodium_crypto_aead_xchacha20poly1305_ietf_decrypt"
     "sodium_crypto_aead_xchacha20poly1305_ietf_encrypt" "sodium_crypto_aead_xchacha20poly1305_ietf_keygen" "sodium_crypto_auth" "sodium_crypto_auth_keygen" "sodium_crypto_auth_verify"
     "sodium_crypto_box" "sodium_crypto_box_keypair" "sodium_crypto_box_keypair_from_secretkey_and_publickey" "sodium_crypto_box_open" "sodium_crypto_box_publickey"
     "sodium_crypto_box_publickey_from_secretkey" "sodium_crypto_box_seal" "sodium_crypto_box_seal_open" "sodium_crypto_box_secretkey" "sodium_crypto_box_seed_keypair"
     "sodium_crypto_generichash" "sodium_crypto_generichash_final" "sodium_crypto_generichash_init" "sodium_crypto_generichash_keygen" "sodium_crypto_generichash_update"
     "sodium_crypto_kdf_derive_from_key" "sodium_crypto_kdf_keygen" "sodium_crypto_kx_client_session_keys" "sodium_crypto_kx_keypair" "sodium_crypto_kx_publickey"
     "sodium_crypto_kx_secretkey" "sodium_crypto_kx_seed_keypair" "sodium_crypto_kx_server_session_keys" "sodium_crypto_pwhash" "sodium_crypto_pwhash_scryptsalsa208sha256"
     "sodium_crypto_pwhash_scryptsalsa208sha256_str" "sodium_crypto_pwhash_scryptsalsa208sha256_str_verify" "sodium_crypto_pwhash_str" "sodium_crypto_pwhash_str_verify" "sodium_crypto_scalarmult"
     "sodium_crypto_scalarmult_base" "sodium_crypto_secretbox" "sodium_crypto_secretbox_keygen" "sodium_crypto_secretbox_open" "sodium_crypto_shorthash"
     "sodium_crypto_shorthash_keygen" "sodium_crypto_sign" "sodium_crypto_sign_detached" "sodium_crypto_sign_ed25519_pk_to_curve25519" "sodium_crypto_sign_ed25519_sk_to_curve25519"
     "sodium_crypto_sign_keypair" "sodium_crypto_sign_keypair_from_secretkey_and_publickey" "sodium_crypto_sign_open" "sodium_crypto_sign_publickey" "sodium_crypto_sign_publickey_from_secretkey"
     "sodium_crypto_sign_secretkey" "sodium_crypto_sign_seed_keypair" "sodium_crypto_sign_verify_detached" "sodium_crypto_stream" "sodium_crypto_stream_keygen"
     "sodium_crypto_stream_xor" "sodium_hex2bin" "sodium_increment" "sodium_memcmp" "sodium_memzero"
     "sort" "soundex" "spl_autoload" "spl_autoload_call" "spl_autoload_extensions"
     "spl_autoload_functions" "spl_autoload_register" "spl_autoload_unregister" "spl_classes" "spl_object_hash"
     "split" "spliti" "sprintf" "sql_regcase" "sqrt"
     "srand" "sscanf" "stat" "str_getcsv" "str_ireplace"
     "str_pad" "str_repeat" "str_replace" "str_rot13" "str_shuffle"
     "str_split" "str_word_count" "strcasecmp" "strchr" "strcmp"
     "strcoll" "strcspn" "stream_bucket_append" "stream_bucket_make_writeable" "stream_bucket_new"
     "stream_bucket_prepend" "stream_context_create" "stream_context_get_default" "stream_context_get_options" "stream_context_get_params"
     "stream_context_set_default" "stream_context_set_option" "stream_context_set_params" "stream_copy_to_stream" "stream_filter_append"
     "stream_filter_prepend" "stream_filter_register" "stream_filter_remove" "stream_get_contents" "stream_get_filters"
     "stream_get_line" "stream_get_meta_data" "stream_get_transports" "stream_get_wrappers" "stream_is_local"
     "stream_register_wrapper" "stream_resolve_include_path" "stream_select" "stream_set_blocking" "stream_set_chunk_size"
     "stream_set_read_buffer" "stream_set_timeout" "stream_set_write_buffer" "stream_socket_accept" "stream_socket_client"
     "stream_socket_enable_crypto" "stream_socket_get_name" "stream_socket_pair" "stream_socket_recvfrom" "stream_socket_sendto"
     "stream_socket_server" "stream_socket_shutdown" "stream_wrapper_register" "stream_wrapper_restore" "stream_wrapper_unregister"
     "strftime" "strip_tags" "stripcslashes" "stripos" "stripslashes"
     "stristr" "strlen" "strnatcasecmp" "strnatcmp" "strncasecmp"
     "strncmp" "strpbrk" "strpos" "strptime" "strrchr"
     "strrev" "strripos" "strrpos" "strspn" "strstr"
     "strtok" "strtolower" "strtotime" "strtoupper" "strtr"
     "strval" "substr" "substr_compare" "substr_count" "substr_replace"
     "symlink" "sys_get_temp_dir" "sys_getloadavg" "syslog" "system"
     "tan" "tanh" "tempnam" "textdomain" "time"
     "time_nanosleep" "time_sleep_until" "timezone_abbreviations_list" "timezone_identifiers_list" "timezone_location_get"
     "timezone_name_from_abbr" "timezone_name_get" "timezone_offset_get" "timezone_open" "timezone_transitions_get"
     "timezone_version_get" "tmpfile" "touch" "trait_exists" "trigger_error"
     "trim" "uasort" "ucfirst" "ucwords" "uksort"
     "umask" "uniqid" "unlink" "unpack" "unserialize"
     "urldecode" "urlencode" "use_soap_error_handler" "user_error" "usleep"
     "usort" "utf8_decode" "utf8_encode" "var_dump" "var_export"
     "version_compare" "vfprintf" "vprintf" "vsprintf" "wddx_add_vars"
     "wddx_deserialize" "wddx_packet_end" "wddx_packet_start" "wddx_serialize_value" "wddx_serialize_vars"
     "wordwrap" "xhprof_disable" "xhprof_enable" "xhprof_sample_disable" "xhprof_sample_enable"
     "xml_error_string" "xml_get_current_byte_index" "xml_get_current_column_number" "xml_get_current_line_number" "xml_get_error_code"
     "xml_parse" "xml_parse_into_struct" "xml_parser_create" "xml_parser_create_ns" "xml_parser_free"
     "xml_parser_get_option" "xml_parser_set_option" "xml_set_character_data_handler" "xml_set_default_handler" "xml_set_element_handler"
     "xml_set_end_namespace_decl_handler" "xml_set_external_entity_ref_handler" "xml_set_notation_decl_handler" "xml_set_object" "xml_set_processing_instruction_handler"
     "xml_set_start_namespace_decl_handler" "xml_set_unparsed_entity_decl_handler" "zend_version" "zip_close" "zip_entry_close"
     "zip_entry_compressedsize" "zip_entry_compressionmethod" "zip_entry_filesize" "zip_entry_name" "zip_entry_open"
     "zip_entry_read" "zip_open" "zip_read" "zlib_decode" "zlib_encode"))
   symbol-end))

(defun hack--in-xhp-p (pos)
  "Is POS inside an XHP expression?

Returns t if we're in a text context, and nil if we're
interpolating inside the XHP expression."
  (let ((expression-start-pos
         (get-text-property pos 'hack-xhp-expression)))
    (and expression-start-pos
         (not (hack--in-xhp-interpolation-p pos expression-start-pos)))))

(defun hack--in-xhp-interpolation-p (pos xhp-start-pos)
  "Is POS inside an interpolation inside XHP?"
  (let* ((ppss (save-excursion (syntax-ppss pos)))
         (paren-pos (nth 1 ppss)))
    (and
     paren-pos
     (< xhp-start-pos paren-pos)
     (eq (char-after paren-pos) ?\{))))

(defun hack--search-forward-no-xhp (regex limit)
  "Search forward for REGEX up to LIMIT, ignoring occurrences inside XHP blocks."
  (let ((end-pos nil)
        (match-data nil))
    (save-excursion
      (while (and (not end-pos)
                  (re-search-forward regex limit t))
        (unless (hack--in-xhp-p (point))
          (setq match-data (match-data))
          (setq end-pos (point)))))
    (when match-data
      (set-match-data match-data)
      (goto-char end-pos))))

(defun hack--search-forward-keyword (limit)
  "Search forward from point for an occurrence of a keyword."
  ;; Keywords in PHP are case insensitive. In Hack, it's a syntax
  ;; error if you use the wrong case, but they're still reserved (so
  ;; you can't call a function CLASS).
  (let ((case-fold-search t))
    (hack--search-forward-no-xhp hack--keyword-regex limit)))

(defun hack--search-forward-type (limit)
  "Search forward from point for an occurrence of a type name."
  (let ((case-fold-search nil))
    (hack--search-forward-no-xhp hack--type-regex limit)))

(defconst hack--user-constant-regex
  (rx
   symbol-start
   ;; Constants are all in upper case, and cannot start with a
   ;; digit.
   (seq (any upper "_")
        (+ (any upper "_" digit)))
   symbol-end))

(defun hack--search-forward-constant (limit)
  "Search forward from point for an occurrence of a constant."
  ;; true, false and null are case insensitive.
  (let ((case-fold-search t))
    (hack--search-forward-no-xhp
     ;; null is also a type in Hack, but we highlight it as a
     ;; constant. It's going to occur more often as a value than a type.
     (regexp-opt
      '("null"
        "true" "false"
        "__compiler_halt_offset__"
        ;; From naming_special_names.ml.
        "__CLASS__"
        "__TRAIT__"
        "__FUNCTION__"
        "__METHOD__"
        "__LINE__"
        "__FILE__"
        "__DIR__"
        "__NAMESPACE__"
        "__COMPILER_FRONTEND__")
      'symbols)
     limit)))

(defun hack--search-forward-user-constant (limit)
  "Search forward from point for an occurrence of a constant."
  (hack--search-forward-no-xhp hack--user-constant-regex
                               limit))

(defun hack--search-forward-variable (limit)
  "Search forward from point for an occurrence of a variable."
  (hack--search-forward-no-xhp
   (rx symbol-start
       "$" (group (+ (or (syntax word) (syntax symbol))))
       symbol-end)
   limit))

(defun hack--search-forward-built-in-function (limit)
  "Search forward from point for an occurrence of a global built-in function."
  (hack--search-forward-no-xhp hack--built-in-fun-regex limit))

(defun hack--search-forward-function-name (limit)
  "Search forward from point for an occurrence of a function name."
  (hack--search-forward-no-xhp
   (rx symbol-start
       "function"
       symbol-end
       (+ space)
       (group
        symbol-start
        (+ (or (syntax word) (syntax symbol)))
        symbol-end))
   limit))

(defun hack--search-forward-dollardollar (limit)
  "Search forward from point for an occurrence of $$."
  (hack--search-forward-no-xhp
   (rx symbol-start "$$" symbol-end)
   limit))

(defvar hack-font-lock-keywords
  `(
    (,hack--header-regex
     (1 font-lock-keyword-face)
     (2 font-lock-keyword-face t t))
    ;; Handle XHP first, so we don't confuse <p>vec</p> with the vec
    ;; keyword.
    (hack-font-lock-xhp
     (0 'default))

    (hack--search-forward-keyword
     (0 'font-lock-keyword-face))

    (hack--search-forward-constant
     (0 'font-lock-constant-face))

    (hack--search-forward-type
     (1 'font-lock-type-face))

    ;; We use font-lock-variable-name-face for consistency with c-mode.
    (hack--search-forward-user-constant
     (0 'font-lock-variable-name-face))

    ;; $$ is a special variable used with the pipe operator
    ;; |>. Highlight the entire string, to avoid confusion with $s.
    (hack--search-forward-dollardollar
     (0 'font-lock-variable-name-face))
    ;; Highlight variables that start with $, e.g. $foo. Don't
    ;; highlight the $, to make the name easier to read (consistent with php-mode).
    (hack--search-forward-variable
     (1 'font-lock-variable-name-face))

    (hack--search-forward-built-in-function
     (1 'font-lock-builtin-face))

    (hack--search-forward-function-name
     1 font-lock-function-name-face)

    (hack-font-lock-fallthrough
     (1 'font-lock-keyword-face t))
    (hack-font-lock-unsafe
     (1 'error t))
    (hack-font-lock-unsafe-expr
     (1 'error t))
    (hack-font-lock-fixme
     (1 'error t))
    (hack-font-lock-ignore-error
     (1 'error t))

    ;; TODO: It would be nice to highlight interpolation operators in
    ;; Str\format or metacharacters in regexp literals too.
    (hack-font-lock-interpolate
     (0 font-lock-variable-name-face t))
    (hack-font-lock-interpolate-complex
     (0 font-lock-variable-name-face t))))

(defvar hack-mode-syntax-table
  (let ((table (make-syntax-table)))
    ;; Characters that are punctuation, not symbol elements.
    (modify-syntax-entry ?- "." table)
    (modify-syntax-entry ?< "." table)
    (modify-syntax-entry ?> "." table)
    (modify-syntax-entry ?+ "." table)
    (modify-syntax-entry ?& "." table)
    (modify-syntax-entry ?| "." table)
    (modify-syntax-entry ?= "." table)

    ;; Treat \ as punctuation, so we can navigate between different
    ;; parts of a namespace reference.
    (modify-syntax-entry ?\\ "." table)

    ;; Strings
    (modify-syntax-entry ?\" "\"" table)
    (modify-syntax-entry ?\\ "\\" table)
    (modify-syntax-entry ?' "\"" table)

    ;; Comments of the form
    ;; # This is a single-line comment.
    ;; Tag these as comment sequence b.
    (modify-syntax-entry ?# "< b" table)

    ;; / can start both // and /* style comments. When it's a second
    ;; character, it's a single line comment, so also tag as comment
    ;; sequence b.
    (modify-syntax-entry ?/ ". 124b" table)

    ;; * is the second character in /* comments, and the first
    ;; character in the end */.
    (modify-syntax-entry ?* ". 23" table)

    ;; Newlines end both # and // comments. Ensure we support both
    ;; unix and dos style newlines.
    (modify-syntax-entry ?\n "> b" table)
    (modify-syntax-entry ?\^m "> b" table)

    ;; < and > are paired delimiters.
    (modify-syntax-entry ?< "(>" table)
    (modify-syntax-entry ?> ")<" table)

    table))

(defun hack--comment-prefix (s)
  "Extract the leading '* ' from '* foo'."
  (when (string-match
         (rx bol (0+ space) (? "/") "*" (1+ space))
         s)
    (match-string 0 s)))

(defun hack--wrap-comment-inner (s)
  "Given a string of the form:

* a very long sentence here...

wrap it to:

* a very long
* sentence here..."
  (let* ((prefix (hack--comment-prefix s))
         (lines (s-lines s))
         (stripped-lines
          (mapcar
           (lambda (line) (s-chop-prefix prefix line))
           lines)))
    (with-temp-buffer
      (insert (s-join "\n" stripped-lines))
      (goto-char (point-min))
      (fill-paragraph)

      (let* ((wrapped-lines (s-lines (buffer-string)))
             (prefixed-lines
              (mapcar
               (lambda (line) (concat prefix line))
               wrapped-lines)))
        (s-join "\n" prefixed-lines)))))

(defun hack--fill-paragraph-star ()
  "Fill paragraph when point is inside a /* comment."
  (let* ((line-start-pos (line-beginning-position))
         (comment-start (nth 8 (syntax-ppss)))
         (comment-end nil))
    ;; Put a property on the text at point, so we can put point back afterwards.
    (put-text-property (point) (1+ (point)) 'hack-fill-start-pos t)
    (save-excursion
      (search-forward "*/")
      (setq comment-end (point)))
    (save-excursion
      (save-restriction
        ;; Narrow to the comment, to ensure we don't move beyond the end.
        (narrow-to-region comment-start comment-end)

        ;; Move over all the non-empty comment lines, considering * to
        ;; be an empty line.
        (while (and
                (not (eobp))
                (not (looking-at
                      (rx
                       bol
                       (? "/")
                       (0+ space) (? "*")
                       (0+ space)
                       eol))))
          (forward-line))

        (if (eobp)
            ;; Don't add the */ to our wrapped comment.
            (progn
              (forward-line -1)
              (end-of-line))
          ;; Exclude the trailing newline.
          (backward-char))

        (let ((contents (buffer-substring line-start-pos (point))))
          (delete-region line-start-pos (point))
          (insert (hack--wrap-comment-inner contents)))))
    (while (and (not (eobp))
                (not (get-text-property (point) 'hack-fill-start-pos)))
      (forward-char))
    (when (get-text-property (point) 'hack-fill-start-pos)
      (remove-text-properties (point) (1+ (point)) '(hack-fill-start-pos nil)))))

(defun hack-fill-paragraph (&optional _justify)
  "Fill the paragraph at point."
  (let* ((ppss (syntax-ppss))
         (in-comment-p (nth 4 ppss))
         (comment-start (nth 8 ppss))
         (comment-end nil)
         (in-star-comment-p nil))
    (when in-comment-p
      (save-excursion
        (goto-char comment-start)
        (when (looking-at (rx "/*"))
          (setq in-star-comment-p t))))
    (if in-star-comment-p
        (progn
          (hack--fill-paragraph-star)
          t)
      ;; Returning nil means that `fill-paragraph' will run, which is
      ;; sufficient for // comments.
      nil)))

(defvar hack-xhp-indent-debug-on nil)

(defun hack-xhp-indent-debug (&rest args)
  "Log ARGS if ‘hack-xhp-indent-debug-on’ is set."
  (if hack-xhp-indent-debug-on
      (apply 'message args)))

(defun hack-xhp-in-code-p ()
  "Return non-nil if point is currently in code,
i.e. not in a comment or string."
  (let* ((ppss (syntax-ppss))
         (in-string (nth 3 ppss))
         (in-comment (nth 4 ppss)))
    (and (not in-comment)
         (not in-string))))

(defun hack-xhp-indent-previous-semi (limit)
  "Search backward from point for the last semicolon.
Return nil if no semicolons were found before we reached position LIMIT.
Ignore semicolons in strings and comments."
  (if (not limit)
      (setq limit (point-min)))
  (when (> (point) limit)
    (let (res
          (keep-going t))
      (save-excursion
        (while keep-going
          (setq keep-going nil)

          (when (search-backward ";" limit t)
            (if (hack-xhp-in-code-p)
                (setq keep-going t)
              ;; semi found, done.
              (setq res (point)))))
        res))))

(defun hack-xhp-backward-whitespace ()
  "Move backwards until point is not on whitespace."
  (catch 'done
    (while t
      (when (bobp)
        (throw 'done nil))

      (let ((prev-char (char-after (1- (point))))
            (prev-syntax (syntax-after (1- (point)))))
        (unless (or (eq prev-char ?\n)
                    ;; 0 is the syntax code for whitespace.
                    (eq 0 (car-safe prev-syntax))
                    ;; Ignore whitespace in comments.
                    (nth 4 (syntax-ppss)))
          (throw 'done nil)))

      (backward-char))))

(defun hack-xhp-enclosing-brace-pos ()
  "Return the position of the innermost enclosing brace before point."
  (nth 1 (syntax-ppss)))

(defun hack-xhp-indent-offset ()
  "If point is inside an XHP expression, return the correct indentation amount.
Return nil otherwise."
  (let* ((start-pos (point))
         (min-brace
          (save-excursion
            ;; get out of anything being typed that might confuse the parsing
            (beginning-of-line)
            (hack-xhp-enclosing-brace-pos)))
         (min (save-excursion
                (or
                 (hack-xhp-indent-previous-semi min-brace)
                 min-brace
                 ;; skip past <?php
                 (+ (point-min) 5))))
         base-indent)
    ;; STEP 1: find a previous xhp element, and derive the normal
    ;; indentation from it.
    (save-excursion
      (if (and
           (> (point) min)
           (re-search-backward hack-xhp-start-regex min t)
           (hack-xhp-in-code-p))
          (setq
           base-indent
           ;; decide from this context if indentation should
           ;; be initially adjusted.
           (+
            ;; start with the indentation at this elt
            (current-indentation)
            ;; at the matched xhp element, figure out if the
            ;; indentation should be modified
            ;; TODO(abrady) too lazy to parse forward properly, these
            ;; work fine for now.
            (cond
             ;; CASE 1: matched elt is closed or self-closing e.g. <br />
             ;; or a 1-line enclosed stmt: <fbt:param>foo</fbt:param>
             ((save-excursion
                (beginning-of-line)
                (or
                 (re-search-forward "</" (line-end-position) t)
                 (re-search-forward "/> *$" start-pos t)
                 (re-search-forward "--> *$" start-pos t)))
              0)
             ;; DEFAULT: increase indent
             (t hack-indent-offset))))))
    ;; STEP 2: indentation adjustment based on what user has typed so far
    (if base-indent
        ;; STEP 2.1: we found indentation to adjust. use the current
        ;; context to determine how it should be adjusted
        (cond
         ;; CASE 0: indenting an attribute
         ((looking-at "^ *[a-zA-Z_-]+")
          base-indent)
         ;; CASE 1: Terminating a multiline php block is a special
         ;; case where we should default to php indentation as if we
         ;; were inside the braces
         ;; e.g. <div class={foo($a
         ;;                      $b)}>
         ((save-excursion
            (and
             (not (re-search-forward "^ *<" (line-end-position) t))
             (re-search-forward "}> *$" (line-end-position) t)))
          (hack-xhp-indent-debug "terminating php block")
          nil)
         ;; CASE 2: user is indenting a closing block, so out-dent
         ;; e.g.
         ;; <div>
         ;; </div>
         ((save-excursion
            (beginning-of-line)
            (re-search-forward "^ *</" (line-end-position) t))
          (+ base-indent (- hack-indent-offset)))
         ;; CASE 3: if this happens to be /> on its own
         ;; line, reduce indent (coding standard)
         ((save-excursion
            (goto-char start-pos)
            (re-search-forward "^ */> *" (line-end-position) t))
          (+ base-indent (- hack-indent-offset)))
         ;; CASE 4: close of xhp passed to a function, e.g.
         ;; foo(
         ;;   <xhp>
         ;; );
         ((save-excursion
            (re-search-forward "^ *);" (line-end-position) t))
          (+ base-indent (- hack-indent-offset)))
         ;; DEFAULT: no modification.
         (t base-indent))
      ;; STEP 2.2: FIRST STATEMENT AFTER XHP. if we're after
      ;; the close of an xhp statement it still messes up the php
      ;; indentation, so check that here and override
      (cond
       ;; CASE 1: multiline self-enclosing tag or closing tag
       ;; e.g.
       ;; <div
       ;;   foo="bar"
       ;; />;
       ;; - or -
       ;; <div>
       ;;  ...
       ;; </div>;
       ((save-excursion
          (hack-xhp-backward-whitespace)
          (and
           (looking-back "\\(/>\\|</.*>\\);" nil)
           ;; don't match single-line xhp $foo = <x:frag />;
           (not (re-search-backward "^ *\\$" (line-beginning-position) t))))
        ;; previous statement IS xhp. check what user has typed so
        ;; far
        (+
         (save-excursion (hack-xhp-backward-whitespace) (current-indentation))
         (cond
          ;; CASE 0: user typed a brace. outdent even more
          ((looking-at ".*}") (* -2 hack-indent-offset))
          ;; CASE 1: close of case in a switch stmt, e.g. case FOO:
          ((looking-at ".*: *$") (* -2 hack-indent-offset))
          ;; DEFAULT
          (t (- hack-indent-offset)))))
       ;; DEFAULT: not first stmt after xhp, indent normally
       (t nil)))))

(defun hack--indent-preserve-point (offset)
  "Indent the current line by OFFSET spaces.
Ensure point is still on the same part of the line afterwards."
  (let ((point-offset (- (current-column) (current-indentation))))
    (indent-line-to offset)

    ;; Point is now at the beginning of indentation, restore it
    ;; to its original position (relative to indentation).
    (when (>= point-offset 0)
      (move-to-column (+ (current-indentation) point-offset)))))

(defun hack--paren-depth-for-indent (pos)
  "Return the number of parentheses around POS.
Repeated parens on the same line are consider a single paren."
  (let ((depth 0)
        ;; Keep tracking of which line we saw each paren on. Since
        ;; calculating line number is O(n), just track the start
        ;; position of each line.
        (prev-paren-line-start nil))
    (save-excursion
      (goto-char pos)
      (catch 'done
        (while t
          (let* ((ppss (syntax-ppss))
                 (paren-start (nth 1 ppss)))
            (if paren-start
                (progn
                  (goto-char paren-start)
                  (unless (eq (line-beginning-position) prev-paren-line-start)
                    (setq depth (1+ depth)))
                  (setq prev-paren-line-start (line-beginning-position)))
              (throw 'done t))))))
    depth))

(defun hack--ends-with-infix-p (str)
  "Does STR end with an infix operator?"
  (string-match-p
   (rx
    space
    ;; https://docs.hhvm.com/hack/expressions-and-operators/operator-precedence
    (or "*" "/" "%" "+" "-" "."
	"<<" ">>" "<" "<=" ">" ">="
	"==" "!=" "===" "!==" "<=>"
	"&" "^" "|" "&&" "||" "?:" "??" "|>"
	"=" "+=" "-=" ".=" "*=" "/=" "%=" "<<=" ">>=" "&=" "^=" "|="
	"instanceof" "is" "as" "?as")
    (0+ space)
    line-end)
   str))

(defun hack--current-line ()
  "The current line enclosing point."
  (buffer-substring
   (line-beginning-position) (line-end-position)))

(defun hack--switch-count ()
  "Return a count of the switch blocks that enclose point.

Given the code, where | is point:

function foo() {
  if ($bar) {
    switch ($baz) {
      |
    }
  }
}

Then this function returns 1."
  (let ((switches 0)
        enclosing-paren-pos)
    (save-excursion
      (setq enclosing-paren-pos (nth 1 (syntax-ppss)))
      (while enclosing-paren-pos
        (goto-char enclosing-paren-pos)
        (let* ((line (s-trim (hack--current-line)))
               (symbols (s-split (rx symbol-end) line t))
               (symbol (car-safe symbols)))
          (when (string= symbol "switch")
            (setq switches (1+ switches))))
        (setq enclosing-paren-pos (nth 1 (syntax-ppss)))))
    switches))

(defun hack-indent-line ()
  "Indent the current line of Hack code.
Preserves point position in the line where possible."
  (interactive)
  (if (hack--in-xhp-p (point))
      (let ((indent (hack-xhp-indent-offset)))
	(when indent
	  (hack--indent-preserve-point indent)))
    (hack--indent-line)))

(defun hack--indent-line ()
  "Indent the current line of non-XHP Hack code."
  (let* ((syntax-bol (syntax-ppss (line-beginning-position)))
         (in-multiline-string-p (nth 3 syntax-bol))
         (point-offset (- (current-column) (current-indentation)))
         (paren-depth (hack--paren-depth-for-indent (line-beginning-position)))

         (ppss (syntax-ppss (line-beginning-position)))
         (current-paren-pos (nth 1 ppss))
         (text-after-paren
          (when current-paren-pos
            (save-excursion
              (goto-char current-paren-pos)
              (buffer-substring
               (1+ current-paren-pos)
               (line-end-position)))))
         (in-multiline-comment-p (nth 4 ppss))
         (current-line (hack--current-line)))
    ;; If the current line is just a closing paren, unindent by one level.
    (when (and
           (not in-multiline-comment-p)
           (string-match-p (rx bol (0+ space) (or ")" "}")) current-line))
      (setq paren-depth (1- paren-depth)))
    (cond
     ;; Don't indent inside heredoc/nowdoc strings.
     (in-multiline-string-p
      nil)
     ;; In multiline comments, ensure the leading * is indented by one
     ;; more space. For example:
     ;; /*
     ;;  * <- this line
     ;;  */
     (in-multiline-comment-p
      ;; Don't modify lines that don't start with *, to avoid changing the indentation of commented-out code.
      (when (or (string-match-p (rx bol (0+ space) "*") current-line)
                (string= "" current-line))
        (hack--indent-preserve-point (1+ (* hack-indent-offset paren-depth)))))
     ;; Indent according to the last paren position, if there is text
     ;; after the paren. For example:
     ;; foo(bar,
     ;;     baz, <- this line
     ((and
       text-after-paren
       (not (string-match-p (rx bol (0+ space) eol) text-after-paren)))
      (let (open-paren-column)
        (save-excursion
          (goto-char current-paren-pos)
          (setq open-paren-column (current-column)))
        (hack--indent-preserve-point (1+ open-paren-column))))
     ;; Indent according to the amount of nesting.
     (t
      (let ((current-line (s-trim current-line))
	    prev-line)
	(save-excursion
          ;; Try to go back one line.
          (when (zerop (forward-line -1))
            (setq prev-line
		  (buffer-substring (line-beginning-position) (line-end-position)))))

	;; Increase indent if the past line ended with an infix
	;; operator, so we get
	;; $x =
	;;   foo();
	(when (and prev-line
		   (hack--ends-with-infix-p prev-line))
	  (setq paren-depth (1+ paren-depth)))

	;; Increase indent for lines that are method calls or pipe expressions.
	;;
	;; $foo
	;;   ->bar(); <- this line
	(when (or (s-starts-with-p "->" current-line)
                  (s-starts-with-p "?->" current-line)
                  (s-starts-with-p "|>" current-line))
          (setq paren-depth (1+ paren-depth))))

      ;; Inside switch statements.
      (let ((switch-count (hack--switch-count)))
        (when (> switch-count 0)
          ;; Expressions inside switch statements should be further
          ;; indented, so they are underneath the case or default.
          (setq paren-depth (+ paren-depth switch-count))

          ;; The case or default line should be outdented one step.
          (when (string-match-p (rx bol (* whitespace) (or "case" "default:" "}"))
                                current-line)
            (setq paren-depth (1- paren-depth)))))

      (hack--indent-preserve-point (* hack-indent-offset paren-depth))))
    ;; Point is now at the beginning of indentation, restore it
    ;; to its original position (relative to indentation).
    (when (>= point-offset 0)
      (move-to-column (+ (current-indentation) point-offset)))))

(defalias 'hack-xhp-indent-line 'hack-indent-line)

;; hh_server can choke if you symlink your www root
(setq find-file-visit-truename t)

;; Ensure that we use `hack-mode' for .php files, but put the
;; association at the end of the list so `php-mode' wins (if installed).
;;;###autoload
(add-to-list 'auto-mode-alist '("\\.php$" . hack-mode) t)

;; These extensions are hack-specific.
;;;###autoload
(add-to-list 'auto-mode-alist '("\\.hhi$" . hack-mode))
;;;###autoload
(add-to-list 'auto-mode-alist '("\\.hack$" . hack-mode))
;;;###autoload
(add-to-list 'auto-mode-alist '("\\.hck$" . hack-mode))

(defun hack-format ()
  "Format the current buffer or region with hackfmt."
  (interactive)
  (if (use-region-p)
      (hack--format-region)
    (hack-format-buffer)))

(defun hack--format-region ()
  "Format the active region."
  (interactive)
  (let* ((start (save-restriction
                  (widen)
                  (region-beginning)))
         (end (save-restriction
                (widen)
                (region-end)))
         (command
          (format "%s --range %d %d %s"
                  hack-hackfmt-name
                  start end (buffer-file-name))))
    (shell-command-on-region
     start
     end
     command nil t)))

(defun hack-format-buffer ()
  "Format the current buffer with hackfmt."
  (interactive)
  (let ((src-buf (current-buffer))
        (src (buffer-string))
        (start-line (line-number-at-pos (point)))
        (start-column (current-column))
        (output-buf (get-buffer-create "*hackfmt*")))
    (with-current-buffer output-buf
      (erase-buffer)
      (insert src)
      (if (zerop
           (call-process-region (point-min) (point-max)
                                hack-hackfmt-name t t nil))
          (progn
            (unless (string= (buffer-string) src)
              ;; We've changed something, so update the source buffer.
              (copy-to-buffer src-buf (point-min) (point-max)))
            (kill-buffer))
        (error "Hackfmt failed, see *hackfmt* buffer for details")))
    ;; Do our best to restore point position.
    (goto-char (point-min))
    (forward-line (1- start-line))
    (forward-char start-column)))

(defun hack--maybe-format ()
  (when hack-format-on-save
    (hack-format-buffer)))

(defun hack-enable-format-on-save ()
  "Enable automatic formatting on the current hack-mode buffer.."
  (interactive)
  (setq-local hack-format-on-save t))

(defun hack-disable-format-on-save ()
  "Disable automatic formatting on the current hack-mode buffer.."
  (interactive)
  (setq-local hack-format-on-save nil))

;;;###autoload
(define-derived-mode hack-mode prog-mode "Hack"
  "Major mode for editing Hack code.

\\{hack-mode-map\\}"
  ;; Remove any old text properties, so we don't get stuck with
  ;; incorrect regions of hack-xhp-expression.
  (set-text-properties (point-min) (point-max) nil)

  (setq-local font-lock-defaults '(hack-font-lock-keywords))
  (set (make-local-variable 'syntax-propertize-function)
       hack--syntax-propertize-function)

  (setq-local compile-command (concat hack-client-program-name " --from emacs"))
  (setq-local indent-line-function #'hack-indent-line)
  (setq-local comment-start "// ")
  (setq-local fill-paragraph-function #'hack-fill-paragraph)
  (setq imenu-generic-expression
        ;; TODO: distinguish functions from methods.
        `(("Function"
           ,(rx
             line-start
             (? (* space) (seq symbol-start (or "private" "protected" "public") symbol-end))
             (? (* space) (seq symbol-start "static" symbol-end))
             (? (* space) (seq symbol-start "async" symbol-end))
             (* space)
             symbol-start "function" symbol-end
             (+ space)
             (group (seq symbol-start (+? any) symbol-end)))
           1)
          ("Class"
           ,(rx
             line-start
             (? (* space) (seq symbol-start "abstract" symbol-end))
             (? (* space) (seq symbol-start "final" symbol-end))
             (* space)
             symbol-start "class" symbol-end
             (+ space)
             (group (seq symbol-start (+? any) symbol-end)))
           1)
          ("Interface"
           ,(rx symbol-start "interface" symbol-end
                (+ space)
                (group (seq symbol-start (+? any) symbol-end)))
           1)
          ("Trait"
           ,(rx symbol-start "trait" symbol-end
                (+ space)
                (group (seq symbol-start (+? any) symbol-end)))
           1)))

  (add-hook 'before-save-hook #'hack--maybe-format nil t))



(provide 'hack-mode)
;;; hack-mode.el ends here
