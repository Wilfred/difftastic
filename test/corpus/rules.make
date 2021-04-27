================================================================================
Rule, targets, single
================================================================================
target:
%.o:
*.o:

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name)))
  (rule
    (targets
      (filename
        left: (pattern)
        right: (name))))
  (rule
    (targets
      (filename
        left: (wildcard)
        right: (name)))))

================================================================================
Rule, targets, single, blank space after
================================================================================
target :
%.o    :
*.o    :

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name)))
  (rule
    (targets
      (filename
        left: (pattern)
        right: (name))))
  (rule
    (targets
      (filename
        left: (wildcard)
        right: (name)))))

================================================================================
Rule, targets, single, blank space before and after
================================================================================
 target   :
  %.o     :
   *.o    :

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name)))
  (rule
    (targets
      (filename
        left: (pattern)
        right: (name))))
  (rule
    (targets
      (filename
        left: (wildcard)
        right: (name)))))

================================================================================
Rule, targets, multiple, blank space
================================================================================
  target %.o     *.o    :

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name)
      (filename
        (pattern)
        (name))
      (filename
        (wildcard)
        (name)))))

================================================================================
Rule, targets, built-in
================================================================================
.PHONY: foo
.SUFFIXES: foo
.DEFAULT: foo
.PRECIOUS: foo
.INTERMEDIATE: foo
.SECONDARY: foo
.SECONDEXPANSION: foo
.DELETE_ON_ERROR: foo
.IGNORE: foo
.LOW_RESOLUTION_TIME: foo
.SILENT: foo
.EXPORT_ALL_VARIABLES: foo
.NOTPARALLEL: foo
.ONESHELL: foo
.POSIX: foo

--------------------------------------------------------------------------------

(makefile
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name)))
  (rule
    (builtin_target)
    (prerequisites
      (name))))

================================================================================
Rule, targets, multiple
================================================================================
foo %.b *.o:

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name)
      (filename
        left: (pattern)
        right: (name))
      (filename
        left: (wildcard)
        right: (name)))))

================================================================================
Rule, targets, grouped (grouped targets)
================================================================================
foo %.n *.o &:

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name)
      (filename
        left: (pattern)
        right: (name))
      (filename
        left: (wildcard)
        right: (name)))))

================================================================================
Rule, pre-requisites, single
================================================================================
target: foo
target: %.c
target: *.d

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (prerequisites
      (name)))
  (rule
    (targets
      (name))
    (prerequisites
      (filename
        (pattern)
        (name))))
  (rule
    (targets
      (name))
    (prerequisites
      (filename
        (wildcard)
        (name)))))

================================================================================
Rule, pre-requisites, multiple
================================================================================
target: foo %.b c.o

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (prerequisites
      (name)
      (filename
        (pattern)
        (name))
      (filename
        (name)
        (name)))))

================================================================================
Rule, pre-requisites, multiple, splited lines, one per line
================================================================================
target: foo\
	%.b\
c.o

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (prerequisites
      (name)
      (filename
        (pattern)
        (name))
      (filename
        (name)
        (name)))))

================================================================================
Rule, pre-requisites, multiple, splited lines, multiple per line
================================================================================
target: foo %.b c.o\
	foo %.b c.o\
foo %.b c.o

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (prerequisites
      (name)
      (filename
        (pattern)
        (name))
      (filename
        (name)
        (name))
      (name)
      (filename
        (pattern)
        (name))
      (filename
        (name)
        (name))
      (name)
      (filename
        (pattern)
        (name))
      (filename
        (name)
        (name)))))

================================================================================
Rule, pre-requisites, order only, single
================================================================================
foo: | bar

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    order_only: (prerequisites
      (name))))

================================================================================
Rule, recipe, empty (empty rule)
================================================================================
target: ;

target:
	

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe))
  (rule
    (targets
      (name))
    (recipe)))

================================================================================
Rule, recipe, single line
================================================================================
target:
	echo "foobar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)))))

================================================================================
Rule, recipe, single line, custom .RECIPEPREFIX (TODO)
================================================================================
.RECIPEPREFIX = >

target:
>echo "foobar"

.RECIPEPREFIX = a

target:
aecho "foobar"

--------------------------------------------------------------------------------

; TODO

================================================================================
Rule, recipe, single line, suppress echoing
================================================================================
target:
	@echo "foobar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)))))

================================================================================
Rule, recipe, single line, NOT comment
================================================================================
target:
	# foo

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)))))

================================================================================
Rule, recipe, single line, splitted
================================================================================
target:
	echo "foo\
bar"

target:
	echo "foo\
	bar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text))))
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text)))))

================================================================================
Rule, recipe, single line, splited, supress echoing
================================================================================
target:
	@echo "foo\
bar"

target:
	@echo "foo\
	bar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text))))
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text)))))

================================================================================
Rule, recipe, single line, splited, escape
================================================================================
target:
	@echo "\\foo\
	bar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text)))))

================================================================================
Rule, recipe, multiple lines
================================================================================
target:
	foo
	bar
	baz

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text))
      (recipe_line
        (shell_text))
      (recipe_line
        (shell_text)))))

================================================================================
Rule, recipe, attached to targets-and-prerequisites, single line
================================================================================
target: ; echo "foobar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)))))

================================================================================
Rule, recipe, attached to targets-and-prerequisites, single line, splited
================================================================================
target: ; echo "foo\
bar"

target: ; echo "foo\
	bar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text))))
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text)))))

================================================================================
Rule, recipe, attached to targets-and-prerequisites, multiple lines
================================================================================
target: ; @echo "foo\
bar"

target: ; @echo "foo\
	bar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text))))
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text)))))

================================================================================
Rule, recipe, blank lines
================================================================================
target:

	echo "foo\
	bar\
bar"

	
	echo "foobar"

target: ;

	@echo "foo\
	bar\
bar"

	echo "foobar"

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text)
        (shell_text))
      (recipe_line
        (shell_text))))
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text)
        (shell_text)
        (shell_text))
      (recipe_line
        (shell_text)))))

================================================================================
Rule, recipe, multiple lines, comments
================================================================================
target:

	foo
# comment
	baz

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (recipe
      (recipe_line
        (shell_text))
      (comment)
      (recipe_line
        (shell_text)))))

================================================================================
Rule, recipe, automatic variable I
================================================================================
foo: bar
	gcc -c -o $@ $<

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (prerequisites
      (name))
    (recipe
      (recipe_line
        (shell_text
          (automatic_variable)
          (automatic_variable))))))

================================================================================
Rule, recipe, automatic variable II
================================================================================
foo: bar
	gcc -c -o $(@) $(<)

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (prerequisites
      (name))
    (recipe
      (recipe_line
        (shell_text
          (automatic_variable)
          (automatic_variable))))))

================================================================================
Rule, complete
================================================================================
target: prereq
	recipe

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (name))
    (prerequisites
      (name))
    (recipe
      (recipe_line
        (shell_text)))))

================================================================================
Rule, static pattern
================================================================================
foo.o bar.o: %.o: %.c

--------------------------------------------------------------------------------

(makefile
  (rule
    (targets
      (filename
        (name)
        (name))
      (filename
        (name)
        (name)))
    (target_pattern
      (filename
        (pattern)
        (name)))
    (prerequisites
      (filename
        (pattern)
        (name)))))
