#include "ruby.h"
#include "rubyspec.h"

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_PROC_NEW
VALUE proc_spec_rb_proc_new_function(VALUE args) {
  return rb_funcall(args, rb_intern("inspect"), 0);
}

VALUE proc_spec_rb_proc_new(VALUE self) {
  return rb_proc_new(proc_spec_rb_proc_new_function, Qnil);
}
#endif

/* This helper is not strictly necessary but reflects the code in wxRuby that
 * originally exposed issues with this Proc.new behavior.
 */
VALUE proc_spec_rb_Proc_new_helper(void) {
  return rb_funcall(rb_cProc, rb_intern("new"), 0);
}

VALUE proc_spec_rb_Proc_new(VALUE self, VALUE scenario) {
  switch(FIX2INT(scenario)) {
    case 0:
      return proc_spec_rb_Proc_new_helper();
    case 1:
      rb_funcall(self, rb_intern("call_nothing"), 0);
      return proc_spec_rb_Proc_new_helper();
    case 2:
      return rb_funcall(self, rb_intern("call_Proc_new"), 0);
    case 3:
      return rb_funcall(self, rb_intern("call_rb_Proc_new"), 0);
    case 4:
      return rb_funcall(self, rb_intern("call_rb_Proc_new_with_block"), 0);
    case 5:
      rb_funcall(self, rb_intern("call_rb_Proc_new_with_block"), 0);
      return proc_spec_rb_Proc_new_helper();
    case 6:
      return rb_funcall(self, rb_intern("call_block_given?"), 0);
    default:
      rb_raise(rb_eException, "invalid scenario");
  }

  return Qnil;
}

void Init_proc_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiProcSpecs", rb_cObject);

#ifdef HAVE_RB_PROC_NEW
  rb_define_method(cls, "rb_proc_new", proc_spec_rb_proc_new, 0);
#endif

  rb_define_method(cls, "rb_Proc_new", proc_spec_rb_Proc_new, 1);
}

#ifdef __cplusplus
}
#endif
