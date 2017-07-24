#include "ruby.h"
#include "rubyspec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RB_CARRAY
static VALUE constants_spec_rb_cArray(VALUE self) {
  return rb_cArray;
}
#endif

#ifdef HAVE_RB_CBIGNUM
static VALUE constants_spec_rb_cBignum(VALUE self) {
  return rb_cBignum;
}
#endif

#ifdef HAVE_RB_CCLASS
static VALUE constants_spec_rb_cClass(VALUE self) {
  return rb_cClass;
}
#endif

#ifdef HAVE_RB_CDATA
static VALUE constants_spec_rb_cData(VALUE self) {
  return rb_cData;
}
#endif

#ifdef HAVE_RB_CFALSECLASS
static VALUE constants_spec_rb_cFalseClass(VALUE self) {
  return rb_cFalseClass;
}
#endif

#ifdef HAVE_RB_CFILE
static VALUE constants_spec_rb_cFile(VALUE self) {
  return rb_cFile;
}
#endif

#ifdef HAVE_RB_CFIXNUM
static VALUE constants_spec_rb_cFixnum(VALUE self) {
  return rb_cFixnum;
}
#endif

#ifdef HAVE_RB_CFLOAT
static VALUE constants_spec_rb_cFloat(VALUE self) {
  return rb_cFloat;
}
#endif

#ifdef HAVE_RB_CHASH
static VALUE constants_spec_rb_cHash(VALUE self) {
  return rb_cHash;
}
#endif

#ifdef HAVE_RB_CINTEGER
static VALUE constants_spec_rb_cInteger(VALUE self) {
  return rb_cInteger;
}
#endif

#ifdef HAVE_RB_CIO
static VALUE constants_spec_rb_cIO(VALUE self) {
  return rb_cIO;
}
#endif

#ifdef HAVE_RB_CMODULE
static VALUE constants_spec_rb_cModule(VALUE self) {
  return rb_cModule;
}
#endif

#ifdef HAVE_RB_CMATCH
static VALUE constants_spec_rb_cMatch(VALUE self) {
  return rb_cMatch;
}
#endif

#ifdef HAVE_RB_CNILCLASS
static VALUE constants_spec_rb_cNilClass(VALUE self) {
  return rb_cNilClass;
}
#endif

#ifdef HAVE_RB_CNUMERIC
static VALUE constants_spec_rb_cNumeric(VALUE self) {
  return rb_cNumeric;
}
#endif

#ifdef HAVE_RB_COBJECT
static VALUE constants_spec_rb_cObject(VALUE self) {
  return rb_cObject;
}
#endif

#ifdef HAVE_RB_CRANGE
static VALUE constants_spec_rb_cRange(VALUE self) {
  return rb_cRange;
}
#endif

#ifdef HAVE_RB_CREGEXP
static VALUE constants_spec_rb_cRegexp(VALUE self) {
  return rb_cRegexp;
}
#endif

#ifdef HAVE_RB_CSTRING
static VALUE constants_spec_rb_cString(VALUE self) {
  return rb_cString;
}
#endif

#ifdef HAVE_RB_CSTRUCT
static VALUE constants_spec_rb_cStruct(VALUE self) {
  return rb_cStruct;
}
#endif

#ifdef HAVE_RB_CSYMBOL
static VALUE constants_spec_rb_cSymbol(VALUE self) {
  return rb_cSymbol;
}
#endif

#ifdef HAVE_RB_CTIME
static VALUE constants_spec_rb_cTime(VALUE self) {
  return rb_cTime;
}
#endif

#ifdef HAVE_RB_CTHREAD
static VALUE constants_spec_rb_cThread(VALUE self) {
  return rb_cThread;
}
#endif

#ifdef HAVE_RB_CTRUECLASS
static VALUE constants_spec_rb_cTrueClass(VALUE self) {
  return rb_cTrueClass;
}
#endif

#ifdef HAVE_RB_CPROC
static VALUE constants_spec_rb_cProc(VALUE self) {
  return rb_cProc;
}
#endif

#ifdef HAVE_RB_CMETHOD
static VALUE constants_spec_rb_cMethod(VALUE self) {
  return rb_cMethod;
}
#endif

#ifdef HAVE_RB_CENUMERATOR
static VALUE constants_spec_rb_cEnumerator(VALUE self) {
  return rb_cEnumerator;
}
#endif

#ifdef HAVE_RB_MCOMPARABLE
static VALUE constants_spec_rb_mComparable(VALUE self) {
  return rb_mComparable;
}
#endif

#ifdef HAVE_RB_MENUMERABLE
static VALUE constants_spec_rb_mEnumerable(VALUE self) {
  return rb_mEnumerable;
}
#endif

#ifdef HAVE_RB_MKERNEL
static VALUE constants_spec_rb_mKernel(VALUE self) {
  return rb_mKernel;
}
#endif

#ifdef HAVE_RB_EARGERROR
static VALUE constants_spec_rb_eArgError(VALUE self) {
  return rb_eArgError;
}
#endif

#ifdef HAVE_RB_EEOFERROR
static VALUE constants_spec_rb_eEOFError(VALUE self) {
  return rb_eEOFError;
}
#endif

#ifdef HAVE_RB_MERRNO
static VALUE constants_spec_rb_mErrno(VALUE self) {
  return rb_mErrno;
}
#endif

#ifdef HAVE_RB_EEXCEPTION
static VALUE constants_spec_rb_eException(VALUE self) {
  return rb_eException;
}
#endif

#ifdef HAVE_RB_EFLOATDOMAINERROR
static VALUE constants_spec_rb_eFloatDomainError(VALUE self) {
  return rb_eFloatDomainError;
}
#endif

#ifdef HAVE_RB_EINDEXERROR
static VALUE constants_spec_rb_eIndexError(VALUE self) {
  return rb_eIndexError;
}
#endif

#ifdef HAVE_RB_EINTERRUPT
static VALUE constants_spec_rb_eInterrupt(VALUE self) {
  return rb_eInterrupt;
}
#endif

#ifdef HAVE_RB_EIOERROR
static VALUE constants_spec_rb_eIOError(VALUE self) {
  return rb_eIOError;
}
#endif

#ifdef HAVE_RB_ELOADERROR
static VALUE constants_spec_rb_eLoadError(VALUE self) {
  return rb_eLoadError;
}
#endif

#ifdef HAVE_RB_ELOCALJUMPERROR
static VALUE constants_spec_rb_eLocalJumpError(VALUE self) {
  return rb_eLocalJumpError;
}
#endif

#ifdef HAVE_RB_ENAMEERROR
static VALUE constants_spec_rb_eNameError(VALUE self) {
  return rb_eNameError;
}
#endif

#ifdef HAVE_RB_ENOMEMERROR
static VALUE constants_spec_rb_eNoMemError(VALUE self) {
  return rb_eNoMemError;
}
#endif

#ifdef HAVE_RB_ENOMETHODERROR
static VALUE constants_spec_rb_eNoMethodError(VALUE self) {
  return rb_eNoMethodError;
}
#endif

#ifdef HAVE_RB_ENOTIMPERROR
static VALUE constants_spec_rb_eNotImpError(VALUE self) {
  return rb_eNotImpError;
}
#endif

#ifdef HAVE_RB_ERANGEERROR
static VALUE constants_spec_rb_eRangeError(VALUE self) {
  return rb_eRangeError;
}
#endif

#ifdef HAVE_RB_EREGEXPERROR
static VALUE constants_spec_rb_eRegexpError(VALUE self) {
  return rb_eRegexpError;
}
#endif

#ifdef HAVE_RB_ERUNTIMEERROR
static VALUE constants_spec_rb_eRuntimeError(VALUE self) {
  return rb_eRuntimeError;
}
#endif

#ifdef HAVE_RB_ESCRIPTERROR
static VALUE constants_spec_rb_eScriptError(VALUE self) {
  return rb_eScriptError;
}
#endif

#ifdef HAVE_RB_ESECURITYERROR
static VALUE constants_spec_rb_eSecurityError(VALUE self) {
  return rb_eSecurityError;
}
#endif

#ifdef HAVE_RB_ESIGNAL
static VALUE constants_spec_rb_eSignal(VALUE self) {
  return rb_eSignal;
}
#endif

#ifdef HAVE_RB_ESTANDARDERROR
static VALUE constants_spec_rb_eStandardError(VALUE self) {
  return rb_eStandardError;
}
#endif

#ifdef HAVE_RB_ESYNTAXERROR
static VALUE constants_spec_rb_eSyntaxError(VALUE self) {
  return rb_eSyntaxError;
}
#endif

#ifdef HAVE_RB_ESYSTEMCALLERROR
static VALUE constants_spec_rb_eSystemCallError(VALUE self) {
  return rb_eSystemCallError;
}
#endif

#ifdef HAVE_RB_ESYSTEMEXIT
static VALUE constants_spec_rb_eSystemExit(VALUE self) {
  return rb_eSystemExit;
}
#endif

#ifdef HAVE_RB_ESYSSTACKERROR
static VALUE constants_spec_rb_eSysStackError(VALUE self) {
  return rb_eSysStackError;
}
#endif

#ifdef HAVE_RB_ETYPEERROR
static VALUE constants_spec_rb_eTypeError(VALUE self) {
  return rb_eTypeError;
}
#endif

#ifdef HAVE_RB_ETHREADERROR
static VALUE constants_spec_rb_eThreadError(VALUE self) {
  return rb_eThreadError;
}
#endif

#ifdef HAVE_RB_EZERODIVERROR
static VALUE constants_spec_rb_eZeroDivError(VALUE self) {
  return rb_eZeroDivError;
}
#endif

#ifdef HAVE_RB_EMATHDOMAINERROR
static VALUE constants_spec_rb_eMathDomainError(VALUE self) {
  return rb_eMathDomainError;
}
#endif

#ifdef HAVE_RB_EENCCOMPATERROR
static VALUE constants_spec_rb_eEncCompatError(VALUE self) {
  return rb_eEncCompatError;
}
#endif

#ifdef HAVE_RB_MWAITREADABLE
static VALUE constants_spec_rb_mWaitReadable(VALUE self) {
  return rb_mWaitReadable;
}
#endif

#ifdef HAVE_RB_MWAITWRITABLE
static VALUE constants_spec_rb_mWaitWritable(VALUE self) {
  return rb_mWaitWritable;
}
#endif

#ifdef HAVE_RB_CDIR
static VALUE constants_spec_rb_cDir(VALUE self) {
  return rb_cDir;
}
#endif

void Init_constants_spec(void) {
  VALUE cls;
  cls = rb_define_class("CApiConstantsSpecs", rb_cObject);

#ifdef HAVE_RB_CARRAY
  rb_define_method(cls, "rb_cArray", constants_spec_rb_cArray, 0);
#endif

#ifdef HAVE_RB_CBIGNUM
  rb_define_method(cls, "rb_cBignum", constants_spec_rb_cBignum, 0);
#endif

#ifdef HAVE_RB_CCLASS
  rb_define_method(cls, "rb_cClass", constants_spec_rb_cClass, 0);
#endif

#ifdef HAVE_RB_CDATA
  rb_define_method(cls, "rb_cData", constants_spec_rb_cData, 0);
#endif

#ifdef HAVE_RB_CFALSECLASS
  rb_define_method(cls, "rb_cFalseClass", constants_spec_rb_cFalseClass, 0);
#endif

#ifdef HAVE_RB_CFILE
  rb_define_method(cls, "rb_cFile", constants_spec_rb_cFile, 0);
#endif

#ifdef HAVE_RB_CFIXNUM
  rb_define_method(cls, "rb_cFixnum", constants_spec_rb_cFixnum, 0);
#endif

#ifdef HAVE_RB_CFLOAT
  rb_define_method(cls, "rb_cFloat", constants_spec_rb_cFloat, 0);
#endif

#ifdef HAVE_RB_CHASH
  rb_define_method(cls, "rb_cHash", constants_spec_rb_cHash, 0);
#endif

#ifdef HAVE_RB_CINTEGER
  rb_define_method(cls, "rb_cInteger", constants_spec_rb_cInteger, 0);
#endif

#ifdef HAVE_RB_CIO
  rb_define_method(cls, "rb_cIO", constants_spec_rb_cIO, 0);
#endif

#ifdef HAVE_RB_CMATCH
  rb_define_method(cls, "rb_cMatch", constants_spec_rb_cMatch, 0);
#endif

#ifdef HAVE_RB_CMODULE
  rb_define_method(cls, "rb_cModule", constants_spec_rb_cModule, 0);
#endif

#ifdef HAVE_RB_CNILCLASS
  rb_define_method(cls, "rb_cNilClass", constants_spec_rb_cNilClass, 0);
#endif

#ifdef HAVE_RB_CNUMERIC
  rb_define_method(cls, "rb_cNumeric", constants_spec_rb_cNumeric, 0);
#endif

#ifdef HAVE_RB_COBJECT
  rb_define_method(cls, "rb_cObject", constants_spec_rb_cObject, 0);
#endif

#ifdef HAVE_RB_CRANGE
  rb_define_method(cls, "rb_cRange", constants_spec_rb_cRange, 0);
#endif

#ifdef HAVE_RB_CREGEXP
  rb_define_method(cls, "rb_cRegexp", constants_spec_rb_cRegexp, 0);
#endif

#ifdef HAVE_RB_CSTRING
  rb_define_method(cls, "rb_cString", constants_spec_rb_cString, 0);
#endif

#ifdef HAVE_RB_CSTRUCT
  rb_define_method(cls, "rb_cStruct", constants_spec_rb_cStruct, 0);
#endif

#ifdef HAVE_RB_CSYMBOL
  rb_define_method(cls, "rb_cSymbol", constants_spec_rb_cSymbol, 0);
#endif

#ifdef HAVE_RB_CTIME
  rb_define_method(cls, "rb_cTime", constants_spec_rb_cTime, 0);
#endif

#ifdef HAVE_RB_CTHREAD
  rb_define_method(cls, "rb_cThread", constants_spec_rb_cThread, 0);
#endif

#ifdef HAVE_RB_CTRUECLASS
  rb_define_method(cls, "rb_cTrueClass", constants_spec_rb_cTrueClass, 0);
#endif

#ifdef HAVE_RB_CPROC
  rb_define_method(cls, "rb_cProc", constants_spec_rb_cProc, 0);
#endif

#ifdef HAVE_RB_CMETHOD
  rb_define_method(cls, "rb_cMethod", constants_spec_rb_cMethod, 0);
#endif

#ifdef HAVE_RB_CENUMERATOR
  rb_define_method(cls, "rb_cEnumerator", constants_spec_rb_cEnumerator, 0);
#endif

#ifdef HAVE_RB_MCOMPARABLE
  rb_define_method(cls, "rb_mComparable", constants_spec_rb_mComparable, 0);
#endif

#ifdef HAVE_RB_MENUMERABLE
  rb_define_method(cls, "rb_mEnumerable", constants_spec_rb_mEnumerable, 0);
#endif

#ifdef HAVE_RB_MKERNEL
  rb_define_method(cls, "rb_mKernel", constants_spec_rb_mKernel, 0);
#endif

#ifdef HAVE_RB_EARGERROR
  rb_define_method(cls, "rb_eArgError", constants_spec_rb_eArgError, 0);
#endif

#ifdef HAVE_RB_EEOFERROR
  rb_define_method(cls, "rb_eEOFError", constants_spec_rb_eEOFError, 0);
#endif

#ifdef HAVE_RB_MERRNO
  rb_define_method(cls, "rb_mErrno", constants_spec_rb_mErrno, 0);
#endif

#ifdef HAVE_RB_EEXCEPTION
  rb_define_method(cls, "rb_eException", constants_spec_rb_eException, 0);
#endif

#ifdef HAVE_RB_EFLOATDOMAINERROR
  rb_define_method(cls, "rb_eFloatDomainError", constants_spec_rb_eFloatDomainError, 0);
#endif

#ifdef HAVE_RB_EINDEXERROR
  rb_define_method(cls, "rb_eIndexError", constants_spec_rb_eIndexError, 0);
#endif

#ifdef HAVE_RB_EINTERRUPT
  rb_define_method(cls, "rb_eInterrupt", constants_spec_rb_eInterrupt, 0);
#endif

#ifdef HAVE_RB_EIOERROR
  rb_define_method(cls, "rb_eIOError", constants_spec_rb_eIOError, 0);
#endif

#ifdef HAVE_RB_ELOADERROR
  rb_define_method(cls, "rb_eLoadError", constants_spec_rb_eLoadError, 0);
#endif

#ifdef HAVE_RB_ELOCALJUMPERROR
  rb_define_method(cls, "rb_eLocalJumpError", constants_spec_rb_eLocalJumpError, 0);
#endif

#ifdef HAVE_RB_ENAMEERROR
  rb_define_method(cls, "rb_eNameError", constants_spec_rb_eNameError, 0);
#endif

#ifdef HAVE_RB_ENOMEMERROR
  rb_define_method(cls, "rb_eNoMemError", constants_spec_rb_eNoMemError, 0);
#endif

#ifdef HAVE_RB_ENOMETHODERROR
  rb_define_method(cls, "rb_eNoMethodError", constants_spec_rb_eNoMethodError, 0);
#endif

#ifdef HAVE_RB_ENOTIMPERROR
  rb_define_method(cls, "rb_eNotImpError", constants_spec_rb_eNotImpError, 0);
#endif

#ifdef HAVE_RB_ERANGEERROR
  rb_define_method(cls, "rb_eRangeError", constants_spec_rb_eRangeError, 0);
#endif

#ifdef HAVE_RB_EREGEXPERROR
  rb_define_method(cls, "rb_eRegexpError", constants_spec_rb_eRegexpError, 0);
#endif

#ifdef HAVE_RB_ERUNTIMEERROR
  rb_define_method(cls, "rb_eRuntimeError", constants_spec_rb_eRuntimeError, 0);
#endif

#ifdef HAVE_RB_ESCRIPTERROR
  rb_define_method(cls, "rb_eScriptError", constants_spec_rb_eScriptError, 0);
#endif

#ifdef HAVE_RB_ESECURITYERROR
  rb_define_method(cls, "rb_eSecurityError", constants_spec_rb_eSecurityError, 0);
#endif

#ifdef HAVE_RB_ESIGNAL
  rb_define_method(cls, "rb_eSignal", constants_spec_rb_eSignal, 0);
#endif

#ifdef HAVE_RB_ESTANDARDERROR
  rb_define_method(cls, "rb_eStandardError", constants_spec_rb_eStandardError, 0);
#endif

#ifdef HAVE_RB_ESYNTAXERROR
  rb_define_method(cls, "rb_eSyntaxError", constants_spec_rb_eSyntaxError, 0);
#endif

#ifdef HAVE_RB_ESYSTEMCALLERROR
  rb_define_method(cls, "rb_eSystemCallError", constants_spec_rb_eSystemCallError, 0);
#endif

#ifdef HAVE_RB_ESYSTEMEXIT
  rb_define_method(cls, "rb_eSystemExit", constants_spec_rb_eSystemExit, 0);
#endif

#ifdef HAVE_RB_ESYSSTACKERROR
  rb_define_method(cls, "rb_eSysStackError", constants_spec_rb_eSysStackError, 0);
#endif

#ifdef HAVE_RB_ETYPEERROR
  rb_define_method(cls, "rb_eTypeError", constants_spec_rb_eTypeError, 0);
#endif

#ifdef HAVE_RB_ETHREADERROR
  rb_define_method(cls, "rb_eThreadError", constants_spec_rb_eThreadError, 0);
#endif

#ifdef HAVE_RB_EZERODIVERROR
  rb_define_method(cls, "rb_eZeroDivError", constants_spec_rb_eZeroDivError, 0);
#endif

#ifdef HAVE_RB_EMATHDOMAINERROR
  rb_define_method(cls, "rb_eMathDomainError", constants_spec_rb_eMathDomainError, 0);
#endif

#ifdef HAVE_RB_EENCCOMPATERROR
  rb_define_method(cls, "rb_eEncCompatError", constants_spec_rb_eEncCompatError, 0);
#endif

#ifdef HAVE_RB_MWAITREADABLE
  rb_define_method(cls, "rb_mWaitReadable", constants_spec_rb_mWaitReadable, 0);
#endif

#ifdef HAVE_RB_MWAITWRITABLE
  rb_define_method(cls, "rb_mWaitWritable", constants_spec_rb_mWaitWritable, 0);
#endif

#ifdef HAVE_RB_CDIR
  rb_define_method(cls, "rb_cDir", constants_spec_rb_cDir, 0);
#endif

}

#ifdef __cplusplus
}
#endif
