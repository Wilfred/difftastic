================================================================================
Import declaration
================================================================================
import garrett.damore;
--------------------------------------------------------------------------------

(source_file
  (import_declaration
    (import)
    (imported
      (module_fqn
        (identifier)
        (identifier)))))

================================================================================
Multiple imports
================================================================================
import garrett.damore, dcell.tables;
--------------------------------------------------------------------------------

(source_file
  (import_declaration
    (import)
    (imported
      (module_fqn
        (identifier)
        (identifier)))
    (imported
      (module_fqn
        (identifier)
        (identifier)))))

================================================================================
Multiple imports with alias
================================================================================
import garrett.damore, tabs = dcell.tables, dcell.terminfo;
--------------------------------------------------------------------------------

(source_file
  (import_declaration
    (import)
    (imported
      (module_fqn
        (identifier)
        (identifier)))
    (imported
      (identifier)
      (module_fqn
        (identifier)
        (identifier)))
    (imported
      (module_fqn
        (identifier)
        (identifier)))))

================================================================================
Import alias declaration
================================================================================
import garrett = garrett.damore;
--------------------------------------------------------------------------------

(source_file
  (import_declaration
    (import)
    (imported
      (identifier)
      (module_fqn
        (identifier)
        (identifier)))))

================================================================================
Import with binding
================================================================================
import garrett.damore : what = where;
--------------------------------------------------------------------------------

(source_file
  (import_declaration
    (import)
    (imported
      (module_fqn
        (identifier)
        (identifier)))
    (import_bind
      (identifier)
      (identifier))))

================================================================================
Import with bindings
================================================================================
import garrett.damore : what = where, when = then;
--------------------------------------------------------------------------------

(source_file
  (import_declaration
    (import)
    (imported
      (module_fqn
        (identifier)
        (identifier)))
    (import_bind
      (identifier)
      (identifier))
    (import_bind
      (identifier)
      (identifier))))

================================================================================
Import alias with bindings
================================================================================
import garrett = garrett.damore : what = where, when = then;
--------------------------------------------------------------------------------

(source_file
  (import_declaration
    (import)
    (imported
      (identifier)
      (module_fqn
        (identifier)
        (identifier)))
    (import_bind
      (identifier)
      (identifier))
    (import_bind
      (identifier)
      (identifier))))

================================================================================
Static import alias with bindings
================================================================================
static import garrett = garrett.damore : what = where, when = then;
--------------------------------------------------------------------------------

(source_file
  (static)
  (import_declaration
    (import)
    (imported
      (identifier)
      (module_fqn
        (identifier)
        (identifier)))
    (import_bind
      (identifier)
      (identifier))
    (import_bind
      (identifier)
      (identifier))))

================================================================================
Import expression
================================================================================
auto x = import("something.png");
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (import_expression
      (import)
      (expression
        (string_literal
          (quoted_string))))))
