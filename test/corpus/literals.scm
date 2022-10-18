================================================================================
Integers
================================================================================

auto a = 123;
auto b = 0b10;
auto c = 0xFF;
auto d = 123L;
auto e = 456uL;

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal)))

================================================================================
Zeros
================================================================================

auto i1 = 0;
auto i2 = 0U;
auto i3 = 0u;
auto i4 = 0Lu;
auto i5 = 0LU;
auto i6 = 0UL;
auto i7 = 0L;
auto i8 = 0uL;
auto i9 = 0_;
auto i10 = 0__00;

// hex
auto i11 = 0x0;
auto i12 = 0X0;

// binary;
auto i13 = 0b0;
auto i14 = 0B0;

// floating point
auto f1 = 0.;
auto f2 = 0.0;
auto f3 = .0;
auto f4 = 0e0;
auto f5 = 0e-0;
auto f6 = 0e+0;
auto f7 = 0x0p0;
auto f8 = 0x0p-0;
auto f9 = 0x0p+0;

// type suffixes
auto f10 = 0.0i;
auto f11 = 0i;
auto f12 = 0F;
auto f13 = 0.0f;

// with exponents
auto f14 = 0.0e1i;
auto f15 = 0x0p20f;

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (int_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal)))

================================================================================
Floats
================================================================================

auto f1 = 123. ;
auto f2 = .123 ;
auto f3 = 12.345;
auto f4 = 12.3L;
auto f5 = 456i;
auto f6 = 456f;
auto f7 = 456F;
auto f8 = 456Fi;
auto f9 = 1_000_000.0;

// exponents
auto e1 = 1e20;
auto e2 = 1e-20;
auto e3 = 1e+20;
auto e4 = 1E20;
auto e5 = 1E-20;
auto e6 = 1E+20;
auto e7 = 0x12P30;
auto e8 = 0x12P30F;
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (float_literal)))

================================================================================
Characters
================================================================================
auto c1 = 'a';
auto c2 = '\x12';
auto c3 = '\ufeff';
auto c4 = '\U01EF1234';
auto c5 = '\&copy;';
auto c6 = '\r';
auto c7 = '\n';
auto c8 = '\0';
auto c9 = '\01';
auto c10 = '\012';
auto c11 = '\'';
auto c12 = '\\';

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (char_literal)))

================================================================================
Strings
================================================================================
auto s1 = "abc";
auto s2 = "a\"bc";
auto s3 = "a\u1234b\\";

// backquoted string
auto s4 = `abc def
`;

// raw string
auto s5 = r"
this is some text
";

// some strings with suffixes
auto s6 = "abc"w;
auto s7 = "abc"c;
auto s8 = "abc"d;

auto s9 = `yabba
dabba
do!
`d;

auto s10 = r"🥂"w;
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (comment)
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal)))

================================================================================
Token Strings
================================================================================
auto s1 = q{ if {""} /*comment*/ bob };
--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal
      (token_string
        (keyword
          (if))
        (string_literal)
        (comment)
        (identifier)))))

================================================================================
Arrays
================================================================================

auto a1 = [ 1, 2, 3 ];

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (array_literal
      (int_literal)
      (int_literal)
      (int_literal))))

================================================================================
Associative Arrays
================================================================================

auto aa1 = [ "bob": 1, "sue": 2, "charlie": 3 ];

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (array_literal
      (string_literal)
      (int_literal)
      (string_literal)
      (int_literal)
      (string_literal)
      (int_literal))))

================================================================================
Trailing Period
================================================================================

auto aa1 = 1.seconds;

auto r = x[1..9];

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (property_expression
      (int_literal)
      (identifier)))
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (index_expression
      (identifier)
      (index
        (expression
          (int_literal))
        (expression
          (int_literal))))))

================================================================================
Simple delimited string
================================================================================

auto X = q"/ { something/here }"" /"c;
int x;

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (variable_declaration
    (type
      (int))
    (declarator
      (identifier))))

================================================================================
Nested delimited string
================================================================================

auto X = q"{ "{ something }" }"c;
int x;

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (variable_declaration
    (type
      (int))
    (declarator
      (identifier))))

================================================================================
Here doc string
================================================================================

auto X = q"END

Something END" here
but
END";
int x;

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (variable_declaration
    (type
      (int))
    (declarator
      (identifier))))

================================================================================
Here doc string with underscore
================================================================================

auto X = q"_END

Something END" here
but
_END"w;
int x;

--------------------------------------------------------------------------------

(source_file
  (auto_declaration
    (storage_class
      (auto))
    (identifier)
    (string_literal))
  (variable_declaration
    (type
      (int))
    (declarator
      (identifier))))

================================================================================
Binary literal leading underscore
================================================================================
int b = 0xb___011__11_;
--------------------------------------------------------------------------------

(source_file
  (variable_declaration
    (type
      (int))
    (declarator
      (identifier)
      (int_literal))))
