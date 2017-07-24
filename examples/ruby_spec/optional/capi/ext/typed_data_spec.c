#include "ruby.h"
#include "rubyspec.h"

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(HAVE_RTYPEDDATA) && defined(HAVE_TYPEDDATA_WRAP_STRUCT)
struct sample_typed_wrapped_struct_parent {
    int foo;
};

void sample_typed_wrapped_struct_parent_free(void* st) {
  free(st);
}

void sample_typed_wrapped_struct_parent_mark(void* st) {
}

size_t sample_typed_wrapped_struct_parent_memsize(const void* st) {
  return sizeof(struct sample_typed_wrapped_struct_parent);
}

static const rb_data_type_t sample_typed_wrapped_struct_parent_data_type = {
  "sample_typed_wrapped_struct_parent",
  {
    sample_typed_wrapped_struct_parent_mark,
    sample_typed_wrapped_struct_parent_free,
    sample_typed_wrapped_struct_parent_memsize,
  },
};

struct sample_typed_wrapped_struct {
    int foo;
};

void sample_typed_wrapped_struct_free(void* st) {
  free(st);
}

void sample_typed_wrapped_struct_mark(void* st) {
}

size_t sample_typed_wrapped_struct_memsize(const void* st) {
  return sizeof(struct sample_typed_wrapped_struct);
}

static const rb_data_type_t sample_typed_wrapped_struct_data_type = {
  "sample_typed_wrapped_struct",
  {
    sample_typed_wrapped_struct_mark,
    sample_typed_wrapped_struct_free,
    sample_typed_wrapped_struct_memsize,
  },
  &sample_typed_wrapped_struct_parent_data_type,
};

struct sample_typed_wrapped_struct_other {
    int foo;
};

void sample_typed_wrapped_struct_other_free(void* st) {
  free(st);
}

void sample_typed_wrapped_struct_other_mark(void* st) {
}

size_t sample_typed_wrapped_struct_other_memsize(const void* st) {
  return sizeof(struct sample_typed_wrapped_struct_other);
}

static const rb_data_type_t sample_typed_wrapped_struct_other_data_type = {
  "sample_typed_wrapped_struct_other",
  {
    sample_typed_wrapped_struct_other_mark,
    sample_typed_wrapped_struct_other_free,
    sample_typed_wrapped_struct_other_memsize,
  },
};


VALUE sdaf_alloc_typed_func(VALUE klass) {
    struct sample_typed_wrapped_struct* bar = (struct sample_typed_wrapped_struct *)malloc(sizeof(struct sample_typed_wrapped_struct));
    bar->foo = 42;
    return TypedData_Wrap_Struct(klass, &sample_typed_wrapped_struct_data_type, bar);
}

VALUE sdaf_typed_get_struct(VALUE self) {
    struct sample_typed_wrapped_struct* bar;
    TypedData_Get_Struct(self, struct sample_typed_wrapped_struct, &sample_typed_wrapped_struct_data_type, bar);

    return INT2FIX((*bar).foo);
}

VALUE sws_typed_wrap_struct(VALUE self, VALUE val) {
    struct sample_typed_wrapped_struct* bar = (struct sample_typed_wrapped_struct *)malloc(sizeof(struct sample_typed_wrapped_struct));
    bar->foo = FIX2INT(val);
    return TypedData_Wrap_Struct(rb_cObject, &sample_typed_wrapped_struct_data_type, bar);
}

VALUE sws_typed_wrap_struct_null(VALUE self, VALUE val) {
    struct sample_typed_wrapped_struct* bar = (struct sample_typed_wrapped_struct *)malloc(sizeof(struct sample_typed_wrapped_struct));
    bar->foo = FIX2INT(val);
    return TypedData_Wrap_Struct(0, &sample_typed_wrapped_struct_data_type, bar);
}

VALUE sws_typed_get_struct(VALUE self, VALUE obj) {
    struct sample_typed_wrapped_struct* bar;
    TypedData_Get_Struct(obj, struct sample_typed_wrapped_struct, &sample_typed_wrapped_struct_data_type, bar);

    return INT2FIX((*bar).foo);
}

VALUE sws_typed_get_struct_different_type(VALUE self, VALUE obj) {
    struct sample_typed_wrapped_struct_other* bar;
    TypedData_Get_Struct(obj, struct sample_typed_wrapped_struct_other, &sample_typed_wrapped_struct_other_data_type, bar);

    return INT2FIX((*bar).foo);
}

VALUE sws_typed_get_struct_parent_type(VALUE self, VALUE obj) {
    struct sample_typed_wrapped_struct_parent* bar;
    TypedData_Get_Struct(obj, struct sample_typed_wrapped_struct_parent, &sample_typed_wrapped_struct_parent_data_type, bar);

    return INT2FIX((*bar).foo);
}

VALUE sws_typed_get_struct_rdata(VALUE self, VALUE obj) {
  struct sample_typed_wrapped_struct* bar;
  bar = (struct sample_typed_wrapped_struct*) RTYPEDDATA(obj)->data;
  return INT2FIX(bar->foo);
}

VALUE sws_typed_get_struct_data_ptr(VALUE self, VALUE obj) {
  struct sample_typed_wrapped_struct* bar;
  bar = (struct sample_typed_wrapped_struct*) DATA_PTR(obj);
  return INT2FIX(bar->foo);
}

VALUE sws_typed_change_struct(VALUE self, VALUE obj, VALUE new_val) {
  struct sample_typed_wrapped_struct *old_struct, *new_struct;
  new_struct = (struct sample_typed_wrapped_struct *)malloc(sizeof(struct sample_typed_wrapped_struct));
  new_struct->foo = FIX2INT(new_val);
  old_struct = RTYPEDDATA(obj)->data;
  free(old_struct);
  RTYPEDDATA(obj)->data = new_struct;
  return Qnil;
}
#endif

void Init_typed_data_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiAllocTypedSpecs", rb_cObject);

#if defined(HAVE_RTYPEDDATA) && defined(HAVE_TYPEDDATA_WRAP_STRUCT)
  rb_define_alloc_func(cls, sdaf_alloc_typed_func);
  rb_define_method(cls, "typed_wrapped_data", sdaf_typed_get_struct, 0);

  cls = rb_define_class("CApiWrappedTypedStructSpecs", rb_cObject);
  rb_define_method(cls, "typed_wrap_struct", sws_typed_wrap_struct, 1);
  rb_define_method(cls, "typed_wrap_struct_null", sws_typed_wrap_struct_null, 1);
  rb_define_method(cls, "typed_get_struct", sws_typed_get_struct, 1);
  rb_define_method(cls, "typed_get_struct_other", sws_typed_get_struct_different_type, 1);
  rb_define_method(cls, "typed_get_struct_parent", sws_typed_get_struct_parent_type, 1);
  rb_define_method(cls, "typed_get_struct_rdata", sws_typed_get_struct_rdata, 1);
  rb_define_method(cls, "typed_get_struct_data_ptr", sws_typed_get_struct_data_ptr, 1);
  rb_define_method(cls, "typed_change_struct", sws_typed_change_struct, 2);
#endif
}

#ifdef __cplusplus
}
#endif

