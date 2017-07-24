#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_ENUMERATORIZE
VALUE enumerator_spec_rb_enumeratorize(int argc, VALUE *argv, VALUE self) {
  VALUE obj, meth, args;
  rb_scan_args(argc, argv, "2*", &obj, &meth, &args);
  return rb_enumeratorize(obj, meth, (int)RARRAY_LEN(args), RARRAY_PTR(args));
}
#endif

void Init_enumerator_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiEnumeratorSpecs", rb_cObject);

#ifdef HAVE_RB_ENUMERATORIZE
  rb_define_method(cls, "rb_enumeratorize", enumerator_spec_rb_enumeratorize, -1);
#endif
}

#ifdef __cplusplus
}
#endif
