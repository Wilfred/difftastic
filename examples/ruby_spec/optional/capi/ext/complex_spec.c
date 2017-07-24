#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_COMPLEX
static VALUE complex_spec_rb_Complex(VALUE self, VALUE num, VALUE den) {
  return rb_Complex(num, den);
}
#endif

#ifdef HAVE_RB_COMPLEX1
static VALUE complex_spec_rb_Complex1(VALUE self, VALUE num) {
  return rb_Complex1(num);
}
#endif

#ifdef HAVE_RB_COMPLEX2
static VALUE complex_spec_rb_Complex2(VALUE self, VALUE num, VALUE den) {
  return rb_Complex2(num, den);
}
#endif

#ifdef HAVE_RB_COMPLEX_NEW
static VALUE complex_spec_rb_complex_new(VALUE self, VALUE num, VALUE den) {
  return rb_complex_new(num, den);
}
#endif

#ifdef HAVE_RB_COMPLEX_NEW1
static VALUE complex_spec_rb_complex_new1(VALUE self, VALUE num) {
  return rb_complex_new1(num);
}
#endif

#ifdef HAVE_RB_COMPLEX_NEW2
static VALUE complex_spec_rb_complex_new2(VALUE self, VALUE num, VALUE den) {
  return rb_complex_new2(num, den);
}
#endif

void Init_complex_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiComplexSpecs", rb_cObject);

#ifdef HAVE_RB_COMPLEX
  rb_define_method(cls, "rb_Complex", complex_spec_rb_Complex, 2);
#endif

#ifdef HAVE_RB_COMPLEX1
  rb_define_method(cls, "rb_Complex1", complex_spec_rb_Complex1, 1);
#endif

#ifdef HAVE_RB_COMPLEX2
  rb_define_method(cls, "rb_Complex2", complex_spec_rb_Complex2, 2);
#endif

#ifdef HAVE_RB_COMPLEX_NEW
  rb_define_method(cls, "rb_complex_new", complex_spec_rb_complex_new, 2);
#endif

#ifdef HAVE_RB_COMPLEX_NEW1
  rb_define_method(cls, "rb_complex_new1", complex_spec_rb_complex_new1, 1);
#endif

#ifdef HAVE_RB_COMPLEX_NEW2
  rb_define_method(cls, "rb_complex_new2", complex_spec_rb_complex_new2, 2);
#endif
}

#ifdef __cplusplus
}
#endif

