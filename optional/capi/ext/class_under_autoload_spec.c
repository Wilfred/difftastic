#include "ruby.h"

void Init_class_under_autoload_spec(void) {
  rb_define_class_under(rb_cObject, "ClassUnderAutoload", rb_cObject);
}
