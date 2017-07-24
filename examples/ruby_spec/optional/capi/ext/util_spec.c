#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_SCAN_ARGS
VALUE util_spec_rb_scan_args(VALUE self, VALUE argv, VALUE fmt, VALUE expected, VALUE acc) {
  int i, result, argc = (int)RARRAY_LEN(argv);
  VALUE args[6], failed, a1, a2, a3, a4, a5, a6;

  failed = rb_intern("failed");
  a1 = a2 = a3 = a4 = a5 = a6 = failed;

  for(i = 0; i < argc; i++) {
    args[i] = rb_ary_entry(argv, i);
  }

  result = rb_scan_args(argc, args, RSTRING_PTR(fmt), &a1, &a2, &a3, &a4, &a5, &a6);

  switch(NUM2INT(expected)) {
  case 6:
    rb_ary_unshift(acc, a6);
  case 5:
    rb_ary_unshift(acc, a5);
  case 4:
    rb_ary_unshift(acc, a4);
  case 3:
    rb_ary_unshift(acc, a3);
  case 2:
    rb_ary_unshift(acc, a2);
  case 1:
    rb_ary_unshift(acc, a1);
    break;
  default:
    rb_raise(rb_eException, "unexpected number of arguments returned by rb_scan_args");
  }

  return INT2NUM(result);
}
#endif

#ifdef HAVE_RB_LONG2INT
static VALUE util_spec_rb_long2int(VALUE self, VALUE n) {
  return INT2NUM(rb_long2int(NUM2LONG(n)));
}
#endif

#ifdef HAVE_RB_ITER_BREAK
static VALUE util_spec_rb_iter_break(VALUE self) {
  rb_iter_break();
  return Qnil;
}
#endif

#ifdef HAVE_RB_SOURCEFILE
static VALUE util_spec_rb_sourcefile(VALUE self) {
  return rb_str_new2(rb_sourcefile());
}
#endif

#ifdef HAVE_RB_SOURCELINE
static VALUE util_spec_rb_sourceline(VALUE self) {
  return INT2NUM(rb_sourceline());
}
#endif

void Init_util_spec(void) {
  VALUE cls = rb_define_class("CApiUtilSpecs", rb_cObject);

#ifdef HAVE_RB_SCAN_ARGS
  rb_define_method(cls, "rb_scan_args", util_spec_rb_scan_args, 4);
#endif

#ifdef HAVE_RB_LONG2INT
  rb_define_method(cls, "rb_long2int", util_spec_rb_long2int, 1);
#endif

#ifdef HAVE_RB_ITER_BREAK
  rb_define_method(cls, "rb_iter_break", util_spec_rb_iter_break, 0);
#endif

#ifdef HAVE_RB_SOURCEFILE
  rb_define_method(cls, "rb_sourcefile", util_spec_rb_sourcefile, 0);
#endif

#ifdef HAVE_RB_SOURCELINE
  rb_define_method(cls, "rb_sourceline", util_spec_rb_sourceline, 0);
#endif
}

#ifdef __cplusplus
}
#endif
