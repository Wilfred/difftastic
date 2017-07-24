#include "ruby.h"
#include "rubyspec.h"

#include "ruby/re.h"

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_REG_NEW
VALUE regexp_spec_re(VALUE self) {
  return rb_reg_new("a", 1, 0);
}
#endif

#ifdef HAVE_RB_REG_NTH_MATCH
VALUE regexp_spec_reg_1st_match(VALUE self, VALUE md) {
  return rb_reg_nth_match(1, md);
}
#endif

#ifdef HAVE_RB_REG_OPTIONS
VALUE regexp_spec_rb_reg_options(VALUE self, VALUE regexp) {
  return INT2FIX(rb_reg_options(regexp));
}
#endif

#ifdef HAVE_RB_REG_REGCOMP
VALUE regexp_spec_rb_reg_regcomp(VALUE self, VALUE str) {
  return rb_reg_regcomp(str);
}
#endif

#ifdef HAVE_RB_REG_MATCH
VALUE regexp_spec_reg_match(VALUE self, VALUE re, VALUE str) {
  return rb_reg_match(re, str);
}
#endif

#ifdef HAVE_RB_BACKREF_GET
VALUE regexp_spec_backref_get(VALUE self) {
  return rb_backref_get();
}
#endif

VALUE regexp_spec_match(VALUE self, VALUE regexp, VALUE str) {
  return rb_funcall(regexp, rb_intern("match"), 1, str);
}

void Init_regexp_spec(void) {
  VALUE cls = rb_define_class("CApiRegexpSpecs", rb_cObject);

  rb_define_method(cls, "match", regexp_spec_match, 2);

#ifdef HAVE_RB_REG_NEW
  rb_define_method(cls, "a_re", regexp_spec_re, 0);
#endif

#ifdef HAVE_RB_REG_NTH_MATCH
  rb_define_method(cls, "a_re_1st_match", regexp_spec_reg_1st_match, 1);
#endif

#ifdef HAVE_RB_REG_MATCH
  rb_define_method(cls, "rb_reg_match", regexp_spec_reg_match, 2);
#endif

#ifdef HAVE_RB_BACKREF_GET
  rb_define_method(cls, "rb_backref_get", regexp_spec_backref_get, 0);
#endif

#ifdef HAVE_RB_REG_OPTIONS
  rb_define_method(cls, "rb_reg_options", regexp_spec_rb_reg_options, 1);
#endif

#ifdef HAVE_RB_REG_REGCOMP
  rb_define_method(cls, "rb_reg_regcomp", regexp_spec_rb_reg_regcomp, 1);
#endif
}

#ifdef __cplusplus
}
#endif
