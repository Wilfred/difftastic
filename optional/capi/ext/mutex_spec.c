#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_MUTEX_NEW
VALUE mutex_spec_rb_mutex_new(VALUE self) {
  return rb_mutex_new();
}
#endif

#ifdef HAVE_RB_MUTEX_LOCKED_P
VALUE mutex_spec_rb_mutex_locked_p(VALUE self, VALUE mutex) {
  return rb_mutex_locked_p(mutex);
}
#endif

#ifdef HAVE_RB_MUTEX_TRYLOCK
VALUE mutex_spec_rb_mutex_trylock(VALUE self, VALUE mutex) {
  return rb_mutex_trylock(mutex);
}
#endif

#ifdef HAVE_RB_MUTEX_LOCK
VALUE mutex_spec_rb_mutex_lock(VALUE self, VALUE mutex) {
  return rb_mutex_lock(mutex);
}
#endif

#ifdef HAVE_RB_MUTEX_UNLOCK
VALUE mutex_spec_rb_mutex_unlock(VALUE self, VALUE mutex) {
  return rb_mutex_unlock(mutex);
}
#endif

#ifdef HAVE_RB_MUTEX_SLEEP
VALUE mutex_spec_rb_mutex_sleep(VALUE self, VALUE mutex, VALUE timeout) {
  return rb_mutex_sleep(mutex, timeout);
}
#endif

#ifdef HAVE_RB_MUTEX_SYNCHRONIZE

VALUE mutex_spec_rb_mutex_callback(VALUE arg) {
  return rb_funcall(arg, rb_intern("call"), 0);
}

VALUE mutex_spec_rb_mutex_synchronize(VALUE self, VALUE mutex, VALUE value) {
  return rb_mutex_synchronize(mutex, mutex_spec_rb_mutex_callback, value);
}
#endif

void Init_mutex_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiMutexSpecs", rb_cObject);

#ifdef HAVE_RB_MUTEX_NEW
  rb_define_method(cls, "rb_mutex_new", mutex_spec_rb_mutex_new, 0);
#endif

#ifdef HAVE_RB_MUTEX_LOCKED_P
  rb_define_method(cls, "rb_mutex_locked_p", mutex_spec_rb_mutex_locked_p, 1);
#endif

#ifdef HAVE_RB_MUTEX_TRYLOCK
  rb_define_method(cls, "rb_mutex_trylock", mutex_spec_rb_mutex_trylock, 1);
#endif

#ifdef HAVE_RB_MUTEX_LOCK
  rb_define_method(cls, "rb_mutex_lock", mutex_spec_rb_mutex_lock, 1);
#endif

#ifdef HAVE_RB_MUTEX_UNLOCK
  rb_define_method(cls, "rb_mutex_unlock", mutex_spec_rb_mutex_unlock, 1);
#endif

#ifdef HAVE_RB_MUTEX_SLEEP
  rb_define_method(cls, "rb_mutex_sleep", mutex_spec_rb_mutex_sleep, 2);
#endif

#ifdef HAVE_RB_MUTEX_SYNCHRONIZE
  rb_define_method(cls, "rb_mutex_synchronize", mutex_spec_rb_mutex_synchronize, 2);
#endif
}

#ifdef __cplusplus
}
#endif

