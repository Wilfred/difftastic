#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_DEFINE_HOOKED_VARIABLE
VALUE g_hooked_var;

void var_2x_setter(VALUE val, ID id, VALUE *var) {
    *var = INT2NUM(NUM2INT(val) * 2);
}

static VALUE sb_define_hooked_variable(VALUE self, VALUE var_name) {
  rb_define_hooked_variable(StringValuePtr(var_name), &g_hooked_var, 0, var_2x_setter);
  return Qnil;
}
#endif

#ifdef HAVE_RB_DEFINE_READONLY_VARIABLE
VALUE g_ro_var;

static VALUE sb_define_readonly_variable(VALUE self, VALUE var_name, VALUE val) {
  g_ro_var = val;
  rb_define_readonly_variable(StringValuePtr(var_name), &g_ro_var);
  return Qnil;
}
#endif

#ifdef HAVE_RB_DEFINE_VARIABLE
VALUE g_var;

static VALUE sb_get_global_value(VALUE self) {
  return g_var;
}

static VALUE sb_define_variable(VALUE self, VALUE var_name, VALUE val) {
  g_var = val;
  rb_define_variable(StringValuePtr(var_name), &g_var);
  return Qnil;
}
#endif

#ifdef HAVE_RB_F_GLOBAL_VARIABLES
static VALUE sb_f_global_variables(VALUE self) {
  return rb_f_global_variables();
}
#endif

#ifdef HAVE_RB_GV_GET
static VALUE sb_gv_get(VALUE self, VALUE var) {
  return rb_gv_get(StringValuePtr(var));
}
#endif

#ifdef HAVE_RB_GV_SET
static VALUE sb_gv_set(VALUE self, VALUE var, VALUE val) {
  return rb_gv_set(StringValuePtr(var), val);
}
#endif

#ifdef HAVE_RB_STDIN
static VALUE global_spec_rb_stdin(VALUE self) {
  return rb_stdin;
}
#endif

#ifdef HAVE_RB_STDOUT
static VALUE global_spec_rb_stdout(VALUE self) {
  return rb_stdout;
}
#endif

#ifdef HAVE_RB_STDERR
static VALUE global_spec_rb_stderr(VALUE self) {
  return rb_stderr;
}
#endif

#ifdef HAVE_RB_DEFOUT
static VALUE global_spec_rb_defout(VALUE self) {
  return rb_defout;
}
#endif

#ifdef HAVE_RB_RS
static VALUE global_spec_rb_rs(VALUE self) {
  return rb_rs;
}
#endif

#ifdef HAVE_RB_DEFAULT_RS
static VALUE global_spec_rb_default_rs(VALUE self) {
  return rb_default_rs;
}
#endif

#ifdef HAVE_RB_OUTPUT_RS
static VALUE global_spec_rb_output_rs(VALUE self) {
  return rb_output_rs;
}
#endif

#ifdef HAVE_RB_OUTPUT_FS
static VALUE global_spec_rb_output_fs(VALUE self) {
  return rb_output_fs;
}
#endif

#ifdef HAVE_RB_LASTLINE_SET
static VALUE global_spec_rb_lastline_set(VALUE self, VALUE line) {
  rb_lastline_set(line);
  return Qnil;
}
#endif

#ifdef HAVE_RB_LASTLINE_GET
static VALUE global_spec_rb_lastline_get(VALUE self) {
  return rb_lastline_get();
}
#endif

void Init_globals_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiGlobalSpecs", rb_cObject);

#ifdef HAVE_RB_DEFINE_HOOKED_VARIABLE
  g_hooked_var = Qnil;
  rb_define_method(cls, "rb_define_hooked_variable_2x", sb_define_hooked_variable, 1);
#endif

#ifdef HAVE_RB_DEFINE_READONLY_VARIABLE
  g_ro_var = Qnil;
  rb_define_method(cls, "rb_define_readonly_variable", sb_define_readonly_variable, 2);
#endif

#ifdef HAVE_RB_DEFINE_VARIABLE
  g_var = Qnil;
  rb_define_method(cls, "rb_define_variable", sb_define_variable, 2);
  rb_define_method(cls, "sb_get_global_value", sb_get_global_value, 0);
#endif

#ifdef HAVE_RB_F_GLOBAL_VARIABLES
  rb_define_method(cls, "rb_f_global_variables", sb_f_global_variables, 0);
#endif

#ifdef HAVE_RB_GV_GET
  rb_define_method(cls, "sb_gv_get", sb_gv_get, 1);
#endif

#ifdef HAVE_RB_GV_SET
  rb_define_method(cls, "sb_gv_set", sb_gv_set, 2);
#endif

#ifdef HAVE_RB_STDIN
  rb_define_method(cls, "rb_stdin", global_spec_rb_stdin, 0);
#endif

#ifdef HAVE_RB_STDOUT
  rb_define_method(cls, "rb_stdout", global_spec_rb_stdout, 0);
#endif

#ifdef HAVE_RB_STDERR
  rb_define_method(cls, "rb_stderr", global_spec_rb_stderr, 0);
#endif

#ifdef HAVE_RB_DEFOUT
  rb_define_method(cls, "rb_defout", global_spec_rb_defout, 0);
#endif

#ifdef HAVE_RB_RS
  rb_define_method(cls, "rb_rs", global_spec_rb_rs, 0);
#endif

#ifdef HAVE_RB_DEFAULT_RS
  rb_define_method(cls, "rb_default_rs", global_spec_rb_default_rs, 0);
#endif

#ifdef HAVE_RB_OUTPUT_RS
  rb_define_method(cls, "rb_output_rs", global_spec_rb_output_rs, 0);
#endif

#ifdef HAVE_RB_OUTPUT_FS
  rb_define_method(cls, "rb_output_fs", global_spec_rb_output_fs, 0);
#endif

#ifdef HAVE_RB_LASTLINE_SET
  rb_define_method(cls, "rb_lastline_set", global_spec_rb_lastline_set, 1);
#endif

#ifdef HAVE_RB_LASTLINE_GET
  rb_define_method(cls, "rb_lastline_get", global_spec_rb_lastline_get, 0);
#endif
}

#ifdef __cplusplus
}
#endif
