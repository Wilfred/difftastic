require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe :kernel_integer, shared: true do
  it "returns a Bignum for a Bignum" do
    Integer(2e100).should == 2e100
  end

  it "returns a Fixnum for a Fixnum" do
    Integer(100).should == 100
  end

  it "uncritically return the value of to_int even if it is not an Integer" do
    obj = mock("object")
    obj.should_receive(:to_int).and_return("1")
    obj.should_not_receive(:to_i)
    Integer(obj).should == "1"
  end

  it "raises a TypeError when passed nil" do
    lambda { Integer(nil) }.should raise_error(TypeError)
  end

  it "returns a Fixnum or Bignum object" do
    Integer(2).should be_an_instance_of(Fixnum)
    Integer(9**99).should be_an_instance_of(Bignum)
  end

  it "truncates Floats" do
    Integer(3.14).should == 3
    Integer(90.8).should == 90
  end

  it "calls to_i on Rationals" do
    Integer(Rational(8,3)).should == 2
    Integer(3.quo(2)).should == 1
  end

  it "returns the value of to_int if the result is a Fixnum" do
    obj = mock("object")
    obj.should_receive(:to_int).and_return(1)
    obj.should_not_receive(:to_i)
    Integer(obj).should == 1
  end

  it "returns the value of to_int if the result is a Bignum" do
    obj = mock("object")
    obj.should_receive(:to_int).and_return(2e100)
    obj.should_not_receive(:to_i)
    Integer(obj).should == 2e100
  end

  it "calls to_i on an object whose to_int returns nil" do
    obj = mock("object")
    obj.should_receive(:to_int).and_return(nil)
    obj.should_receive(:to_i).and_return(1)
    Integer(obj).should == 1
  end

  it "raises a TypeError if to_i returns a value that is not an Integer" do
    obj = mock("object")
    obj.should_receive(:to_i).and_return("1")
    lambda { Integer(obj) }.should raise_error(TypeError)
  end

  it "raises a TypeError if no to_int or to_i methods exist" do
    obj = mock("object")
    lambda { Integer(obj) }.should raise_error(TypeError)
  end

  it "raises a TypeError if to_int returns nil and no to_i exists" do
    obj = mock("object")
    obj.should_receive(:to_i).and_return(nil)
    lambda { Integer(obj) }.should raise_error(TypeError)
  end

  it "raises a FloatDomainError when passed NaN" do
    lambda { Integer(nan_value) }.should raise_error(FloatDomainError)
  end

  it "raises a FloatDomainError when passed Infinity" do
    lambda { Integer(infinity_value) }.should raise_error(FloatDomainError)
  end
end

describe "Integer() given a String", shared: true do
  it "raises an ArgumentError if the String is a null byte" do
    lambda { Integer("\0") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if the String starts with a null byte" do
    lambda { Integer("\01") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if the String ends with a null byte" do
    lambda { Integer("1\0") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if the String contains a null byte" do
    lambda { Integer("1\01") }.should raise_error(ArgumentError)
  end

  it "ignores leading whitespace" do
    Integer(" 1").should == 1
    Integer("   1").should == 1
    Integer("\t\n1").should == 1
  end

  it "ignores trailing whitespace" do
    Integer("1 ").should == 1
    Integer("1   ").should == 1
    Integer("1\t\n").should == 1
  end

  it "raises an ArgumentError if there are leading _s" do
    lambda { Integer("_1") }.should raise_error(ArgumentError)
    lambda { Integer("___1") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are trailing _s" do
    lambda { Integer("1_") }.should raise_error(ArgumentError)
    lambda { Integer("1___") }.should raise_error(ArgumentError)
  end

  it "ignores an embedded _" do
    Integer("1_1").should == 11
  end

  it "raises an ArgumentError if there are multiple embedded _s" do
    lambda { Integer("1__1") }.should raise_error(ArgumentError)
    lambda { Integer("1___1") }.should raise_error(ArgumentError)
  end

  it "ignores a single leading +" do
    Integer("+1").should == 1
  end

  it "raises an ArgumentError if there is a space between the + and number" do
    lambda { Integer("+ 1") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are multiple leading +s" do
    lambda { Integer("++1") }.should raise_error(ArgumentError)
    lambda { Integer("+++1") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are trailing +s" do
    lambda { Integer("1+") }.should raise_error(ArgumentError)
    lambda { Integer("1+++") }.should raise_error(ArgumentError)
  end

  it "makes the number negative if there's a leading -" do
    Integer("-1").should == -1
  end

  it "raises an ArgumentError if there are multiple leading -s" do
    lambda { Integer("--1") }.should raise_error(ArgumentError)
    lambda { Integer("---1") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are trailing -s" do
    lambda { Integer("1-") }.should raise_error(ArgumentError)
    lambda { Integer("1---") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there is a period" do
    lambda { Integer("0.0") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for an empty String" do
    lambda { Integer("") }.should raise_error(ArgumentError)
  end

  it "parses the value as 0 if the string consists of a single zero character" do
    Integer("0").should == 0
  end

  %w(x X).each do |x|
    it "parses the value as a hex number if there's a leading 0#{x}" do
      Integer("0#{x}1").should == 0x1
      Integer("0#{x}dd").should == 0xdd
    end

    it "is a positive hex number if there's a leading +0#{x}" do
      Integer("+0#{x}1").should == 0x1
      Integer("+0#{x}dd").should == 0xdd
    end

    it "is a negative hex number if there's a leading -0#{x}" do
      Integer("-0#{x}1").should == -0x1
      Integer("-0#{x}dd").should == -0xdd
    end

    it "raises an ArgumentError if the number cannot be parsed as hex" do
      lambda { Integer("0#{x}g") }.should raise_error(ArgumentError)
    end
  end

  %w(b B).each do |b|
    it "parses the value as a binary number if there's a leading 0#{b}" do
      Integer("0#{b}1").should == 0b1
      Integer("0#{b}10").should == 0b10
    end

    it "is a positive binary number if there's a leading +0#{b}" do
      Integer("+0#{b}1").should == 0b1
      Integer("+0#{b}10").should == 0b10
    end

    it "is a negative binary number if there's a leading -0#{b}" do
      Integer("-0#{b}1").should == -0b1
      Integer("-0#{b}10").should == -0b10
    end

    it "raises an ArgumentError if the number cannot be parsed as binary" do
      lambda { Integer("0#{b}2") }.should raise_error(ArgumentError)
    end
  end

  ["o", "O", ""].each do |o|
    it "parses the value as an octal number if there's a leading 0#{o}" do
      Integer("0#{o}1").should == 0O1
      Integer("0#{o}10").should == 0O10
    end

    it "is a positive octal number if there's a leading +0#{o}" do
      Integer("+0#{o}1").should == 0O1
      Integer("+0#{o}10").should == 0O10
    end

    it "is a negative octal number if there's a leading -0#{o}" do
      Integer("-0#{o}1").should == -0O1
      Integer("-0#{o}10").should == -0O10
    end

    it "raises an ArgumentError if the number cannot be parsed as octal" do
      lambda { Integer("0#{o}9") }.should raise_error(ArgumentError)
    end
  end

  %w(D d).each do |d|
    it "parses the value as a decimal number if there's a leading 0#{d}" do
      Integer("0#{d}1").should == 1
      Integer("0#{d}10").should == 10
    end

    it "is a positive decimal number if there's a leading +0#{d}" do
      Integer("+0#{d}1").should == 1
      Integer("+0#{d}10").should == 10
    end

    it "is a negative decimal number if there's a leading -0#{d}" do
      Integer("-0#{d}1").should == -1
      Integer("-0#{d}10").should == -10
    end

    it "raises an ArgumentError if the number cannot be parsed as decimal" do
      lambda { Integer("0#{d}a") }.should raise_error(ArgumentError)
    end
  end
end

describe "Integer() given a String and base", shared: true do
  it "raises an ArgumentError if the String is a null byte" do
    lambda { Integer("\0", 2) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if the String starts with a null byte" do
    lambda { Integer("\01", 3) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if the String ends with a null byte" do
    lambda { Integer("1\0", 4) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if the String contains a null byte" do
    lambda { Integer("1\01", 5) }.should raise_error(ArgumentError)
  end

  it "ignores leading whitespace" do
    Integer(" 16", 16).should == 22
    Integer("   16", 16).should == 22
    Integer("\t\n16", 16).should == 22
  end

  it "ignores trailing whitespace" do
    Integer("16 ", 16).should == 22
    Integer("16   ", 16).should == 22
    Integer("16\t\n", 16).should == 22
  end

  it "raises an ArgumentError if there are leading _s" do
    lambda { Integer("_1", 7) }.should raise_error(ArgumentError)
    lambda { Integer("___1", 7) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are trailing _s" do
    lambda { Integer("1_", 12) }.should raise_error(ArgumentError)
    lambda { Integer("1___", 12) }.should raise_error(ArgumentError)
  end

  it "ignores an embedded _" do
    Integer("1_1", 4).should == 5
  end

  it "raises an ArgumentError if there are multiple embedded _s" do
    lambda { Integer("1__1", 4) }.should raise_error(ArgumentError)
    lambda { Integer("1___1", 4) }.should raise_error(ArgumentError)
  end

  it "ignores a single leading +" do
    Integer("+10", 3).should == 3
  end

  it "raises an ArgumentError if there is a space between the + and number" do
    lambda { Integer("+ 1", 3) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are multiple leading +s" do
    lambda { Integer("++1", 3) }.should raise_error(ArgumentError)
    lambda { Integer("+++1", 3) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are trailing +s" do
    lambda { Integer("1+", 3) }.should raise_error(ArgumentError)
    lambda { Integer("1+++", 12) }.should raise_error(ArgumentError)
  end

  it "makes the number negative if there's a leading -" do
    Integer("-19", 20).should == -29
  end

  it "raises an ArgumentError if there are multiple leading -s" do
    lambda { Integer("--1", 9) }.should raise_error(ArgumentError)
    lambda { Integer("---1", 9) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are trailing -s" do
    lambda { Integer("1-", 12) }.should raise_error(ArgumentError)
    lambda { Integer("1---", 12) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there is a period" do
    lambda { Integer("0.0", 3) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for an empty String" do
    lambda { Integer("", 12) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a base of 1" do
    lambda { Integer("1", 1) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a base of 37" do
    lambda { Integer("1", 37) }.should raise_error(ArgumentError)
  end

  it "accepts wholly lowercase alphabetic strings for bases > 10" do
    Integer('ab',12).should == 131
    Integer('af',20).should == 215
    Integer('ghj',30).should == 14929
  end

  it "accepts wholly uppercase alphabetic strings for bases > 10" do
    Integer('AB',12).should == 131
    Integer('AF',20).should == 215
    Integer('GHJ',30).should == 14929
  end

  it "accepts mixed-case alphabetic strings for bases > 10" do
    Integer('Ab',12).should == 131
    Integer('aF',20).should == 215
    Integer('GhJ',30).should == 14929
  end

  it "accepts alphanumeric strings for bases > 10" do
    Integer('a3e',19).should == 3681
    Integer('12q',31).should == 1049
    Integer('c00o',29).should == 292692
  end

  it "raises an ArgumentError for letters invalid in the given base" do
    lambda { Integer('z',19) }.should raise_error(ArgumentError)
    lambda { Integer('c00o',2) }.should raise_error(ArgumentError)
  end

  %w(x X).each do |x|
    it "parses the value as a hex number if there's a leading 0#{x} and a base of 16" do
      Integer("0#{x}10", 16).should == 16
      Integer("0#{x}dd", 16).should == 221
    end

    it "is a positive hex number if there's a leading +0#{x} and base of 16" do
      Integer("+0#{x}1", 16).should == 0x1
      Integer("+0#{x}dd", 16).should == 0xdd
    end

    it "is a negative hex number if there's a leading -0#{x} and a base of 16" do
      Integer("-0#{x}1", 16).should == -0x1
      Integer("-0#{x}dd", 16).should == -0xdd
    end

    2.upto(15) do |base|
      it "raises an ArgumentError if the number begins with 0#{x} and the base is #{base}" do
        lambda { Integer("0#{x}1", base) }.should raise_error(ArgumentError)
      end
    end

    it "raises an ArgumentError if the number cannot be parsed as hex and the base is 16" do
      lambda { Integer("0#{x}g", 16) }.should raise_error(ArgumentError)
    end
  end

  %w(b B).each do |b|
    it "parses the value as a binary number if there's a leading 0#{b} and the base is 2" do
      Integer("0#{b}1", 2).should == 0b1
      Integer("0#{b}10", 2).should == 0b10
    end

    it "is a positive binary number if there's a leading +0#{b} and a base of 2" do
      Integer("+0#{b}1", 2).should == 0b1
      Integer("+0#{b}10", 2).should == 0b10
    end

    it "is a negative binary number if there's a leading -0#{b} and a base of 2" do
      Integer("-0#{b}1", 2).should == -0b1
      Integer("-0#{b}10", 2).should == -0b10
    end

    it "raises an ArgumentError if the number cannot be parsed as binary and the base is 2" do
      lambda { Integer("0#{b}2", 2) }.should raise_error(ArgumentError)
    end
  end

  ["o", "O"].each do |o|
    it "parses the value as an octal number if there's a leading 0#{o} and a base of 8" do
      Integer("0#{o}1", 8).should == 0O1
      Integer("0#{o}10", 8).should == 0O10
    end

    it "is a positive octal number if there's a leading +0#{o} and a base of 8" do
      Integer("+0#{o}1", 8).should == 0O1
      Integer("+0#{o}10", 8).should == 0O10
    end

    it "is a negative octal number if there's a leading -0#{o} and a base of 8" do
      Integer("-0#{o}1", 8).should == -0O1
      Integer("-0#{o}10", 8).should == -0O10
    end

    it "raises an ArgumentError if the number cannot be parsed as octal and the base is 8" do
      lambda { Integer("0#{o}9", 8) }.should raise_error(ArgumentError)
    end

    2.upto(7) do |base|
      it "raises an ArgumentError if the number begins with 0#{o} and the base is #{base}" do
        lambda { Integer("0#{o}1", base) }.should raise_error(ArgumentError)
      end
    end
  end

  %w(D d).each do |d|
    it "parses the value as a decimal number if there's a leading 0#{d} and a base of 10" do
      Integer("0#{d}1", 10).should == 1
      Integer("0#{d}10",10).should == 10
    end

    it "is a positive decimal number if there's a leading +0#{d} and a base of 10" do
      Integer("+0#{d}1", 10).should == 1
      Integer("+0#{d}10", 10).should == 10
    end

    it "is a negative decimal number if there's a leading -0#{d} and a base of 10" do
      Integer("-0#{d}1", 10).should == -1
      Integer("-0#{d}10", 10).should == -10
    end

    it "raises an ArgumentError if the number cannot be parsed as decimal and the base is 10" do
      lambda { Integer("0#{d}a", 10) }.should raise_error(ArgumentError)
    end

    2.upto(9) do |base|
      it "raises an ArgumentError if the number begins with 0#{d} and the base is #{base}" do
        lambda { Integer("0#{d}1", base) }.should raise_error(ArgumentError)
      end
    end

    it "raises an ArgumentError if a base is given for a non-String value" do
      lambda { Integer(98, 15) }.should raise_error(ArgumentError)
    end
  end
end

describe :kernel_Integer, shared: true do
  it "raises an ArgumentError when the String contains digits out of range of radix 2" do
    str = "23456789abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 2) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 3" do
    str = "3456789abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 3) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 4" do
    str = "456789abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 4) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 5" do
    str = "56789abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 5) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 6" do
    str = "6789abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 6) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 7" do
    str = "789abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 7) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 8" do
    str = "89abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 8) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 9" do
    str = "9abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 9) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 10" do
    str = "abcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 10) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 11" do
    str = "bcdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 11) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 12" do
    str = "cdefghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 12) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 13" do
    str = "defghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 13) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 14" do
    str = "efghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 14) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 15" do
    str = "fghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 15) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 16" do
    str = "ghijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 16) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 17" do
    str = "hijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 17) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 18" do
    str = "ijklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 18) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 19" do
    str = "jklmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 19) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 20" do
    str = "klmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 20) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 21" do
    str = "lmnopqrstuvwxyz"
    lambda { @object.send(@method, str, 21) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 22" do
    str = "mnopqrstuvwxyz"
    lambda { @object.send(@method, str, 22) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 23" do
    str = "nopqrstuvwxyz"
    lambda { @object.send(@method, str, 23) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 24" do
    str = "opqrstuvwxyz"
    lambda { @object.send(@method, str, 24) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 25" do
    str = "pqrstuvwxyz"
    lambda { @object.send(@method, str, 25) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 26" do
    str = "qrstuvwxyz"
    lambda { @object.send(@method, str, 26) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 27" do
    str = "rstuvwxyz"
    lambda { @object.send(@method, str, 27) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 28" do
    str = "stuvwxyz"
    lambda { @object.send(@method, str, 28) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 29" do
    str = "tuvwxyz"
    lambda { @object.send(@method, str, 29) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 30" do
    str = "uvwxyz"
    lambda { @object.send(@method, str, 30) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 31" do
    str = "vwxyz"
    lambda { @object.send(@method, str, 31) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 32" do
    str = "wxyz"
    lambda { @object.send(@method, str, 32) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 33" do
    str = "xyz"
    lambda { @object.send(@method, str, 33) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 34" do
    str = "yz"
    lambda { @object.send(@method, str, 34) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 35" do
    str = "z"
    lambda { @object.send(@method, str, 35) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the String contains digits out of range of radix 36" do
    lambda { @object.send(@method, "{", 36) }.should raise_error(ArgumentError)
  end
end

describe "Kernel.Integer" do
  it_behaves_like :kernel_Integer, :Integer_method, KernelSpecs

  # TODO: fix these specs
  it_behaves_like :kernel_integer, :Integer, Kernel
  it_behaves_like "Integer() given a String", :Integer

  it_behaves_like "Integer() given a String and base", :Integer

  it "is a public method" do
    Kernel.Integer(10).should == 10
  end
end

describe "Kernel#Integer" do
  it_behaves_like :kernel_Integer, :Integer_function, KernelSpecs

  # TODO: fix these specs
  it_behaves_like :kernel_integer, :Integer, Object.new
  it_behaves_like "Integer() given a String", :Integer

  it_behaves_like "Integer() given a String and base", :Integer

  it "is a private method" do
    Kernel.should have_private_instance_method(:Integer)
  end
end
