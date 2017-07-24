#include "ruby.h"
#include "rubyspec.h"

#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_FLOAT_NEW
static VALUE float_spec_new_zero(VALUE self) {
  double flt = 0;
  return rb_float_new(flt);
}

static VALUE float_spec_new_point_five(VALUE self) {
  double flt = 0.555;
  return rb_float_new(flt);
}
#endif

#ifdef HAVE_RB_RFLOAT
static VALUE float_spec_rb_Float(VALUE self, VALUE float_str) {
  return rb_Float(float_str);
}
#endif

#ifdef HAVE_RFLOAT_VALUE
static VALUE float_spec_RFLOAT_VALUE(VALUE self, VALUE float_h) {
  return rb_float_new(RFLOAT_VALUE(float_h));
}
#endif

void Init_float_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiFloatSpecs", rb_cObject);

#ifdef HAVE_RB_FLOAT_NEW
  rb_define_method(cls, "new_zero", float_spec_new_zero, 0);
  rb_define_method(cls, "new_point_five", float_spec_new_point_five, 0);
#endif

#ifdef HAVE_RB_RFLOAT
  rb_define_method(cls, "rb_Float", float_spec_rb_Float, 1);
#endif

#ifdef HAVE_RFLOAT_VALUE
  rb_define_method(cls, "RFLOAT_VALUE", float_spec_RFLOAT_VALUE, 1);
#endif
}

#ifdef __cplusplus
}
#endif
