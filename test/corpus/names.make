================================================================================
Name, wildcard, minimal
================================================================================
* ?:

---

(makefile
  (rule
    (targets
      (name)
      (name))))

================================================================================
Name, wildcard and word
================================================================================
?a*  *b  ?a*c:
 a*  *b?  a*c?:

---

(makefile
  (rule
    (targets
      (name (word))
      (name (word))
      (name (word) (word))))
  (rule
    (targets
      (name (word))
      (name (word))
      (name (word) (word)))))

================================================================================
Name, pattern
================================================================================
%a b% a%b:

---

(makefile
  (rule
    (targets
      (name (word))
      (name (word))
      (name (word) (word)))))

================================================================================
Name, pattern, wildcard
================================================================================
 %a*  *b%:
*a%b a%b*:

---

(makefile
  (rule
    (targets
      (name (word))
      (name (word))))
  (rule
    (targets
      (name (word) (word))
      (name (word) (word)))))

================================================================================
Name, filename
================================================================================
a.b c.d:

---

(makefile
  (rule
    (targets
      (name (word) (word))
      (name (word) (word)))))

================================================================================
Name, filename, wildname and pattern
================================================================================
*.b %.d:

---

(makefile
  (rule
    (targets
      (name (word))
      (name (word)))))

================================================================================
Name, path, minimal I
================================================================================
/a a/b a/b/c:
/a/ a/b/ a/b/c/:

---

(makefile
  (rule
    (targets
      (path (name))
      (path (name) (name))
      (path (name) (name) (name))))
  (rule
    (targets
      (path (name))
      (path (name) (name))
      (path (name) (name) (name)))))

================================================================================
Name, path, minimal II
================================================================================
./a ./a/b ./a/b/c:
../a ../a/b ../a/b/c:

---

(makefile
  (rule
    (targets
      (path (name))
      (path (name) (name))
      (path (name) (name) (name))))
  (rule
    (targets
      (path (name))
      (path (name) (name))
      (path (name) (name) (name)))))
