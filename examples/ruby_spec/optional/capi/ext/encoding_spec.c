#include "ruby.h"
#include "rubyspec.h"

#include "ruby/encoding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_ENC_CODERANGE_ASCIIONLY
static VALUE encoding_spec_ENC_CODERANGE_ASCIIONLY(VALUE self, VALUE obj) {
  if(ENC_CODERANGE_ASCIIONLY(obj)) {
    return Qtrue;
  } else {
    return Qfalse;
  }
}
#endif

#ifdef HAVE_RB_USASCII_ENCODING
static VALUE encoding_spec_rb_usascii_encoding(VALUE self) {
  return rb_str_new2(rb_usascii_encoding()->name);
}
#endif

#ifdef HAVE_RB_USASCII_ENCINDEX
static VALUE encoding_spec_rb_usascii_encindex(VALUE self) {
  return INT2NUM(rb_usascii_encindex());
}
#endif

#ifdef HAVE_RB_ASCII8BIT_ENCODING
static VALUE encoding_spec_rb_ascii8bit_encoding(VALUE self) {
  return rb_str_new2(rb_ascii8bit_encoding()->name);
}
#endif

#ifdef HAVE_RB_ASCII8BIT_ENCINDEX
static VALUE encoding_spec_rb_ascii8bit_encindex(VALUE self) {
  return INT2NUM(rb_ascii8bit_encindex());
}
#endif

#ifdef HAVE_RB_UTF8_ENCODING
static VALUE encoding_spec_rb_utf8_encoding(VALUE self) {
  return rb_str_new2(rb_utf8_encoding()->name);
}
#endif

#ifdef HAVE_RB_UTF8_ENCINDEX
static VALUE encoding_spec_rb_utf8_encindex(VALUE self) {
  return INT2NUM(rb_utf8_encindex());
}
#endif

#ifdef HAVE_RB_LOCALE_ENCODING
static VALUE encoding_spec_rb_locale_encoding(VALUE self) {
  return rb_str_new2(rb_locale_encoding()->name);
}
#endif

#ifdef HAVE_RB_LOCALE_ENCINDEX
static VALUE encoding_spec_rb_locale_encindex(VALUE self) {
  return INT2NUM(rb_locale_encindex());
}
#endif

#ifdef HAVE_RB_FILESYSTEM_ENCODING
static VALUE encoding_spec_rb_filesystem_encoding(VALUE self) {
  return rb_str_new2(rb_filesystem_encoding()->name);
}
#endif

#ifdef HAVE_RB_FILESYSTEM_ENCINDEX
static VALUE encoding_spec_rb_filesystem_encindex(VALUE self) {
  return INT2NUM(rb_filesystem_encindex());
}
#endif

#ifdef HAVE_RB_DEFAULT_INTERNAL_ENCODING
static VALUE encoding_spec_rb_default_internal_encoding(VALUE self) {
  rb_encoding* enc = rb_default_internal_encoding();
  if(enc == 0) return Qnil;
  return rb_str_new2(enc->name);
}
#endif

#ifdef HAVE_RB_DEFAULT_EXTERNAL_ENCODING
static VALUE encoding_spec_rb_default_external_encoding(VALUE self) {
  rb_encoding* enc = rb_default_external_encoding();
  if(enc == 0) return Qnil;
  return rb_str_new2(enc->name);
}
#endif

#ifdef HAVE_RB_ENCDB_ALIAS
/* Not exposed by MRI C-API encoding.h but used in the pg gem. */
extern int rb_encdb_alias(const char* alias, const char* orig);

static VALUE encoding_spec_rb_encdb_alias(VALUE self, VALUE alias, VALUE orig) {
  return INT2NUM(rb_encdb_alias(RSTRING_PTR(alias), RSTRING_PTR(orig)));
}
#endif

#if defined(HAVE_RB_ENC_ASSOCIATE) && defined(HAVE_RB_ENC_FIND)
static VALUE encoding_spec_rb_enc_associate(VALUE self, VALUE obj, VALUE enc) {
  return rb_enc_associate(obj, NIL_P(enc) ? NULL : rb_enc_find(RSTRING_PTR(enc)));
}
#endif

#if defined(HAVE_RB_ENC_ASSOCIATE_INDEX) && defined(HAVE_RB_ENC_FIND_INDEX)
static VALUE encoding_spec_rb_enc_associate_index(VALUE self, VALUE obj, VALUE index) {
  return rb_enc_associate_index(obj, FIX2INT(index));
}
#endif

#ifdef HAVE_RB_ENC_COMPATIBLE
static VALUE encoding_spec_rb_enc_compatible(VALUE self, VALUE a, VALUE b) {
  rb_encoding* enc = rb_enc_compatible(a, b);

  if(!enc) return INT2FIX(0);

  return rb_enc_from_encoding(enc);
}
#endif

#ifdef HAVE_RB_ENC_COPY
static VALUE encoding_spec_rb_enc_copy(VALUE self, VALUE dest, VALUE src) {
  rb_enc_copy(dest, src);
  return dest;
}
#endif

#ifdef HAVE_RB_ENC_FIND
static VALUE encoding_spec_rb_enc_find(VALUE self, VALUE name) {
  return rb_str_new2(rb_enc_find(RSTRING_PTR(name))->name);
}
#endif

#ifdef HAVE_RB_ENC_FIND_INDEX
static VALUE encoding_spec_rb_enc_find_index(VALUE self, VALUE name) {
  return INT2NUM(rb_enc_find_index(RSTRING_PTR(name)));
}
#endif

#ifdef HAVE_RB_ENC_FROM_INDEX
static VALUE encoding_spec_rb_enc_from_index(VALUE self, VALUE index) {
  return rb_str_new2(rb_enc_from_index(NUM2INT(index))->name);
}
#endif

#ifdef HAVE_RB_ENC_FROM_ENCODING
static VALUE encoding_spec_rb_enc_from_encoding(VALUE self, VALUE name) {
  return rb_enc_from_encoding(rb_enc_find(RSTRING_PTR(name)));
}
#endif

#ifdef HAVE_RB_ENC_GET
static VALUE encoding_spec_rb_enc_get(VALUE self, VALUE obj) {
  return rb_str_new2(rb_enc_get(obj)->name);
}
#endif

#ifdef HAVE_RB_OBJ_ENCODING
static VALUE encoding_spec_rb_obj_encoding(VALUE self, VALUE obj) {
  return rb_obj_encoding(obj);
}
#endif

#ifdef HAVE_RB_ENC_GET_INDEX
static VALUE encoding_spec_rb_enc_get_index(VALUE self, VALUE obj) {
  return INT2NUM(rb_enc_get_index(obj));
}
#endif

#if defined(HAVE_RB_ENC_SET_INDEX) \
      && defined(HAVE_RB_ENC_FIND_INDEX) \
      && defined(HAVE_RB_ENC_FIND_INDEX)
static VALUE encoding_spec_rb_enc_set_index(VALUE self, VALUE obj, VALUE index) {
  int i = NUM2INT(index);

  rb_encoding* enc = rb_enc_from_index(i);
  rb_enc_set_index(obj, i);

  return rb_ary_new3(2, rb_str_new2(rb_enc_name(enc)),
                     rb_str_new2(rb_enc_name(rb_enc_get(obj))));
}
#endif

#ifdef HAVE_RB_ENC_STR_CODERANGE
static VALUE encoding_spec_rb_enc_str_coderange(VALUE self, VALUE str) {
  int coderange = rb_enc_str_coderange(str);

  switch(coderange) {
  case ENC_CODERANGE_UNKNOWN:
    return ID2SYM(rb_intern("coderange_unknown"));
  case ENC_CODERANGE_7BIT:
    return ID2SYM(rb_intern("coderange_7bit"));
  case ENC_CODERANGE_VALID:
    return ID2SYM(rb_intern("coderange_valid"));
  case ENC_CODERANGE_BROKEN:
    return ID2SYM(rb_intern("coderange_broken"));
  default:
    return ID2SYM(rb_intern("coderange_unrecognized"));
  }
}
#endif

#ifdef HAVE_RB_ENC_STR_NEW
static VALUE encoding_spec_rb_enc_str_new(VALUE self, VALUE str, VALUE len, VALUE enc) {
  return rb_enc_str_new(RSTRING_PTR(str), FIX2INT(len), rb_to_encoding(enc));
}
#endif

#ifdef HAVE_ENCODING_GET
static VALUE encoding_spec_ENCODING_GET(VALUE self, VALUE obj) {
  return INT2NUM(ENCODING_GET(obj));
}
#endif

#ifdef HAVE_ENCODING_SET
static VALUE encoding_spec_ENCODING_SET(VALUE self, VALUE obj, VALUE index) {
  int i = NUM2INT(index);

  rb_encoding* enc = rb_enc_from_index(i);
  ENCODING_SET(obj, i);

  return rb_ary_new3(2, rb_str_new2(rb_enc_name(enc)),
                     rb_str_new2(rb_enc_name(rb_enc_get(obj))));
}
#endif

#if defined(HAVE_RB_ENC_TO_INDEX) && defined(HAVE_RB_ENC_FIND)
static VALUE encoding_spec_rb_enc_to_index(VALUE self, VALUE name) {
  return INT2NUM(rb_enc_to_index(NIL_P(name) ? NULL : rb_enc_find(RSTRING_PTR(name))));
}
#endif

#ifdef HAVE_RB_TO_ENCODING
static VALUE encoding_spec_rb_to_encoding(VALUE self, VALUE obj) {
  return rb_str_new2(rb_to_encoding(obj)->name);
}
#endif

#ifdef HAVE_RB_TO_ENCODING_INDEX
static VALUE encoding_spec_rb_to_encoding_index(VALUE self, VALUE obj) {
  return INT2NUM(rb_to_encoding_index(obj));
}
#endif

#ifdef HAVE_RB_ENC_NTH
static VALUE encoding_spec_rb_enc_nth(VALUE self, VALUE str, VALUE index) {
  char* start = RSTRING_PTR(str);
  char* end = start + RSTRING_LEN(str);
  char* ptr = rb_enc_nth(start, end, FIX2LONG(index), rb_enc_get(str));
  return LONG2NUM(ptr - start);
}
#endif

#ifdef HAVE_RB_ENC_CODEPOINT_LEN
static VALUE encoding_spec_rb_enc_codepoint_len(VALUE self, VALUE str) {
  char* start = RSTRING_PTR(str);
  char* end = start + RSTRING_LEN(str);

  int len;
  unsigned int codepoint = rb_enc_codepoint_len(start, end, &len, rb_enc_get(str));

  return rb_ary_new3(2, LONG2NUM(codepoint), LONG2NUM(len));
}
#endif

void Init_encoding_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiEncodingSpecs", rb_cObject);

#ifdef HAVE_ENC_CODERANGE_ASCIIONLY
  rb_define_method(cls, "ENC_CODERANGE_ASCIIONLY",
                   encoding_spec_ENC_CODERANGE_ASCIIONLY, 1);
#endif

#ifdef HAVE_RB_USASCII_ENCODING
  rb_define_method(cls, "rb_usascii_encoding", encoding_spec_rb_usascii_encoding, 0);
#endif

#ifdef HAVE_RB_USASCII_ENCINDEX
  rb_define_method(cls, "rb_usascii_encindex", encoding_spec_rb_usascii_encindex, 0);
#endif

#ifdef HAVE_RB_ASCII8BIT_ENCODING
  rb_define_method(cls, "rb_ascii8bit_encoding", encoding_spec_rb_ascii8bit_encoding, 0);
#endif

#ifdef HAVE_RB_ASCII8BIT_ENCINDEX
  rb_define_method(cls, "rb_ascii8bit_encindex", encoding_spec_rb_ascii8bit_encindex, 0);
#endif

#ifdef HAVE_RB_UTF8_ENCODING
  rb_define_method(cls, "rb_utf8_encoding", encoding_spec_rb_utf8_encoding, 0);
#endif

#ifdef HAVE_RB_UTF8_ENCINDEX
  rb_define_method(cls, "rb_utf8_encindex", encoding_spec_rb_utf8_encindex, 0);
#endif

#ifdef HAVE_RB_LOCALE_ENCODING
  rb_define_method(cls, "rb_locale_encoding", encoding_spec_rb_locale_encoding, 0);
#endif

#ifdef HAVE_RB_LOCALE_ENCINDEX
  rb_define_method(cls, "rb_locale_encindex", encoding_spec_rb_locale_encindex, 0);
#endif

#ifdef HAVE_RB_FILESYSTEM_ENCODING
  rb_define_method(cls, "rb_filesystem_encoding", encoding_spec_rb_filesystem_encoding, 0);
#endif

#ifdef HAVE_RB_FILESYSTEM_ENCINDEX
  rb_define_method(cls, "rb_filesystem_encindex", encoding_spec_rb_filesystem_encindex, 0);
#endif

#ifdef HAVE_RB_DEFAULT_INTERNAL_ENCODING
  rb_define_method(cls, "rb_default_internal_encoding",
                   encoding_spec_rb_default_internal_encoding, 0);
#endif

#ifdef HAVE_RB_DEFAULT_EXTERNAL_ENCODING
  rb_define_method(cls, "rb_default_external_encoding",
                   encoding_spec_rb_default_external_encoding, 0);
#endif

#ifdef HAVE_RB_ENCDB_ALIAS
  rb_define_method(cls, "rb_encdb_alias", encoding_spec_rb_encdb_alias, 2);
#endif

#ifdef HAVE_RB_ENC_ASSOCIATE
  rb_define_method(cls, "rb_enc_associate", encoding_spec_rb_enc_associate, 2);
#endif

#ifdef HAVE_RB_ENC_ASSOCIATE_INDEX
  rb_define_method(cls, "rb_enc_associate_index", encoding_spec_rb_enc_associate_index, 2);
#endif

#ifdef HAVE_RB_ENC_COMPATIBLE
  rb_define_method(cls, "rb_enc_compatible", encoding_spec_rb_enc_compatible, 2);
#endif

#ifdef HAVE_RB_ENC_COPY
  rb_define_method(cls, "rb_enc_copy", encoding_spec_rb_enc_copy, 2);
#endif

#ifdef HAVE_RB_ENC_FIND
  rb_define_method(cls, "rb_enc_find", encoding_spec_rb_enc_find, 1);
#endif

#ifdef HAVE_RB_ENC_FIND_INDEX
  rb_define_method(cls, "rb_enc_find_index", encoding_spec_rb_enc_find_index, 1);
#endif

#ifdef HAVE_RB_ENC_FROM_INDEX
  rb_define_method(cls, "rb_enc_from_index", encoding_spec_rb_enc_from_index, 1);
#endif

#ifdef HAVE_RB_ENC_FROM_ENCODING
  rb_define_method(cls, "rb_enc_from_encoding", encoding_spec_rb_enc_from_encoding, 1);
#endif

#ifdef HAVE_RB_ENC_GET
  rb_define_method(cls, "rb_enc_get", encoding_spec_rb_enc_get, 1);
#endif

#ifdef HAVE_RB_OBJ_ENCODING
  rb_define_method(cls, "rb_obj_encoding", encoding_spec_rb_obj_encoding, 1);
#endif

#ifdef HAVE_RB_ENC_GET_INDEX
  rb_define_method(cls, "rb_enc_get_index", encoding_spec_rb_enc_get_index, 1);
#endif

#if defined(HAVE_RB_ENC_SET_INDEX) \
      && defined(HAVE_RB_ENC_FIND_INDEX) \
      && defined(HAVE_RB_ENC_FIND_INDEX)
  rb_define_method(cls, "rb_enc_set_index", encoding_spec_rb_enc_set_index, 2);
#endif

#ifdef HAVE_RB_ENC_STR_CODERANGE
  rb_define_method(cls, "rb_enc_str_coderange", encoding_spec_rb_enc_str_coderange, 1);
#endif

#ifdef HAVE_RB_ENC_STR_NEW
  rb_define_method(cls, "rb_enc_str_new", encoding_spec_rb_enc_str_new, 3);
#endif

#ifdef HAVE_ENCODING_GET
  rb_define_method(cls, "ENCODING_GET", encoding_spec_ENCODING_GET, 1);
#endif

#ifdef HAVE_ENCODING_SET
  rb_define_method(cls, "ENCODING_SET", encoding_spec_ENCODING_SET, 2);
#endif

#if defined(HAVE_RB_ENC_TO_INDEX) && defined(HAVE_RB_ENC_FIND)
  rb_define_method(cls, "rb_enc_to_index", encoding_spec_rb_enc_to_index, 1);
#endif

#ifdef HAVE_RB_TO_ENCODING
  rb_define_method(cls, "rb_to_encoding", encoding_spec_rb_to_encoding, 1);
#endif

#ifdef HAVE_RB_TO_ENCODING_INDEX
  rb_define_method(cls, "rb_to_encoding_index", encoding_spec_rb_to_encoding_index, 1);
#endif

#ifdef HAVE_RB_ENC_NTH
  rb_define_method(cls, "rb_enc_nth", encoding_spec_rb_enc_nth, 2);
#endif

#ifdef HAVE_RB_ENC_CODEPOINT_LEN
  rb_define_method(cls, "rb_enc_codepoint_len", encoding_spec_rb_enc_codepoint_len, 1);
#endif
}

#ifdef __cplusplus
}
#endif
