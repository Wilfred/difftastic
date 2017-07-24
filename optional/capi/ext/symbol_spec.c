#include "ruby.h"
#include "rubyspec.h"

#ifdef HAVE_RUBY_ENCODING_H
#include "ruby/encoding.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_INTERN
VALUE symbol_spec_rb_intern(VALUE self, VALUE string) {
  return ID2SYM(rb_intern(RSTRING_PTR(string)));
}

VALUE symbol_spec_rb_intern2(VALUE self, VALUE string, VALUE len) {
  return ID2SYM(rb_intern2(RSTRING_PTR(string), FIX2LONG(len)));
}

VALUE symbol_spec_rb_intern_const(VALUE self, VALUE string) {
  return ID2SYM(rb_intern_const(RSTRING_PTR(string)));
}

VALUE symbol_spec_rb_intern_c_compare(VALUE self, VALUE string, VALUE sym) {
  ID symbol = rb_intern(RSTRING_PTR(string));
  return (SYM2ID(sym) == symbol) ? Qtrue : Qfalse;
}

VALUE symbol_spec_rb_intern2_c_compare(VALUE self, VALUE string, VALUE len, VALUE sym) {
  ID symbol = rb_intern2(RSTRING_PTR(string), FIX2LONG(len));
  return (SYM2ID(sym) == symbol) ? Qtrue : Qfalse;
}
#endif

#ifdef HAVE_RB_INTERN3
VALUE symbol_spec_rb_intern3(VALUE self, VALUE string, VALUE len, VALUE enc) {
  return ID2SYM(rb_intern3(RSTRING_PTR(string), FIX2LONG(len), rb_enc_get(enc)));
}

VALUE symbol_spec_rb_intern3_c_compare(VALUE self, VALUE string, VALUE len, VALUE enc, VALUE sym) {
  ID symbol = rb_intern3(RSTRING_PTR(string), FIX2LONG(len), rb_enc_get(enc));
  return (SYM2ID(sym) == symbol) ? Qtrue : Qfalse;
}
#endif

#ifdef HAVE_RB_ID2NAME
VALUE symbol_spec_rb_id2name(VALUE self, VALUE symbol) {
  const char* c_str = rb_id2name(SYM2ID(symbol));
  return rb_str_new(c_str, strlen(c_str));
}
#endif

#ifdef HAVE_RB_ID2STR
VALUE symbol_spec_rb_id2str(VALUE self, VALUE symbol) {
  return rb_id2str(SYM2ID(symbol));
}
#endif

#ifdef HAVE_RB_INTERN_STR
VALUE symbol_spec_rb_intern_str(VALUE self, VALUE str) {
  return ID2SYM(rb_intern_str(str));
}
#endif

#ifdef HAVE_RB_IS_CLASS_ID
VALUE symbol_spec_rb_is_class_id(VALUE self, VALUE sym) {
  return rb_is_class_id(SYM2ID(sym)) ? Qtrue : Qfalse;
}
#endif

#ifdef HAVE_RB_IS_CONST_ID
VALUE symbol_spec_rb_is_const_id(VALUE self, VALUE sym) {
  return rb_is_const_id(SYM2ID(sym)) ? Qtrue : Qfalse;
}
#endif

#ifdef HAVE_RB_IS_INSTANCE_ID
VALUE symbol_spec_rb_is_instance_id(VALUE self, VALUE sym) {
  return rb_is_instance_id(SYM2ID(sym)) ? Qtrue : Qfalse;
}
#endif

#ifdef HAVE_RB_SYM2STR
VALUE symbol_spec_rb_sym2str(VALUE self, VALUE sym) {
  return rb_sym2str(sym);
}
#endif

void Init_symbol_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiSymbolSpecs", rb_cObject);

#ifdef HAVE_RB_INTERN
  rb_define_method(cls, "rb_intern", symbol_spec_rb_intern, 1);
  rb_define_method(cls, "rb_intern2", symbol_spec_rb_intern2, 2);
  rb_define_method(cls, "rb_intern_const", symbol_spec_rb_intern_const, 1);
  rb_define_method(cls, "rb_intern_c_compare", symbol_spec_rb_intern_c_compare, 2);
  rb_define_method(cls, "rb_intern2_c_compare", symbol_spec_rb_intern2_c_compare, 3);
#endif

#ifdef HAVE_RB_INTERN3
  rb_define_method(cls, "rb_intern3", symbol_spec_rb_intern3, 3);
  rb_define_method(cls, "rb_intern3_c_compare", symbol_spec_rb_intern3_c_compare, 4);
#endif

#ifdef HAVE_RB_ID2NAME
  rb_define_method(cls, "rb_id2name", symbol_spec_rb_id2name, 1);
#endif

#ifdef HAVE_RB_ID2STR
  rb_define_method(cls, "rb_id2str", symbol_spec_rb_id2str, 1);
#endif

#ifdef HAVE_RB_INTERN_STR
  rb_define_method(cls, "rb_intern_str", symbol_spec_rb_intern_str, 1);
#endif

#ifdef HAVE_RB_IS_CLASS_ID
  rb_define_method(cls, "rb_is_class_id", symbol_spec_rb_is_class_id, 1);
#endif

#ifdef HAVE_RB_IS_CONST_ID
  rb_define_method(cls, "rb_is_const_id", symbol_spec_rb_is_const_id, 1);
#endif

#ifdef HAVE_RB_IS_INSTANCE_ID
  rb_define_method(cls, "rb_is_instance_id", symbol_spec_rb_is_instance_id, 1);
#endif

#ifdef HAVE_RB_SYM2STR
  rb_define_method(cls, "rb_sym2str", symbol_spec_rb_sym2str, 1);
#endif
}

#ifdef __cplusplus
}
#endif
