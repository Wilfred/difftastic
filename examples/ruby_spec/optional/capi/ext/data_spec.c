#include "ruby.h"
#include "rubyspec.h"

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(HAVE_RDATA) && defined(HAVE_DATA_WRAP_STRUCT)
struct sample_wrapped_struct {
    int foo;
};

void sample_wrapped_struct_free(void* st) {
  free(st);
}

void sample_wrapped_struct_mark(void* st) {
}

VALUE sdaf_alloc_func(VALUE klass) {
  struct sample_wrapped_struct* bar = (struct sample_wrapped_struct *)malloc(sizeof(struct sample_wrapped_struct));
  bar->foo = 42;
  return Data_Wrap_Struct(klass, &sample_wrapped_struct_mark, &sample_wrapped_struct_free, bar);
}

VALUE sdaf_get_struct(VALUE self) {
  struct sample_wrapped_struct* bar;
  Data_Get_Struct(self, struct sample_wrapped_struct, bar);

  return INT2FIX((*bar).foo);
}

VALUE sws_wrap_struct(VALUE self, VALUE val) {
  struct sample_wrapped_struct* bar = (struct sample_wrapped_struct *)malloc(sizeof(struct sample_wrapped_struct));
  bar->foo = FIX2INT(val);
  return Data_Wrap_Struct(rb_cObject, &sample_wrapped_struct_mark, &sample_wrapped_struct_free, bar);
}

VALUE sws_wrap_struct_null(VALUE self, VALUE val) {
  struct sample_wrapped_struct* bar = (struct sample_wrapped_struct *)malloc(sizeof(struct sample_wrapped_struct));
  bar->foo = FIX2INT(val);
  return Data_Wrap_Struct(0, &sample_wrapped_struct_mark, &sample_wrapped_struct_free, bar);
}

VALUE sws_get_struct(VALUE self, VALUE obj) {
  struct sample_wrapped_struct* bar;
  Data_Get_Struct(obj, struct sample_wrapped_struct, bar);

  return INT2FIX((*bar).foo);
}

VALUE sws_get_struct_rdata(VALUE self, VALUE obj) {
  struct sample_wrapped_struct* bar;
  bar = (struct sample_wrapped_struct*) RDATA(obj)->data;
  return INT2FIX(bar->foo);
}

VALUE sws_get_struct_data_ptr(VALUE self, VALUE obj) {
  struct sample_wrapped_struct* bar;
  bar = (struct sample_wrapped_struct*) DATA_PTR(obj);
  return INT2FIX(bar->foo);
}

VALUE sws_change_struct(VALUE self, VALUE obj, VALUE new_val) {
  struct sample_wrapped_struct *old_struct, *new_struct;
  new_struct = (struct sample_wrapped_struct *)malloc(sizeof(struct sample_wrapped_struct));
  new_struct->foo = FIX2INT(new_val);
  old_struct = RDATA(obj)->data;
  free(old_struct);
  RDATA(obj)->data = new_struct;
  return Qnil;
}
#endif

void Init_data_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiAllocSpecs", rb_cObject);

#if defined(HAVE_RDATA) && defined(HAVE_DATA_WRAP_STRUCT)
  rb_define_alloc_func(cls, sdaf_alloc_func);
  rb_define_method(cls, "wrapped_data", sdaf_get_struct, 0);

  cls = rb_define_class("CApiWrappedStructSpecs", rb_cObject);
  rb_define_method(cls, "wrap_struct", sws_wrap_struct, 1);
  rb_define_method(cls, "wrap_struct_null", sws_wrap_struct_null, 1);
  rb_define_method(cls, "get_struct", sws_get_struct, 1);
  rb_define_method(cls, "get_struct_rdata", sws_get_struct_rdata, 1);
  rb_define_method(cls, "get_struct_data_ptr", sws_get_struct_data_ptr, 1);
  rb_define_method(cls, "change_struct", sws_change_struct, 2);
#endif
}

#ifdef __cplusplus
}
#endif
