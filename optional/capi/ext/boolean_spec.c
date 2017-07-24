#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

static VALUE boolean_spec_is_true(VALUE self, VALUE boolean) {
  if (boolean) {
    return INT2NUM(1);
  } else {
    return INT2NUM(2);
  }
}

static VALUE boolean_spec_q_true(VALUE self) {
  return Qtrue;
}

static VALUE boolean_spec_q_false(VALUE self) {
  return Qfalse;
}

void Init_boolean_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiBooleanSpecs", rb_cObject);
  rb_define_method(cls, "is_true", boolean_spec_is_true, 1);
  rb_define_method(cls, "q_true", boolean_spec_q_true, 0);
  rb_define_method(cls, "q_false", boolean_spec_q_false, 0);
}

#ifdef __cplusplus
extern "C" {
#endif
