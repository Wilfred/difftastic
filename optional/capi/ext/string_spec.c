#include "ruby.h"
#include "rubyspec.h"

#include <string.h>
#include <stdarg.h>

#ifdef HAVE_RUBY_ENCODING_H
#include "ruby/encoding.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_CSTR2INUM
VALUE string_spec_rb_cstr2inum(VALUE self, VALUE str, VALUE inum) {
  int num = FIX2INT(inum);
  return rb_cstr2inum(RSTRING_PTR(str), num);
}
#endif

#ifdef HAVE_RB_CSTR_TO_INUM
static VALUE string_spec_rb_cstr_to_inum(VALUE self, VALUE str, VALUE inum, VALUE badcheck) {
  int num = FIX2INT(inum);
  return rb_cstr_to_inum(RSTRING_PTR(str), num, RTEST(badcheck));
}
#endif

#ifdef HAVE_RB_STR2INUM
VALUE string_spec_rb_str2inum(VALUE self, VALUE str, VALUE inum) {
  int num = FIX2INT(inum);
  return rb_str2inum(str, num);
}
#endif

#ifdef HAVE_RB_STR_APPEND
VALUE string_spec_rb_str_append(VALUE self, VALUE str, VALUE str2) {
  return rb_str_append(str, str2);
}
#endif

#ifdef HAVE_RB_STR_SET_LEN
VALUE string_spec_rb_str_set_len(VALUE self, VALUE str, VALUE len) {
  rb_str_set_len(str, NUM2LONG(len));

  return str;
}

VALUE string_spec_rb_str_set_len_RSTRING_LEN(VALUE self, VALUE str, VALUE len) {
  rb_str_set_len(str, NUM2LONG(len));

  return INT2FIX(RSTRING_LEN(str));
}
#endif

#ifdef HAVE_RB_STR_BUF_NEW
VALUE string_spec_rb_str_buf_new(VALUE self, VALUE len, VALUE str) {
  VALUE buf;

  buf = rb_str_buf_new(NUM2LONG(len));

  if(RTEST(str)) {
    snprintf(RSTRING_PTR(buf), NUM2LONG(len), "%s", RSTRING_PTR(str));
  }

  return buf;
}
#endif

#ifdef HAVE_RB_STR_BUF_NEW2
VALUE string_spec_rb_str_buf_new2(VALUE self) {
  return rb_str_buf_new2("hello\0invisible");
}
#endif

#ifdef HAVE_RB_STR_BUF_CAT
VALUE string_spec_rb_str_buf_cat(VALUE self, VALUE str) {
  const char *question_mark = "?";
  rb_str_buf_cat(str, question_mark, strlen(question_mark));
  return str;
}
#endif

#ifdef HAVE_RB_STR_CAT
VALUE string_spec_rb_str_cat(VALUE self, VALUE str) {
  return rb_str_cat(str, "?", 1);
}
#endif

#ifdef HAVE_RB_STR_CAT2
VALUE string_spec_rb_str_cat2(VALUE self, VALUE str) {
  return rb_str_cat2(str, "?");
}
#endif

#ifdef HAVE_RB_STR_CMP
VALUE string_spec_rb_str_cmp(VALUE self, VALUE str1, VALUE str2) {
  return INT2NUM(rb_str_cmp(str1, str2));
}
#endif

#ifdef HAVE_RB_STR_CONV_ENC
VALUE string_spec_rb_str_conv_enc(VALUE self, VALUE str, VALUE from, VALUE to) {
  rb_encoding* from_enc;
  rb_encoding* to_enc;

  from_enc = rb_to_encoding(from);

  if(NIL_P(to)) {
    to_enc = 0;
  } else {
    to_enc = rb_to_encoding(to);
  }

  return rb_str_conv_enc(str, from_enc, to_enc);
}
#endif

#ifdef HAVE_RB_STR_CONV_ENC_OPTS
VALUE string_spec_rb_str_conv_enc_opts(VALUE self, VALUE str, VALUE from, VALUE to,
                                       VALUE ecflags, VALUE ecopts)
{
  rb_encoding* from_enc;
  rb_encoding* to_enc;

  from_enc = rb_to_encoding(from);

  if(NIL_P(to)) {
    to_enc = 0;
  } else {
    to_enc = rb_to_encoding(to);
  }

  return rb_str_conv_enc_opts(str, from_enc, to_enc, FIX2INT(ecflags), ecopts);
}
#endif

#ifdef HAVE_RB_STR_EXPORT
VALUE string_spec_rb_str_export(VALUE self, VALUE str) {
  return rb_str_export(str);
}
#endif

#ifdef HAVE_RB_STR_EXPORT_LOCALE
VALUE string_spec_rb_str_export_locale(VALUE self, VALUE str) {
  return rb_str_export_locale(str);
}
#endif

#ifdef HAVE_RB_STR_DUP
VALUE string_spec_rb_str_dup(VALUE self, VALUE str) {
  return rb_str_dup(str);
}
#endif

#ifdef HAVE_RB_STR_FREEZE
VALUE string_spec_rb_str_freeze(VALUE self, VALUE str) {
  return rb_str_freeze(str);
}
#endif

#ifdef HAVE_RB_STR_INSPECT
VALUE string_spec_rb_str_inspect(VALUE self, VALUE str) {
  return rb_str_inspect(str);
}
#endif

#ifdef HAVE_RB_STR_INTERN
VALUE string_spec_rb_str_intern(VALUE self, VALUE str) {
  return rb_str_intern(str);
}
#endif

#ifdef HAVE_RB_STR_LENGTH
VALUE string_spec_rb_str_length(VALUE self, VALUE str) {
  return rb_str_length(str);
}
#endif

#ifdef HAVE_RB_STR_NEW
VALUE string_spec_rb_str_new(VALUE self, VALUE str, VALUE len) {
  return rb_str_new(RSTRING_PTR(str), FIX2INT(len));
}
#endif

#ifdef HAVE_RB_STR_NEW2
VALUE string_spec_rb_str_new2(VALUE self, VALUE str) {
  if(NIL_P(str)) {
    return rb_str_new2("");
  } else {
    return rb_str_new2(RSTRING_PTR(str));
  }
}
#endif

#ifdef HAVE_RB_STR_ENCODE
VALUE string_spec_rb_str_encode(VALUE self, VALUE str, VALUE enc, VALUE flags, VALUE opts) {
  return rb_str_encode(str, enc, FIX2INT(flags), opts);
}
#endif

#ifdef HAVE_RB_STR_NEW_CSTR
VALUE string_spec_rb_str_new_cstr(VALUE self, VALUE str) {
  if(NIL_P(str)) {
    return rb_str_new_cstr("");
  } else {
    return rb_str_new_cstr(RSTRING_PTR(str));
  }
}
#endif

#ifdef HAVE_RB_EXTERNAL_STR_NEW
VALUE string_spec_rb_external_str_new(VALUE self, VALUE str) {
  return rb_external_str_new(RSTRING_PTR(str), RSTRING_LEN(str));
}
#endif

#ifdef HAVE_RB_EXTERNAL_STR_NEW_CSTR
VALUE string_spec_rb_external_str_new_cstr(VALUE self, VALUE str) {
  return rb_external_str_new_cstr(RSTRING_PTR(str));
}
#endif

#ifdef HAVE_RB_EXTERNAL_STR_NEW_WITH_ENC
VALUE string_spec_rb_external_str_new_with_enc(VALUE self, VALUE str, VALUE len, VALUE encoding) {
  return rb_external_str_new_with_enc(RSTRING_PTR(str), FIX2LONG(len), rb_to_encoding(encoding));
}
#endif

#ifdef HAVE_RB_LOCALE_STR_NEW
VALUE string_spec_rb_locale_str_new(VALUE self, VALUE str, VALUE len) {
  return rb_locale_str_new(RSTRING_PTR(str), FIX2INT(len));
}
#endif

#ifdef HAVE_RB_LOCALE_STR_NEW_CSTR
VALUE string_spec_rb_locale_str_new_cstr(VALUE self, VALUE str) {
  return rb_locale_str_new_cstr(RSTRING_PTR(str));
}
#endif

#ifdef HAVE_RB_STR_NEW3
VALUE string_spec_rb_str_new3(VALUE self, VALUE str) {
  return rb_str_new3(str);
}
#endif

#ifdef HAVE_RB_STR_NEW4
VALUE string_spec_rb_str_new4(VALUE self, VALUE str) {
  return rb_str_new4(str);
}
#endif

#ifdef HAVE_RB_STR_NEW5
VALUE string_spec_rb_str_new5(VALUE self, VALUE str, VALUE ptr, VALUE len) {
  return rb_str_new5(str, RSTRING_PTR(ptr), FIX2INT(len));
}
#endif

#ifdef HAVE_RB_STR_PLUS
VALUE string_spec_rb_str_plus(VALUE self, VALUE str1, VALUE str2) {
  return rb_str_plus(str1, str2);
}
#endif

#ifdef HAVE_RB_STR_TIMES
VALUE string_spec_rb_str_times(VALUE self, VALUE str, VALUE times) {
  return rb_str_times(str, times);
}
#endif

#ifdef HAVE_RB_STR_RESIZE
VALUE string_spec_rb_str_resize(VALUE self, VALUE str, VALUE size) {
  return rb_str_resize(str, FIX2INT(size));
}

VALUE string_spec_rb_str_resize_RSTRING_LEN(VALUE self, VALUE str, VALUE size) {
  VALUE modified = rb_str_resize(str, FIX2INT(size));
  return INT2FIX(RSTRING_LEN(modified));
}
#endif

#ifdef HAVE_RB_STR_SPLIT
VALUE string_spec_rb_str_split(VALUE self, VALUE str) {
  return rb_str_split(str, ",");
}
#endif

#ifdef HAVE_RB_STR_SUBSEQ
VALUE string_spec_rb_str_subseq(VALUE self, VALUE str, VALUE beg, VALUE len) {
  return rb_str_subseq(str, FIX2INT(beg), FIX2INT(len));
}
#endif

#ifdef HAVE_RB_STR_SUBSTR
VALUE string_spec_rb_str_substr(VALUE self, VALUE str, VALUE beg, VALUE len) {
  return rb_str_substr(str, FIX2INT(beg), FIX2INT(len));
}
#endif

#ifdef HAVE_RB_STR_TO_STR
VALUE string_spec_rb_str_to_str(VALUE self, VALUE arg) {
  return rb_str_to_str(arg);
}
#endif

#ifdef HAVE_RSTRING_LEN
VALUE string_spec_RSTRING_LEN(VALUE self, VALUE str) {
  return INT2FIX(RSTRING_LEN(str));
}
#endif

#ifdef HAVE_RSTRING_LENINT
VALUE string_spec_RSTRING_LENINT(VALUE self, VALUE str) {
  return INT2FIX(RSTRING_LENINT(str));
}
#endif

#ifdef HAVE_RSTRING_PTR
VALUE string_spec_RSTRING_PTR_iterate(VALUE self, VALUE str) {
  int i;
  char* ptr;

  ptr = RSTRING_PTR(str);
  for(i = 0; i < RSTRING_LEN(str); i++) {
    rb_yield(CHR2FIX(ptr[i]));
  }
  return Qnil;
}

VALUE string_spec_RSTRING_PTR_assign(VALUE self, VALUE str, VALUE chr) {
  int i;
  char c;
  char* ptr;

  ptr = RSTRING_PTR(str);
  c = FIX2INT(chr);

  for(i = 0; i < RSTRING_LEN(str); i++) {
    ptr[i] = c;
  }
  return Qnil;
}

VALUE string_spec_RSTRING_PTR_after_funcall(VALUE self, VALUE str, VALUE cb) {
  /* Silence gcc 4.3.2 warning about computed value not used */
  if(RSTRING_PTR(str)) { /* force it out */
    rb_funcall(cb, rb_intern("call"), 1, str);
  }

  return rb_str_new2(RSTRING_PTR(str));
}
#endif

#ifdef HAVE_STRINGVALUE
VALUE string_spec_StringValue(VALUE self, VALUE str) {
  return StringValue(str);
}
#endif

#ifdef HAVE_RB_STR_HASH
static VALUE string_spec_rb_str_hash(VALUE self, VALUE str) {
  st_index_t val = rb_str_hash(str);

#if SIZEOF_LONG == SIZEOF_VOIDP || SIZEOF_LONG_LONG == SIZEOF_VOIDP
  return LONG2FIX((long)val);
#else
# error unsupported platform
#endif
}
#endif

#ifdef HAVE_RB_STR_UPDATE
static VALUE string_spec_rb_str_update(VALUE self, VALUE str, VALUE beg, VALUE end, VALUE replacement) {
  rb_str_update(str, FIX2LONG(beg), FIX2LONG(end), replacement);
  return str;
}
#endif

#ifdef HAVE_RB_STR_FREE
static VALUE string_spec_rb_str_free(VALUE self, VALUE str) {
  rb_str_free(str);
  return Qnil;
}
#endif

#ifdef HAVE_RB_SPRINTF
static VALUE string_spec_rb_sprintf1(VALUE self, VALUE str, VALUE repl) {
  return rb_sprintf(RSTRING_PTR(str), RSTRING_PTR(repl));
}
static VALUE string_spec_rb_sprintf2(VALUE self, VALUE str, VALUE repl1, VALUE repl2) {
  return rb_sprintf(RSTRING_PTR(str), RSTRING_PTR(repl1), RSTRING_PTR(repl2));
}
#endif

#ifdef HAVE_RB_VSPRINTF
static VALUE string_spec_rb_vsprintf_worker(char* fmt, ...) {
  va_list varargs;
  VALUE str;

  va_start(varargs, fmt);
  str = rb_vsprintf(fmt, varargs);
  va_end(varargs);

  return str;
}

static VALUE string_spec_rb_vsprintf(VALUE self, VALUE fmt, VALUE str, VALUE i, VALUE f) {
  return string_spec_rb_vsprintf_worker(RSTRING_PTR(fmt), RSTRING_PTR(str),
      FIX2INT(i), RFLOAT_VALUE(f));
}
#endif

#ifdef HAVE_RB_STR_EQUAL
VALUE string_spec_rb_str_equal(VALUE self, VALUE str1, VALUE str2) {
  return rb_str_equal(str1, str2);
}
#endif

#ifdef HAVE_RB_USASCII_STR_NEW
static VALUE string_spec_rb_usascii_str_new(VALUE self, VALUE str, VALUE len) {
  return rb_usascii_str_new(RSTRING_PTR(str), NUM2INT(len));
}
#endif

#ifdef HAVE_RB_USASCII_STR_NEW_CSTR
static VALUE string_spec_rb_usascii_str_new_cstr(VALUE self, VALUE str) {
  return rb_usascii_str_new_cstr(RSTRING_PTR(str));
}
#endif

#ifdef HAVE_RB_STRING
static VALUE string_spec_rb_String(VALUE self, VALUE val) {
  return rb_String(val);
}
#endif

void Init_string_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiStringSpecs", rb_cObject);

#ifdef HAVE_RB_CSTR2INUM
  rb_define_method(cls, "rb_cstr2inum", string_spec_rb_cstr2inum, 2);
#endif

#ifdef HAVE_RB_CSTR_TO_INUM
  rb_define_method(cls, "rb_cstr_to_inum", string_spec_rb_cstr_to_inum, 3);
#endif

#ifdef HAVE_RB_STR2INUM
  rb_define_method(cls, "rb_str2inum", string_spec_rb_str2inum, 2);
#endif

#ifdef HAVE_RB_STR_APPEND
  rb_define_method(cls, "rb_str_append", string_spec_rb_str_append, 2);
#endif

#ifdef HAVE_RB_STR_BUF_NEW
  rb_define_method(cls, "rb_str_buf_new", string_spec_rb_str_buf_new, 2);
#endif

#ifdef HAVE_RB_STR_BUF_NEW2
  rb_define_method(cls, "rb_str_buf_new2", string_spec_rb_str_buf_new2, 0);
#endif

#ifdef HAVE_RB_STR_BUF_CAT
  rb_define_method(cls, "rb_str_buf_cat", string_spec_rb_str_buf_cat, 1);
#endif

#ifdef HAVE_RB_STR_CAT
  rb_define_method(cls, "rb_str_cat", string_spec_rb_str_cat, 1);
#endif

#ifdef HAVE_RB_STR_CAT2
  rb_define_method(cls, "rb_str_cat2", string_spec_rb_str_cat2, 1);
#endif

#ifdef HAVE_RB_STR_CMP
  rb_define_method(cls, "rb_str_cmp", string_spec_rb_str_cmp, 2);
#endif

#ifdef HAVE_RB_STR_CONV_ENC
  rb_define_method(cls, "rb_str_conv_enc", string_spec_rb_str_conv_enc, 3);
#endif

#ifdef HAVE_RB_STR_CONV_ENC_OPTS
  rb_define_method(cls, "rb_str_conv_enc_opts", string_spec_rb_str_conv_enc_opts, 5);
#endif

#ifdef HAVE_RB_STR_EXPORT
  rb_define_method(cls, "rb_str_export", string_spec_rb_str_export, 1);
#endif

#ifdef HAVE_RB_STR_EXPORT_LOCALE
  rb_define_method(cls, "rb_str_export_locale", string_spec_rb_str_export_locale, 1);
#endif

#ifdef HAVE_RB_STR_DUP
  rb_define_method(cls, "rb_str_dup", string_spec_rb_str_dup, 1);
#endif

#ifdef HAVE_RB_STR_FREEZE
  rb_define_method(cls, "rb_str_freeze", string_spec_rb_str_freeze, 1);
#endif

#ifdef HAVE_RB_STR_INSPECT
  rb_define_method(cls, "rb_str_inspect", string_spec_rb_str_inspect, 1);
#endif

#ifdef HAVE_RB_STR_INTERN
  rb_define_method(cls, "rb_str_intern", string_spec_rb_str_intern, 1);
#endif

#ifdef HAVE_RB_STR_LENGTH
  rb_define_method(cls, "rb_str_length", string_spec_rb_str_length, 1);
#endif

#ifdef HAVE_RB_STR_NEW
  rb_define_method(cls, "rb_str_new", string_spec_rb_str_new, 2);
#endif

#ifdef HAVE_RB_STR_NEW2
  rb_define_method(cls, "rb_str_new2", string_spec_rb_str_new2, 1);
#endif

#ifdef HAVE_RB_STR_ENCODE
  rb_define_method(cls, "rb_str_encode", string_spec_rb_str_encode, 4);
#endif

#ifdef HAVE_RB_STR_NEW_CSTR
  rb_define_method(cls, "rb_str_new_cstr", string_spec_rb_str_new_cstr, 1);
#endif

#ifdef HAVE_RB_EXTERNAL_STR_NEW
  rb_define_method(cls, "rb_external_str_new", string_spec_rb_external_str_new, 1);
#endif

#ifdef HAVE_RB_EXTERNAL_STR_NEW_CSTR
  rb_define_method(cls, "rb_external_str_new_cstr",
                   string_spec_rb_external_str_new_cstr, 1);
#endif

#ifdef HAVE_RB_EXTERNAL_STR_NEW_WITH_ENC
  rb_define_method(cls, "rb_external_str_new_with_enc", string_spec_rb_external_str_new_with_enc, 3);
#endif

#ifdef HAVE_RB_LOCALE_STR_NEW
  rb_define_method(cls, "rb_locale_str_new", string_spec_rb_locale_str_new, 2);
#endif

#ifdef HAVE_RB_LOCALE_STR_NEW_CSTR
  rb_define_method(cls, "rb_locale_str_new_cstr", string_spec_rb_locale_str_new_cstr, 1);
#endif

#ifdef HAVE_RB_STR_NEW3
  rb_define_method(cls, "rb_str_new3", string_spec_rb_str_new3, 1);
#endif

#ifdef HAVE_RB_STR_NEW4
  rb_define_method(cls, "rb_str_new4", string_spec_rb_str_new4, 1);
#endif

#ifdef HAVE_RB_STR_NEW5
  rb_define_method(cls, "rb_str_new5", string_spec_rb_str_new5, 3);
#endif

#ifdef HAVE_RB_STR_PLUS
  rb_define_method(cls, "rb_str_plus", string_spec_rb_str_plus, 2);
#endif

#ifdef HAVE_RB_STR_TIMES
  rb_define_method(cls, "rb_str_times", string_spec_rb_str_times, 2);
#endif

#ifdef HAVE_RB_STR_RESIZE
  rb_define_method(cls, "rb_str_resize", string_spec_rb_str_resize, 2);
  rb_define_method(cls, "rb_str_resize_RSTRING_LEN",
      string_spec_rb_str_resize_RSTRING_LEN, 2);
#endif

#ifdef HAVE_RB_STR_SET_LEN
  rb_define_method(cls, "rb_str_set_len", string_spec_rb_str_set_len, 2);
  rb_define_method(cls, "rb_str_set_len_RSTRING_LEN",
      string_spec_rb_str_set_len_RSTRING_LEN, 2);
#endif

#ifdef HAVE_RB_STR_SPLIT
  rb_define_method(cls, "rb_str_split", string_spec_rb_str_split, 1);
#endif

#ifdef HAVE_RB_STR_SUBSEQ
  rb_define_method(cls, "rb_str_subseq", string_spec_rb_str_subseq, 3);
#endif

#ifdef HAVE_RB_STR_SUBSTR
  rb_define_method(cls, "rb_str_substr", string_spec_rb_str_substr, 3);
#endif

#ifdef HAVE_RB_STR_TO_STR
  rb_define_method(cls, "rb_str_to_str", string_spec_rb_str_to_str, 1);
#endif

#ifdef HAVE_RSTRING_LEN
  rb_define_method(cls, "RSTRING_LEN", string_spec_RSTRING_LEN, 1);
#endif

#ifdef HAVE_RSTRING_LENINT
  rb_define_method(cls, "RSTRING_LENINT", string_spec_RSTRING_LENINT, 1);
#endif

#ifdef HAVE_RSTRING_PTR
  rb_define_method(cls, "RSTRING_PTR_iterate", string_spec_RSTRING_PTR_iterate, 1);
  rb_define_method(cls, "RSTRING_PTR_assign", string_spec_RSTRING_PTR_assign, 2);
  rb_define_method(cls, "RSTRING_PTR_after_funcall",
      string_spec_RSTRING_PTR_after_funcall, 2);
#endif

#ifdef HAVE_STRINGVALUE
  rb_define_method(cls, "StringValue", string_spec_StringValue, 1);
#endif

#ifdef HAVE_RB_STR_HASH
  rb_define_method(cls, "rb_str_hash", string_spec_rb_str_hash, 1);
#endif

#ifdef HAVE_RB_STR_UPDATE
  rb_define_method(cls, "rb_str_update", string_spec_rb_str_update, 4);
#endif

#ifdef HAVE_RB_STR_FREE
  rb_define_method(cls, "rb_str_free", string_spec_rb_str_free, 1);
#endif

#ifdef HAVE_RB_SPRINTF
  rb_define_method(cls, "rb_sprintf1", string_spec_rb_sprintf1, 2);
  rb_define_method(cls, "rb_sprintf2", string_spec_rb_sprintf2, 3);
#endif

#ifdef HAVE_RB_VSPRINTF
  rb_define_method(cls, "rb_vsprintf", string_spec_rb_vsprintf, 4);
#endif

#ifdef HAVE_RB_STR_EQUAL
  rb_define_method(cls, "rb_str_equal", string_spec_rb_str_equal, 2);
#endif

#ifdef HAVE_RB_USASCII_STR_NEW
  rb_define_method(cls, "rb_usascii_str_new", string_spec_rb_usascii_str_new, 2);
#endif

#ifdef HAVE_RB_USASCII_STR_NEW_CSTR
  rb_define_method(cls, "rb_usascii_str_new_cstr", string_spec_rb_usascii_str_new_cstr, 1);
#endif

#ifdef HAVE_RB_STRING
  rb_define_method(cls, "rb_String", string_spec_rb_String, 1);
#endif
}

#ifdef __cplusplus
}
#endif
