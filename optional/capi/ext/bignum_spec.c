#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_BIG2DBL
static VALUE bignum_spec_rb_big2dbl(VALUE self, VALUE num) {
  return rb_float_new(rb_big2dbl(num));
}
#endif

#ifdef HAVE_RB_DBL2BIG
static VALUE bignum_spec_rb_dbl2big(VALUE self, VALUE num) {
  double dnum = NUM2DBL(num);

  return rb_dbl2big(dnum);
}
#endif

#ifdef HAVE_RB_BIG2LL
static VALUE bignum_spec_rb_big2ll(VALUE self, VALUE num) {
  return rb_ll2inum(rb_big2ll(num));
}
#endif

#ifdef HAVE_RB_BIG2LONG
static VALUE bignum_spec_rb_big2long(VALUE self, VALUE num) {
  return LONG2NUM(rb_big2long(num));
}
#endif

#ifdef HAVE_RB_BIG2STR
static VALUE bignum_spec_rb_big2str(VALUE self, VALUE num, VALUE base) {
  return rb_big2str(num, FIX2INT(base));
}
#endif

#ifdef HAVE_RB_BIG2ULONG
static VALUE bignum_spec_rb_big2ulong(VALUE self, VALUE num) {
  return ULONG2NUM(rb_big2ulong(num));
}
#endif

#ifdef HAVE_RB_BIG_CMP
static VALUE bignum_spec_rb_big_cmp(VALUE self, VALUE x, VALUE y) {
  return rb_big_cmp(x, y);
}
#endif

#ifdef HAVE_RB_BIG_PACK
static VALUE bignum_spec_rb_big_pack(VALUE self, VALUE val) {
  unsigned long buff;

  rb_big_pack(val, &buff, 1);

  return ULONG2NUM(buff);
}
#endif

#if HAVE_ABSINT_SIZE
static VALUE bignum_spec_rb_big_pack_length(VALUE self, VALUE val) {
  long long_len;
  int leading_bits = 0;
  int divisor = SIZEOF_LONG;
  size_t len = rb_absint_size(val, &leading_bits);
  if (leading_bits == 0) {
    len += 1;
  }

  long_len = len / divisor + ((len % divisor == 0) ? 0 : 1);
  return LONG2NUM(long_len);
}
#endif

#ifdef HAVE_RB_BIG_PACK
static VALUE bignum_spec_rb_big_pack_array(VALUE self, VALUE val, VALUE len) {
  int i;
  long long_len = NUM2LONG(len);

  VALUE ary = rb_ary_new_capa(long_len);
  unsigned long *buf = malloc(long_len * SIZEOF_LONG);

  /* The array should be filled with recognisable junk so we can check
     it is all cleared properly. */

  for (i = 0; i < long_len; i++) {
#if SIZEOF_LONG == 8
    buf[i] = 0xfedcba9876543210L;
#else
    buf[i] = 0xfedcba98L;
#endif
  }

  rb_big_pack(val, buf, long_len);
  for (i = 0; i < long_len; i++) {
    rb_ary_store(ary, i, ULONG2NUM(buf[i]));
  }
  free(buf);
  return ary;
}
#endif

void Init_bignum_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiBignumSpecs", rb_cObject);

#ifdef HAVE_RB_BIG2DBL
  rb_define_method(cls, "rb_big2dbl", bignum_spec_rb_big2dbl, 1);
#endif

#ifdef HAVE_RB_DBL2BIG
  rb_define_method(cls, "rb_dbl2big", bignum_spec_rb_dbl2big, 1);
#endif

#ifdef HAVE_RB_BIG2LL
  rb_define_method(cls, "rb_big2ll", bignum_spec_rb_big2ll, 1);
#endif

#ifdef HAVE_RB_BIG2LONG
  rb_define_method(cls, "rb_big2long", bignum_spec_rb_big2long, 1);
#endif

#ifdef HAVE_RB_BIG2STR
  rb_define_method(cls, "rb_big2str", bignum_spec_rb_big2str, 2);
#endif

#ifdef HAVE_RB_BIG2ULONG
  rb_define_method(cls, "rb_big2ulong", bignum_spec_rb_big2ulong, 1);
#endif

#ifdef HAVE_RB_BIG_CMP
  rb_define_method(cls, "rb_big_cmp", bignum_spec_rb_big_cmp, 2);
#endif

#ifdef HAVE_RB_BIG_PACK
  rb_define_method(cls, "rb_big_pack", bignum_spec_rb_big_pack, 1);
  rb_define_method(cls, "rb_big_pack_array", bignum_spec_rb_big_pack_array, 2);
#endif

#ifdef HAVE_ABSINT_SIZE
  rb_define_method(cls, "rb_big_pack_length", bignum_spec_rb_big_pack_length, 1);
#endif
}

#ifdef __cplusplus
extern "C" {
#endif
