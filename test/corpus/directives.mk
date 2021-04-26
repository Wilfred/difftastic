================
Directive, vpath
================
vpath
vpath %.p
vpath %.p ../foo

---

(makefile
  (vpath_directive)
  (vpath_directive
    	pattern: (word))
  (vpath_directive
        pattern: (word)
    directories: (paths (word))))

================================
Directive, vpath, list delimiter
================================
vpath % foo:bar

---

(makefile
  (vpath_directive
    pattern: (word)
    directories: (paths (word) (word))))

