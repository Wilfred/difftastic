;;;; -*- buffer-auto-save-file-name: nil; Mode: LISP; Syntax: COMMON-LISP; indent-tabs-mode: nil; coding: utf-8; show-trailing-whitespace: t -*-
;;;; Disabled Emacs auto save, by setting buffer-auto-save-file-name: nil
;;;; because `tree-sitter tests` complains about
;;;; the auto save file with tilda at the end of the name.

;;;; Negative assertions are not supported,
;;;; https://github.com/tree-sitter/tree-sitter/issues/2304
;;;; But I use exclamation sign to mark the places that
;;;; must not be tagged:
;;;;
;;;;     ! tag.name
;;;;
;;;; They are not checked automatically, but we can check
;;;; those places manually, by reviewing the output
;;;; of `tree-sitter tags tags/tags-test.lisp`


(defun test-fn (a b)
  ;;    ^ definition.function
  (let ((x (+ a b))
  ;;        ^ reference.call
        (y (- a b)))
  ;;        ^ reference.call
    (* x y)))
  ;; ^ reference.call


(let ((a 1) (b 2))
  ;;   ! reference.call
  ;;         ! reference.call
  )

(cl:let ((a 1) (b 2))
  ;;      ! reference.call
  ;;            ! reference.call
  )

(let* ((a 1) (b 2))
  ;;    ! reference.call
  ;;          ! reference.call
  )

(cl:let* ((a 1) (b 2))
  ;;       ! reference.call
  ;;             ! reference.call
  )


(LET ((a 1) (bb 2))
  ;;   ! reference.call
  ;;         ! reference.call
  )

(lets ((a 1) (bb 2))
  ;;    ! reference.call
  ;;          ! reference.call
  )

(zlet ((a 1) (bb 2))
  ;;    ! reference.call
  ;;          ! reference.call
  )

(defun tst ()
  ;;   ^ definition.function
  (CL:LET ((a 1)
  ;;        ! reference.call
           (x 2)
  ;;        ! reference.call
           (y (add 3 7)))
  ;;           ^ reference.call
  ;;        ! reference.call
    ))

(flet ((my-add (a b) (+ a b))
       (my-mul (a b) (* a b)))
  (my-add 1 (my-mul 7 3)))
;; ^ reference.call
;;           ^ reference.call

(defclass test-class (base-class)
  ;;  ^ reference.call
  ;;      ^ definition.class
    ((slot-a)
     (slot-b)))

(dEFclass test-class (base-class)
  ;;        ^ definition.class
    ((slot-a)
     (slot-b)))

(maKE-instance 'test-class)
;;   ^ reference.call
;;              ^ reference.class

(make-instance 'test-class)
;; ^ reference.call
;;                 ^ reference.class

(defclasses test-class2 (base-class)
  ;;        ! reference.class
    ((slot-a)
     (slot-b)))

(make-instances 'test-class2)
;;               ! reference.class

(ddddefclass test-class3 (base-class)
  ;;         ! definition.class
    ((slot-a)
     (slot-b)))

(mmmmake-instance 'test-class3)
;;                 ! reference.class


