(defun_header
  function_name: (sym_lit) @name) @definition.function

;;; Function Calls ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; Basically, we consider every list literal with symbol as the
;;; first element to be a call to a function named by that element.
;;; But we must exclude some cases. Note, tree-sitter @ignore
;;; cases only work if they are declared before the cases
;;; we want to include.

;; Exclude lambda lists for function definitions
;; For example:
;;
;;    (defun my-func (arg1 arg2) ...)
;;
;; do not treat (arg1 arg2) as a call of function arg1
;;
(defun_header
  lambda_list: (list_lit . [(sym_lit) (package_lit)] @ignore))

;; Similar to the above, but for
;;
;;     (defmethod m ((type1 param1) (type2 param2)) ...)
;;
;; where list literals having symbol as their first element
;; are nested inside the lambda list.
(defun_header
  lambda_list: (list_lit (list_lit . [(sym_lit) (package_lit)] @ignore)))

;; TODO: exclude also:
;;       - (let ((var ...) (var2 ...)) ...)
;;              exclude var, var2
;;       - the same for let*
;;       - (defclass name (parent parent2)
;;           ((slot1 ...)
;;            (slot2 ...))
;;              exclude the parent, slot1, slot2
;;       - what else?

;; Inlclude all other cases - list literal with symbol as the
;; first element
(list_lit . [(sym_lit) (package_lit)] @name) @reference.call

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; classes

(list_lit . [(sym_lit) (package_lit)] @ignore
          . [(sym_lit) (package_lit)] @name
  (#match? @ignore "(cl:defclass|defclass)")
          ) @definition.class

(list_lit . [(sym_lit) (package_lit)] @ignore
          . (quoting_lit [(sym_lit) (package_lit)] @name)
  (#match? @ignore "(cl:make-instance|make-instance)")
          ) @reference.class
