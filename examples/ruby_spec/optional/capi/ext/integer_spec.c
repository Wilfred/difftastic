#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_INTEGER_PACK
static VALUE integer_spec_rb_integer_pack(VALUE self, VALUE value,
    VALUE words, VALUE numwords, VALUE wordsize, VALUE nails, VALUE flags)
{
  int result = rb_integer_pack(value, (void*)RSTRING_PTR(words), FIX2INT(numwords),
      FIX2INT(wordsize), FIX2INT(nails), FIX2INT(flags));
  return INT2FIX(result);
}
#endif

void Init_integer_spec(void) {
#ifdef HAVE_RB_INTEGER_PACK
  VALUE cls;
  cls = rb_define_class("CApiIntegerSpecs", rb_cObject);

  rb_define_const(cls, "MSWORD", INT2NUM(INTEGER_PACK_MSWORD_FIRST));
  rb_define_const(cls, "LSWORD", INT2NUM(INTEGER_PACK_LSWORD_FIRST));
  rb_define_const(cls, "MSBYTE", INT2NUM(INTEGER_PACK_MSBYTE_FIRST));
  rb_define_const(cls, "LSBYTE", INT2NUM(INTEGER_PACK_LSBYTE_FIRST));
  rb_define_const(cls, "NATIVE", INT2NUM(INTEGER_PACK_NATIVE_BYTE_ORDER));
  rb_define_const(cls, "PACK_2COMP", INT2NUM(INTEGER_PACK_2COMP));
  rb_define_const(cls, "LITTLE_ENDIAN", INT2NUM(INTEGER_PACK_LITTLE_ENDIAN));
  rb_define_const(cls, "BIG_ENDIAN", INT2NUM(INTEGER_PACK_BIG_ENDIAN));
  rb_define_const(cls, "FORCE_BIGNUM", INT2NUM(INTEGER_PACK_FORCE_BIGNUM));
  rb_define_const(cls, "NEGATIVE", INT2NUM(INTEGER_PACK_NEGATIVE));

  rb_define_method(cls, "rb_integer_pack", integer_spec_rb_integer_pack, 6);
#endif
}

#ifdef __cplusplus
extern "C" {
#endif
