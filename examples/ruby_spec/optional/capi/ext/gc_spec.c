#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_GC_REGISTER_ADDRESS
VALUE registered_tagged_value;
VALUE registered_reference_value;

static VALUE registered_tagged_address(VALUE self) {
  return registered_tagged_value;
}

static VALUE registered_reference_address(VALUE self) {
  return registered_reference_value;
}
#endif

#ifdef HAVE_RB_GC_ENABLE
static VALUE gc_spec_rb_gc_enable() {
  return rb_gc_enable();
}
#endif

#ifdef HAVE_RB_GC_DISABLE
static VALUE gc_spec_rb_gc_disable() {
  return rb_gc_disable();
}
#endif


void Init_gc_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiGCSpecs", rb_cObject);

#ifdef HAVE_RB_GC_REGISTER_ADDRESS
  registered_tagged_value    = INT2NUM(10);
  registered_reference_value = rb_str_new2("Globally registered data");

  rb_gc_register_address(&registered_tagged_value);
  rb_gc_register_address(&registered_reference_value);

  rb_define_method(cls, "registered_tagged_address", registered_tagged_address, 0);
  rb_define_method(cls, "registered_reference_address", registered_reference_address, 0);
#endif

#ifdef HAVE_RB_GC_ENABLE
  rb_define_method(cls, "rb_gc_enable", gc_spec_rb_gc_enable, 0);
#endif

#ifdef HAVE_RB_GC_DISABLE
  rb_define_method(cls, "rb_gc_disable", gc_spec_rb_gc_disable, 0);
#endif

}

#ifdef __cplusplus
}
#endif
