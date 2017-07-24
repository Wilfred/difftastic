#include "ruby.h"
#include "rubyspec.h"

#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

VALUE kernel_spec_call_proc(VALUE arg_array) {
  VALUE arg = rb_ary_pop(arg_array);
  VALUE proc = rb_ary_pop(arg_array);
  return rb_funcall(proc, rb_intern("call"), 1, arg);
}

#ifdef HAVE_RB_BLOCK_GIVEN_P
static VALUE kernel_spec_rb_block_given_p(VALUE self) {
  return rb_block_given_p() ? Qtrue : Qfalse;
}
#endif

#ifdef HAVE_RB_NEED_BLOCK
VALUE kernel_spec_rb_need_block(VALUE self) {
  rb_need_block();
  return Qnil;
}
#endif

#ifdef HAVE_RB_BLOCK_PROC
VALUE kernel_spec_rb_block_proc(VALUE self) {
  return rb_block_proc();
}
#endif

#ifdef HAVE_RB_BLOCK_CALL

VALUE block_call_inject(VALUE yield_value, VALUE data2) {
  /* yield_value yields the first block argument */
  VALUE elem = yield_value;
  VALUE elem_incr = INT2FIX(FIX2INT(elem) + 1);
  return elem_incr;
}

VALUE kernel_spec_rb_block_call(VALUE self, VALUE ary) {
  return rb_block_call(ary, rb_intern("map"), 0, NULL, block_call_inject, Qnil);
}

VALUE block_call_inject_multi_arg(VALUE yield_value, VALUE data2, int argc, VALUE argv[]) {
  /* yield_value yields the first block argument */
  VALUE sum  = yield_value;
  VALUE elem = argv[1];

  return INT2FIX(FIX2INT(sum) + FIX2INT(elem));
}

VALUE kernel_spec_rb_block_call_multi_arg(VALUE self, VALUE ary) {
  VALUE method_args[1];
  method_args[0] = INT2FIX(0);
  return rb_block_call(ary, rb_intern("inject"), 1, method_args, block_call_inject_multi_arg, Qnil);
}

VALUE kernel_spec_rb_block_call_no_func(VALUE self, VALUE ary) {
  return rb_block_call(ary, rb_intern("map"), 0, NULL, NULL, Qnil);
}

#endif

#ifdef HAVE_RB_ENSURE
VALUE kernel_spec_rb_ensure(VALUE self, VALUE main_proc, VALUE arg,
                            VALUE ensure_proc, VALUE arg2) {
  VALUE main_array, ensure_array;

  main_array = rb_ary_new();
  rb_ary_push(main_array, main_proc);
  rb_ary_push(main_array, arg);

  ensure_array = rb_ary_new();
  rb_ary_push(ensure_array, ensure_proc);
  rb_ary_push(ensure_array, arg2);

  return rb_ensure(kernel_spec_call_proc, main_array,
      kernel_spec_call_proc, ensure_array);
}
#endif

#ifdef HAVE_RB_CATCH
VALUE kernel_spec_call_proc_with_catch(VALUE arg, VALUE data) {
  return rb_funcall(data, rb_intern("call"), 0);
}

VALUE kernel_spec_rb_catch(VALUE self, VALUE sym, VALUE main_proc) {
  return rb_catch(StringValuePtr(sym), kernel_spec_call_proc_with_catch, main_proc);
}
#endif

#ifdef HAVE_RB_CATCH_OBJ
VALUE kernel_spec_call_proc_with_catch_obj(VALUE arg, VALUE data) {
  return rb_funcall(data, rb_intern("call"), 0);
}

VALUE kernel_spec_rb_catch_obj(VALUE self, VALUE obj, VALUE main_proc) {
  return rb_catch_obj(obj, kernel_spec_call_proc_with_catch, main_proc);
}
#endif

#ifdef HAVE_RB_EVAL_STRING
VALUE kernel_spec_rb_eval_string(VALUE self, VALUE str) {
  return rb_eval_string(RSTRING_PTR(str));
}
#endif

#ifdef HAVE_RB_RAISE
VALUE kernel_spec_rb_raise(VALUE self, VALUE hash) {
  rb_hash_aset(hash, ID2SYM(rb_intern("stage")), ID2SYM(rb_intern("before")));
  if (self != Qundef)
    rb_raise(rb_eTypeError, "Wrong argument type %s (expected %s)", "Integer", "String");
  rb_hash_aset(hash, ID2SYM(rb_intern("stage")), ID2SYM(rb_intern("after")));
  return Qnil;
}
#endif

#ifdef HAVE_RB_THROW
VALUE kernel_spec_rb_throw(VALUE self, VALUE result) {
  if (self != Qundef) rb_throw("foo", result);
  return ID2SYM(rb_intern("rb_throw_failed"));
}
#endif

#ifdef HAVE_RB_THROW_OBJ
VALUE kernel_spec_rb_throw_obj(VALUE self, VALUE obj, VALUE result) {
  if (self != Qundef) rb_throw_obj(obj, result);
  return ID2SYM(rb_intern("rb_throw_failed"));
}
#endif

#ifdef HAVE_RB_RESCUE
VALUE kernel_spec_call_proc_with_raised_exc(VALUE arg_array, VALUE raised_exc) {
  VALUE argv[2];
  int argc;

  VALUE arg = rb_ary_pop(arg_array);
  VALUE proc = rb_ary_pop(arg_array);

  argv[0] = arg;
  argv[1] = raised_exc;

  argc = 2;

  return rb_funcall2(proc, rb_intern("call"), argc, argv);
}

VALUE kernel_spec_rb_rescue(VALUE self, VALUE main_proc, VALUE arg,
                            VALUE raise_proc, VALUE arg2) {
  VALUE main_array, raise_array;

  main_array = rb_ary_new();
  rb_ary_push(main_array, main_proc);
  rb_ary_push(main_array, arg);

  raise_array = rb_ary_new();
  rb_ary_push(raise_array, raise_proc);
  rb_ary_push(raise_array, arg2);

  return rb_rescue(kernel_spec_call_proc, main_array,
      kernel_spec_call_proc_with_raised_exc, raise_array);
}
#endif

#ifdef HAVE_RB_RESCUE2
VALUE kernel_spec_rb_rescue2(int argc, VALUE *args, VALUE self) {
  VALUE main_array, raise_array;

  main_array = rb_ary_new();
  rb_ary_push(main_array, args[0]);
  rb_ary_push(main_array, args[1]);

  raise_array = rb_ary_new();
  rb_ary_push(raise_array, args[2]);
  rb_ary_push(raise_array, args[3]);

  return rb_rescue2(kernel_spec_call_proc, main_array,
      kernel_spec_call_proc, raise_array, args[4], args[5], (VALUE)0);
}
#endif

#ifdef HAVE_RB_PROTECT
static VALUE kernel_spec_rb_protect_yield(VALUE self, VALUE obj, VALUE ary) {
  int status = 0;
  VALUE res = rb_protect(rb_yield, obj, &status);
  rb_ary_store(ary, 0, INT2NUM(23));
  if (status) {
    rb_jump_tag(status);
  }
  return res;
}
#endif

#ifdef HAVE_RB_SYS_FAIL
VALUE kernel_spec_rb_sys_fail(VALUE self, VALUE msg) {
  errno = 1;
  if(msg == Qnil) {
    rb_sys_fail(0);
  } else if (self != Qundef) {
    rb_sys_fail(StringValuePtr(msg));
  }
  return Qnil;
}
#endif

#ifdef HAVE_RB_SYSERR_FAIL
VALUE kernel_spec_rb_syserr_fail(VALUE self, VALUE err, VALUE msg) {
  if(msg == Qnil) {
    rb_syserr_fail(NUM2INT(err), NULL);
  } else if (self != Qundef) {
    rb_syserr_fail(NUM2INT(err), StringValuePtr(msg));
  }
  return Qnil;
}
#endif

#ifdef HAVE_RB_WARN
VALUE kernel_spec_rb_warn(VALUE self, VALUE msg) {
  rb_warn("%s", StringValuePtr(msg));
  return Qnil;
}
#endif

#ifdef HAVE_RB_YIELD
static VALUE kernel_spec_rb_yield(VALUE self, VALUE obj) {
  return rb_yield(obj);
}

static int kernel_cb(const void *a, const void *b) {
  rb_yield(Qtrue);
  return 0;
}

static VALUE kernel_indirected(int (*compar)(const void *, const void *)) {
  int bob[] = { 1, 1, 2, 3, 5, 8, 13 };
  qsort(bob, 7, sizeof(int), compar);
  return Qfalse;
}

static VALUE kernel_spec_rb_yield_indirected(VALUE self, VALUE obj) {
  return kernel_indirected(kernel_cb);
}
#endif

#ifdef HAVE_RB_YIELD_SPLAT
static VALUE kernel_spec_rb_yield_splat(VALUE self, VALUE ary) {
  return rb_yield_splat(ary);
}
#endif

#ifdef HAVE_RB_YIELD_VALUES
static VALUE kernel_spec_rb_yield_values(VALUE self, VALUE obj1, VALUE obj2) {
  return rb_yield_values(2, obj1, obj2);
}
#endif

#ifdef HAVE_RB_EXEC_RECURSIVE
static VALUE do_rec(VALUE obj, VALUE arg, int is_rec) {
  if(is_rec) {
    return obj;
  } else if(arg == Qtrue) {
    return rb_exec_recursive(do_rec, obj, Qnil);
  } else {
    return Qnil;
  }
}

static VALUE kernel_spec_rb_exec_recursive(VALUE self, VALUE obj) {
  return rb_exec_recursive(do_rec, obj, Qtrue);
}
#endif

#ifdef HAVE_RB_SET_END_PROC
static void write_io(VALUE io) {
  rb_funcall(io, rb_intern("write"), 1, rb_str_new2("e"));
}

static VALUE kernel_spec_rb_set_end_proc(VALUE self, VALUE io) {
  rb_set_end_proc(write_io, io);
  return Qnil;
}
#endif

#ifdef HAVE_RB_F_SPRINTF
static VALUE kernel_spec_rb_f_sprintf(VALUE self, VALUE ary) {
  return rb_f_sprintf((int)RARRAY_LEN(ary), RARRAY_PTR(ary));
}
#endif

#ifdef HAVE_RB_MAKE_BACKTRACE
static VALUE kernel_spec_rb_make_backtrace(VALUE self) {
  return rb_make_backtrace();
}
#endif

#ifdef HAVE_RB_OBJ_METHOD
static VALUE kernel_spec_rb_obj_method(VALUE self, VALUE obj, VALUE method) {
  return rb_obj_method(obj, method);
}
#endif

#ifdef HAVE_RB_FUNCALL3
static VALUE kernel_spec_rb_funcall3(VALUE self, VALUE obj, VALUE method) {
  return rb_funcall3(obj, SYM2ID(method), 0, NULL);
}
#endif

#ifdef HAVE_RB_FUNCALL_WITH_BLOCK
static VALUE kernel_spec_rb_funcall_with_block(VALUE self, VALUE obj, VALUE method, VALUE block) {
  return rb_funcall_with_block(obj, SYM2ID(method), 0, NULL, block);
}
#endif

void Init_kernel_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiKernelSpecs", rb_cObject);

#ifdef HAVE_RB_BLOCK_GIVEN_P
  rb_define_method(cls, "rb_block_given_p", kernel_spec_rb_block_given_p, 0);
#endif

#ifdef HAVE_RB_NEED_BLOCK
  rb_define_method(cls, "rb_need_block", kernel_spec_rb_need_block, 0);
#endif

#ifdef HAVE_RB_BLOCK_CALL
  rb_define_method(cls, "rb_block_call", kernel_spec_rb_block_call, 1);
  rb_define_method(cls, "rb_block_call_multi_arg", kernel_spec_rb_block_call_multi_arg, 1);
  rb_define_method(cls, "rb_block_call_no_func", kernel_spec_rb_block_call_no_func, 1);
#endif

#ifdef HAVE_RB_BLOCK_PROC
  rb_define_method(cls, "rb_block_proc", kernel_spec_rb_block_proc, 0);
#endif

#ifdef HAVE_RB_ENSURE
  rb_define_method(cls, "rb_ensure", kernel_spec_rb_ensure, 4);
#endif

#ifdef HAVE_RB_EVAL_STRING
  rb_define_method(cls, "rb_eval_string", kernel_spec_rb_eval_string, 1);
#endif

#ifdef HAVE_RB_RAISE
  rb_define_method(cls, "rb_raise", kernel_spec_rb_raise, 1);
#endif

#ifdef HAVE_RB_THROW
  rb_define_method(cls, "rb_throw", kernel_spec_rb_throw, 1);
#endif

#ifdef HAVE_RB_THROW_OBJ
  rb_define_method(cls, "rb_throw_obj", kernel_spec_rb_throw_obj, 2);
#endif

#ifdef HAVE_RB_RESCUE
  rb_define_method(cls, "rb_rescue", kernel_spec_rb_rescue, 4);
#endif

#ifdef HAVE_RB_RESCUE2
  rb_define_method(cls, "rb_rescue2", kernel_spec_rb_rescue2, -1);
#endif

#ifdef HAVE_RB_PROTECT
  rb_define_method(cls, "rb_protect_yield", kernel_spec_rb_protect_yield, 2);
#endif

#ifdef HAVE_RB_CATCH
  rb_define_method(cls, "rb_catch", kernel_spec_rb_catch, 2);
#endif

#ifdef HAVE_RB_CATCH_OBJ
  rb_define_method(cls, "rb_catch_obj", kernel_spec_rb_catch_obj, 2);
#endif

#ifdef HAVE_RB_SYS_FAIL
  rb_define_method(cls, "rb_sys_fail", kernel_spec_rb_sys_fail, 1);
#endif

#ifdef HAVE_RB_SYSERR_FAIL
  rb_define_method(cls, "rb_syserr_fail", kernel_spec_rb_syserr_fail, 2);
#endif

#ifdef HAVE_RB_WARN
  rb_define_method(cls, "rb_warn", kernel_spec_rb_warn, 1);
#endif

#ifdef HAVE_RB_YIELD
  rb_define_method(cls, "rb_yield", kernel_spec_rb_yield, 1);
  rb_define_method(cls, "rb_yield_indirected", kernel_spec_rb_yield_indirected, 1);
#endif

#ifdef HAVE_RB_YIELD_VALUES
  rb_define_method(cls, "rb_yield_values", kernel_spec_rb_yield_values, 2);
#endif

#ifdef HAVE_RB_YIELD_SPLAT
  rb_define_method(cls, "rb_yield_splat", kernel_spec_rb_yield_splat, 1);
#endif

#ifdef HAVE_RB_EXEC_RECURSIVE
  rb_define_method(cls, "rb_exec_recursive", kernel_spec_rb_exec_recursive, 1);
#endif

#ifdef HAVE_RB_SET_END_PROC
  rb_define_method(cls, "rb_set_end_proc", kernel_spec_rb_set_end_proc, 1);
#endif

#ifdef HAVE_RB_F_SPRINTF
  rb_define_method(cls, "rb_f_sprintf", kernel_spec_rb_f_sprintf, 1);
#endif

#ifdef HAVE_RB_MAKE_BACKTRACE
  rb_define_method(cls, "rb_make_backtrace", kernel_spec_rb_make_backtrace, 0);
#endif

#ifdef HAVE_RB_OBJ_METHOD
  rb_define_method(cls, "rb_obj_method", kernel_spec_rb_obj_method, 2);
#endif

#ifdef HAVE_RB_FUNCALL3
  rb_define_method(cls, "rb_funcall3", kernel_spec_rb_funcall3, 2);
#endif

#ifdef HAVE_RB_FUNCALL_WITH_BLOCK
  rb_define_method(cls, "rb_funcall_with_block", kernel_spec_rb_funcall_with_block, 3);
#endif
}

#ifdef __cplusplus
}
#endif
