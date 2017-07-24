#include "ruby.h"
#include "ruby/thread.h"
#include "rubyspec.h"

#include <math.h>
#include <errno.h>
#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#if defined(_WIN32)
#define pipe(p) rb_w32_pipe(p)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_THREAD_ALONE
static VALUE thread_spec_rb_thread_alone() {
  return rb_thread_alone() ? Qtrue : Qfalse;
}
#endif

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef HAVE_RB_THREAD_CALL_WITHOUT_GVL
/* This is unblocked by unblock_func(). */
static void* blocking_gvl_func(void* data) {
  int rfd = *(int *)data;
  char dummy;
  ssize_t r;

  do {
    r = read(rfd, &dummy, 1);
  } while (r == -1 && errno == EINTR);

  close(rfd);

  return (void*)((r == 1) ? Qtrue : Qfalse);
}

static void unblock_gvl_func(void *data) {
  int wfd = *(int *)data;
  char dummy = 'A';
  ssize_t r;

  do {
    r = write(wfd, &dummy, 1);
  } while (r == -1 && errno == EINTR);

  close(wfd);
}

/* Returns true if the thread is interrupted. */
static VALUE thread_spec_rb_thread_call_without_gvl(VALUE self) {
  int fds[2];
  void* ret;

  if (pipe(fds) == -1) {
    return Qfalse;
  }
  ret = rb_thread_call_without_gvl(blocking_gvl_func, &fds[0],
                                   unblock_gvl_func, &fds[1]);
  return (VALUE)ret;
}

/* This is unblocked by a signal. */
static void* blocking_gvl_func_for_udf_io(void *data) {
  int rfd = (int)(size_t)data;
  char dummy;

  if (read(rfd, &dummy, 1) == -1 && errno == EINTR) {
    return (void*)Qtrue;
  } else {
    return (void*)Qfalse;
  }
}

/* Returns true if the thread is interrupted. */
static VALUE thread_spec_rb_thread_call_without_gvl_with_ubf_io(VALUE self) {
  int fds[2];
  void* ret;

  if (pipe(fds) == -1) {
    return Qfalse;
  }

  ret = rb_thread_call_without_gvl(blocking_gvl_func_for_udf_io,
                                  (void*)(size_t)fds[0], RUBY_UBF_IO, 0);
  close(fds[0]);
  close(fds[1]);
  return (VALUE)ret;
}
#endif

#ifdef HAVE_RB_THREAD_CURRENT
static VALUE thread_spec_rb_thread_current() {
  return rb_thread_current();
}
#endif

#ifdef HAVE_RB_THREAD_LOCAL_AREF
static VALUE thread_spec_rb_thread_local_aref(VALUE self, VALUE thr, VALUE sym) {
  return rb_thread_local_aref(thr, SYM2ID(sym));
}
#endif

#ifdef HAVE_RB_THREAD_LOCAL_ASET
static VALUE thread_spec_rb_thread_local_aset(VALUE self, VALUE thr, VALUE sym, VALUE value) {
  return rb_thread_local_aset(thr, SYM2ID(sym), value);
}
#endif

#ifdef HAVE_RB_THREAD_WAKEUP
static VALUE thread_spec_rb_thread_wakeup(VALUE self, VALUE thr) {
  return rb_thread_wakeup(thr);
}
#endif

#ifdef HAVE_RB_THREAD_WAIT_FOR
static VALUE thread_spec_rb_thread_wait_for(VALUE self, VALUE s, VALUE ms) {
  struct timeval tv;
  tv.tv_sec = NUM2INT(s);
  tv.tv_usec = NUM2INT(ms);
  rb_thread_wait_for(tv);
  return Qnil;
}
#endif

#ifdef HAVE_RB_THREAD_CREATE

VALUE thread_spec_call_proc(VALUE arg_array) {
  VALUE arg = rb_ary_pop(arg_array);
  VALUE proc = rb_ary_pop(arg_array);
  return rb_funcall(proc, rb_intern("call"), 1, arg);
}

static VALUE thread_spec_rb_thread_create(VALUE self, VALUE proc, VALUE arg) {
  VALUE args = rb_ary_new();
  rb_ary_push(args, proc);
  rb_ary_push(args, arg);

  return rb_thread_create(thread_spec_call_proc, (void*)args);
}
#endif


void Init_thread_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiThreadSpecs", rb_cObject);

#ifdef HAVE_RB_THREAD_ALONE
  rb_define_method(cls, "rb_thread_alone", thread_spec_rb_thread_alone, 0);
#endif

#ifdef HAVE_RB_THREAD_CALL_WITHOUT_GVL
  rb_define_method(cls, "rb_thread_call_without_gvl", thread_spec_rb_thread_call_without_gvl, 0);
  rb_define_method(cls, "rb_thread_call_without_gvl_with_ubf_io", thread_spec_rb_thread_call_without_gvl_with_ubf_io, 0);
#endif

#ifdef HAVE_RB_THREAD_CURRENT
  rb_define_method(cls, "rb_thread_current", thread_spec_rb_thread_current, 0);
#endif

#ifdef HAVE_RB_THREAD_LOCAL_AREF
  rb_define_method(cls, "rb_thread_local_aref", thread_spec_rb_thread_local_aref, 2);
#endif

#ifdef HAVE_RB_THREAD_LOCAL_ASET
  rb_define_method(cls, "rb_thread_local_aset", thread_spec_rb_thread_local_aset, 3);
#endif

#ifdef HAVE_RB_THREAD_WAKEUP
  rb_define_method(cls,  "rb_thread_wakeup", thread_spec_rb_thread_wakeup, 1);
#endif

#ifdef HAVE_RB_THREAD_WAIT_FOR
  rb_define_method(cls,  "rb_thread_wait_for", thread_spec_rb_thread_wait_for, 2);
#endif

#ifdef HAVE_RB_THREAD_CREATE
  rb_define_method(cls,  "rb_thread_create", thread_spec_rb_thread_create, 2);
#endif
}

#ifdef __cplusplus
}
#endif
