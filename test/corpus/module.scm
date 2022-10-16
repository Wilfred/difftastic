================================================================================
Module declaration
================================================================================
module test.blah.bah;
--------------------------------------------------------------------------------

(source_file
  (module_def
    (module_declaration
      (module)
      (identifier)
      (identifier)
      (identifier))))

================================================================================
Module deprecated
================================================================================
deprecated module test.blah.bah;
--------------------------------------------------------------------------------

(source_file
  (module_def
    (module_declaration
      (deprecated_attribute
        (deprecated))
      (module)
      (identifier)
      (identifier)
      (identifier))))

================================================================================
Module deprecated reason
================================================================================
deprecated ("it is too old") module test.blah.bah;
--------------------------------------------------------------------------------

(source_file
  (module_def
    (module_declaration
      (deprecated_attribute
        (deprecated)
        (string_literal))
      (module)
      (identifier)
      (identifier)
      (identifier))))

================================================================================
Module at-attribute
================================================================================
@uda module test.blah.bah;
--------------------------------------------------------------------------------

(source_file
  (module_def
    (module_declaration
      (at_attribute
        (identifier))
      (module)
      (identifier)
      (identifier)
      (identifier))))

================================================================================
Module at-attribute parameter
================================================================================
@uda("something") module test.blah.bah;
--------------------------------------------------------------------------------

(source_file
  (module_def
    (module_declaration
      (at_attribute
        (identifier)
        (string_literal))
      (module)
      (identifier)
      (identifier)
      (identifier))))

================================================================================
Module multiple attributes
================================================================================
@UDA(1) @UDA(2) module imports.udamodule2;
--------------------------------------------------------------------------------

(source_file
  (module_def
    (module_declaration
      (at_attribute
        (identifier)
        (int_literal))
      (at_attribute
        (identifier)
        (int_literal))
      (module)
      (identifier)
      (identifier))))
