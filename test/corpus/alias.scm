================================================================================
Alias simple initializer
================================================================================

alias n1 = int;
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (type
        (int)))))

================================================================================
Alias initializer with storage class
================================================================================

alias n1 = extern int;
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (storage_class
        (extern))
      (type
        (int)))))

================================================================================
Alias initializer with array type
================================================================================

alias n1 = extern int[6];
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (storage_class
        (extern))
      (type
        (int)
        (expression
          (int_literal))))))

================================================================================
Alias initializer with function type
================================================================================

alias n1 = int(int);
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (type
        (int))
      (parameters
        (parameter
          (type
            (int)))))))

================================================================================
Alias initializer with function attrs
================================================================================

alias n1 = int(int) pure;
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (type
        (int))
      (parameters
        (parameter
          (type
            (int))))
      (member_function_attribute
        (pure)))))

================================================================================
Alias initializer with template type
================================================================================

alias n1 = f!(int);
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (type
        (template_instance
          (identifier)
          (template_arguments
            (template_argument
              (type
                (int)))))))))

================================================================================
Alias initializer with template function type
================================================================================

alias n1 = f!(int)(int);
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (type
        (template_instance
          (identifier)
          (template_arguments
            (template_argument
              (type
                (int))))))
      (parameters
        (parameter
          (type
            (int)))))))

================================================================================
Alias function literal
================================================================================

alias n1 = f => f++;
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (function_literal
        (identifier)
        (postfix_expression
          (identifier))))))

================================================================================
Alias multiple initializers
================================================================================

alias n1 = int,  n2 = char;
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (type
        (int)))
    (alias_initializer
      (identifier)
      (type
        (char)))))

================================================================================
Alias short
================================================================================

alias int n1;
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (type
      (int))
    (identifier)))

================================================================================
Alias short function type
================================================================================

alias int n1(int);
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (type
      (int))
    (identifier)
    (parameters
      (parameter
        (type
          (int))))))

================================================================================
Alias short rename
================================================================================

alias t_old t_new;
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (type
      (identifier))
    (identifier)))

================================================================================
Alias symbol
================================================================================

alias id = other.name;
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (type
        (identifier)
        (identifier)))))

================================================================================
Alias this
================================================================================

alias id this;
--------------------------------------------------------------------------------

(source_file
  (alias_this
    (alias)
    (identifier)
    (this)))

================================================================================
Alias template function
================================================================================

alias void m(int tp)(char c);

--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (type
      (void))
    (identifier)
    (template_parameters
      (template_parameter
        (type
          (int))
        (identifier)))
    (parameters
      (parameter
        (type
          (char))
        (identifier)))))

================================================================================
Alias reassignment
================================================================================

template  t(alias F, Args...)
{
   alias A = AliasSeq!();
    static foreach (Arg; Args)
        A = AliasSeq!(A, F!Arg);
}

--------------------------------------------------------------------------------

(source_file
  (template_declaration
    (template)
    (identifier)
    (template_parameters
      (template_parameter
        (alias)
        (identifier))
      (template_parameter
        (identifier)))
    (alias_declaration
      (alias)
      (alias_initializer
        (identifier)
        (type
          (template_instance
            (identifier)
            (template_arguments)))))
    (static_foreach_declaration
      (static)
      (foreach)
      (foreach_type
        (identifier))
      (expression
        (identifier))
      (alias_reassign
        (identifier)
        (type
          (template_instance
            (identifier)
            (template_arguments
              (template_argument
                (identifier))
              (template_argument
                (template_instance
                  (identifier)
                  (template_arguments
                    (identifier)))))))))))

================================================================================
Alias with align parameter
================================================================================
alias g_t = align(8) _gg_t[NREG];
--------------------------------------------------------------------------------

(source_file
  (alias_declaration
    (alias)
    (alias_initializer
      (identifier)
      (storage_class
        (align_attribute
          (align)
          (expression
            (int_literal))))
      (type
        (identifier)
        (expression
          (identifier))))))

================================================================================
Alias this
================================================================================
struct S { int n; alias this = n; }
--------------------------------------------------------------------------------
(source_file
  (struct_declaration
	(struct)
	(identifier)
	(aggregate_body
	  (variable_declaration
		(type
		  (int))
		(declarator
		  (identifier)))
	  (alias_declaration
		(alias)
		(this)
		(identifier)))))
