require File.expand_path('../spec_helper', __FILE__)

load_extension("constants")

describe "C-API constant" do
  before :each do
    @s = CApiConstantsSpecs.new
  end

  specify "rb_cArray references the Array class" do
    @s.rb_cArray.should == Array
  end

  ruby_version_is ""..."2.4" do
    specify "rb_cBignum references the Bignum class" do
      @s.rb_cBignum.should == Bignum
    end
  end

  specify "rb_cClass references the Class class" do
    @s.rb_cClass.should == Class
  end

  specify "rb_mComparable references the Comparable module" do
    @s.rb_mComparable.should == Comparable
  end

  specify "rb_cData references the Data class" do
    @s.rb_cData.should == Data
  end

  specify "rb_mEnumerable references the Enumerable module" do
    @s.rb_mEnumerable.should == Enumerable
  end

  specify "rb_cFalseClass references the FalseClass class" do
    @s.rb_cFalseClass.should == FalseClass
  end

  specify "rb_cFile references the File class" do
    @s.rb_cFile.should == File
  end

  ruby_version_is ""..."2.4" do
    specify "rb_cFixnum references the Fixnum class" do
      @s.rb_cFixnum.should == Fixnum
    end
  end

  specify "rb_cFloat references the Float class" do
    @s.rb_cFloat.should == Float
  end

  specify "rb_cHash references the Hash class" do
    @s.rb_cHash.should == Hash
  end

  specify "rb_cInteger references the Integer class" do
    @s.rb_cInteger.should == Integer
  end

  specify "rb_cIO references the IO class" do
    @s.rb_cIO.should == IO
  end

  specify "rb_mKernel references the Kernel module" do
    @s.rb_mKernel.should == Kernel
  end

  specify "rb_cMatch references the MatchData class" do
    @s.rb_cMatch.should == MatchData
  end

  specify "rb_cModule references the Module class" do
    @s.rb_cModule.should == Module
  end

  specify "rb_cNilClass references the NilClass class" do
    @s.rb_cNilClass.should == NilClass
  end

  specify "rb_cNumeric references the Numeric class" do
    @s.rb_cNumeric.should == Numeric
  end

  specify "rb_cObject references the Object class" do
    @s.rb_cObject.should == Object
  end

  specify "rb_cRange references the Range class" do
    @s.rb_cRange.should == Range
  end

  specify "rb_cRegexp references the Regexp class" do
    @s.rb_cRegexp.should == Regexp
  end

  specify "rb_cString references the String class" do
    @s.rb_cString.should == String
  end

  specify "rb_cStruct references the Struct class" do
    @s.rb_cStruct.should == Struct
  end

  specify "rb_cSymbol references the Symbol class" do
    @s.rb_cSymbol.should == Symbol
  end

  specify "rb_cTime references the Time class" do
    @s.rb_cTime.should == Time
  end

  specify "rb_cThread references the Thread class" do
    @s.rb_cThread.should == Thread
  end

  specify "rb_cTrueClass references the TrueClass class" do
    @s.rb_cTrueClass.should == TrueClass
  end

  specify "rb_cProc references the Proc class" do
    @s.rb_cProc.should == Proc
  end

  specify "rb_cMethod references the Method class" do
    @s.rb_cMethod.should == Method
  end

  specify "rb_cDir references the Dir class" do
    @s.rb_cDir.should == Dir
  end

end

describe "C-API exception constant" do
  before :each do
    @s = CApiConstantsSpecs.new
  end

  specify "rb_eArgError references the ArgumentError class" do
    @s.rb_eArgError.should == ArgumentError
  end

  specify "rb_eEOFError references the EOFError class" do
    @s.rb_eEOFError.should == EOFError
  end

  specify "rb_eErrno references the Errno module" do
    @s.rb_mErrno.should == Errno
  end

  specify "rb_eException references the Exception class" do
    @s.rb_eException.should == Exception
  end

  specify "rb_eFloatDomainError references the FloatDomainError class" do
    @s.rb_eFloatDomainError.should == FloatDomainError
  end

  specify "rb_eIndexError references the IndexError class" do
    @s.rb_eIndexError.should == IndexError
  end

  specify "rb_eInterrupt references the Interrupt class" do
    @s.rb_eInterrupt.should == Interrupt
  end

  specify "rb_eIOError references the IOError class" do
    @s.rb_eIOError.should == IOError
  end

  specify "rb_eLoadError references the LoadError class" do
    @s.rb_eLoadError.should == LoadError
  end

  specify "rb_eLocalJumpError references the LocalJumpError class" do
    @s.rb_eLocalJumpError.should == LocalJumpError
  end

  specify "rb_eMathDomainError references the Math::DomainError class" do
    @s.rb_eMathDomainError.should == Math::DomainError
  end

  specify "rb_eEncCompatError references the Encoding::CompatibilityError" do
    @s.rb_eEncCompatError.should == Encoding::CompatibilityError
  end

  specify "rb_eNameError references the NameError class" do
    @s.rb_eNameError.should == NameError
  end

  specify "rb_eNoMemError references the NoMemoryError class" do
    @s.rb_eNoMemError.should == NoMemoryError
  end

  specify "rb_eNoMethodError references the NoMethodError class" do
    @s.rb_eNoMethodError.should == NoMethodError
  end

  specify "rb_eNotImpError references the NotImplementedError class" do
    @s.rb_eNotImpError.should == NotImplementedError
  end

  specify "rb_eRangeError references the RangeError class" do
    @s.rb_eRangeError.should == RangeError
  end

  specify "rb_eRegexpError references the RegexpError class" do
    @s.rb_eRegexpError.should == RegexpError
  end

  specify "rb_eRuntimeError references the RuntimeError class" do
    @s.rb_eRuntimeError.should == RuntimeError
  end

  specify "rb_eScriptError references the ScriptError class" do
    @s.rb_eScriptError.should == ScriptError
  end

  specify "rb_eSecurityError references the SecurityError class" do
    @s.rb_eSecurityError.should == SecurityError
  end

  specify "rb_eSignal references the SignalException class" do
    @s.rb_eSignal.should == SignalException
  end

  specify "rb_eStandardError references the StandardError class" do
    @s.rb_eStandardError.should == StandardError
  end

  specify "rb_eSyntaxError references the SyntaxError class" do
    @s.rb_eSyntaxError.should == SyntaxError
  end

  specify "rb_eSystemCallError references the SystemCallError class" do
    @s.rb_eSystemCallError.should == SystemCallError
  end

  specify "rb_eSystemExit references the SystemExit class" do
    @s.rb_eSystemExit.should == SystemExit
  end

  specify "rb_eSysStackError references the SystemStackError class" do
    @s.rb_eSysStackError.should == SystemStackError
  end

  specify "rb_eTypeError references the TypeError class" do
    @s.rb_eTypeError.should == TypeError
  end

  specify "rb_eThreadError references the ThreadError class" do
    @s.rb_eThreadError.should == ThreadError
  end

  specify "rb_mWaitReadable references the IO::WaitReadable module" do
    @s.rb_mWaitReadable.should == IO::WaitReadable
  end

  specify "rb_mWaitWritable references the IO::WaitWritable module" do
    @s.rb_mWaitWritable.should == IO::WaitWritable
  end

  specify "rb_eZeroDivError references the ZeroDivisionError class" do
    @s.rb_eZeroDivError.should == ZeroDivisionError
  end
end
