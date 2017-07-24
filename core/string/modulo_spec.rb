require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#%" do
  it "formats multiple expressions" do
    ("%b %x %d %s" % [10, 10, 10, 10]).should == "1010 a 10 10"
  end

  it "formats expressions mid string" do
    ("hello %s!" % "world").should == "hello world!"
  end

  it "formats %% into %" do
    ("%d%% %s" % [10, "of chickens!"]).should == "10% of chickens!"
  end

  ruby_version_is ""..."2.5" do
    it "formats single % character at the end as literal %" do
      ("%" % []).should == "%"
      ("foo%" % []).should == "foo%"
    end
  end

  ruby_version_is "2.5" do
    it "raises an error if single % appears at the end" do
      lambda { ("%" % []) }.should raise_error(ArgumentError)
      lambda { ("foo%" % [])}.should raise_error(ArgumentError)
    end
  end

  it "formats single % character before a newline as literal %" do
    ("%\n" % []).should == "%\n"
    ("foo%\n" % []).should == "foo%\n"
    ("%\n.3f" % 1.2).should == "%\n.3f"
  end

  it "formats single % character before a NUL as literal %" do
    ("%\0" % []).should == "%\0"
    ("foo%\0" % []).should == "foo%\0"
    ("%\0.3f" % 1.2).should == "%\0.3f"
  end

  it "raises an error if single % appears anywhere else" do
    lambda { (" % " % []) }.should raise_error(ArgumentError)
    lambda { ("foo%quux" % []) }.should raise_error(ArgumentError)
  end

  it "raises an error if NULL or \\n appear anywhere else in the format string" do
    begin
      old_debug, $DEBUG = $DEBUG, false

      lambda { "%.\n3f" % 1.2 }.should raise_error(ArgumentError)
      lambda { "%.3\nf" % 1.2 }.should raise_error(ArgumentError)
      lambda { "%.\03f" % 1.2 }.should raise_error(ArgumentError)
      lambda { "%.3\0f" % 1.2 }.should raise_error(ArgumentError)
    ensure
      $DEBUG = old_debug
    end
  end

  it "ignores unused arguments when $DEBUG is false" do
    begin
      old_debug = $DEBUG
      $DEBUG = false

      ("" % [1, 2, 3]).should == ""
      ("%s" % [1, 2, 3]).should == "1"
    ensure
      $DEBUG = old_debug
    end
  end

  it "raises an ArgumentError for unused arguments when $DEBUG is true" do
    begin
      old_debug = $DEBUG
      $DEBUG = true
      s = $stderr
      $stderr = IOStub.new

      lambda { "" % [1, 2, 3]   }.should raise_error(ArgumentError)
      lambda { "%s" % [1, 2, 3] }.should raise_error(ArgumentError)
    ensure
      $DEBUG = old_debug
      $stderr = s
    end
  end

  it "always allows unused arguments when positional argument style is used" do
    begin
      old_debug = $DEBUG
      $DEBUG = false

      ("%2$s" % [1, 2, 3]).should == "2"
      $DEBUG = true
      ("%2$s" % [1, 2, 3]).should == "2"
    ensure
      $DEBUG = old_debug
    end
  end

  it "replaces trailing absolute argument specifier without type with percent sign" do
    ("hello %1$" % "foo").should == "hello %"
  end

  it "raises an ArgumentError when given invalid argument specifiers" do
    lambda { "%1" % [] }.should raise_error(ArgumentError)
    lambda { "%+" % [] }.should raise_error(ArgumentError)
    lambda { "%-" % [] }.should raise_error(ArgumentError)
    lambda { "%#" % [] }.should raise_error(ArgumentError)
    lambda { "%0" % [] }.should raise_error(ArgumentError)
    lambda { "%*" % [] }.should raise_error(ArgumentError)
    lambda { "%." % [] }.should raise_error(ArgumentError)
    lambda { "%_" % [] }.should raise_error(ArgumentError)
    lambda { "%0$s" % "x"              }.should raise_error(ArgumentError)
    lambda { "%*0$s" % [5, "x"]        }.should raise_error(ArgumentError)
    lambda { "%*1$.*0$1$s" % [1, 2, 3] }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when multiple positional argument tokens are given for one format specifier" do
    lambda { "%1$1$s" % "foo" }.should raise_error(ArgumentError)
  end

  it "respects positional arguments and precision tokens given for one format specifier" do
    ("%2$1d" % [1, 0]).should == "0"
    ("%2$1d" % [0, 1]).should == "1"

    ("%2$.2f" % [1, 0]).should == "0.00"
    ("%2$.2f" % [0, 1]).should == "1.00"
  end

  it "allows more than one digit of position" do
    ("%50$d" % (0..100).to_a).should == "49"
  end

  it "raises an ArgumentError when multiple width star tokens are given for one format specifier" do
    lambda { "%**s" % [5, 5, 5] }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when a width star token is seen after a width token" do
    lambda { "%5*s" % [5, 5] }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when multiple precision tokens are given" do
    lambda { "%.5.5s" % 5      }.should raise_error(ArgumentError)
    lambda { "%.5.*s" % [5, 5] }.should raise_error(ArgumentError)
    lambda { "%.*.5s" % [5, 5] }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when there are less arguments than format specifiers" do
    ("foo" % []).should == "foo"
    lambda { "%s" % []     }.should raise_error(ArgumentError)
    lambda { "%s %s" % [1] }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when absolute and relative argument numbers are mixed" do
    lambda { "%s %1$s" % "foo" }.should raise_error(ArgumentError)
    lambda { "%1$s %s" % "foo" }.should raise_error(ArgumentError)

    lambda { "%s %2$s" % ["foo", "bar"] }.should raise_error(ArgumentError)
    lambda { "%2$s %s" % ["foo", "bar"] }.should raise_error(ArgumentError)

    lambda { "%*2$s" % [5, 5, 5]     }.should raise_error(ArgumentError)
    lambda { "%*.*2$s" % [5, 5, 5]   }.should raise_error(ArgumentError)
    lambda { "%*2$.*2$s" % [5, 5, 5] }.should raise_error(ArgumentError)
    lambda { "%*.*2$s" % [5, 5, 5]   }.should raise_error(ArgumentError)
  end

  it "allows reuse of the one argument multiple via absolute argument numbers" do
    ("%1$s %1$s" % "foo").should == "foo foo"
    ("%1$s %2$s %1$s %2$s" % ["foo", "bar"]).should == "foo bar foo bar"
  end

  it "always interprets an array argument as a list of argument parameters" do
    lambda { "%p" % [] }.should raise_error(ArgumentError)
    ("%p" % [1]).should == "1"
    ("%p %p" % [1, 2]).should == "1 2"
  end

  it "always interprets an array subclass argument as a list of argument parameters" do
    lambda { "%p" % StringSpecs::MyArray[] }.should raise_error(ArgumentError)
    ("%p" % StringSpecs::MyArray[1]).should == "1"
    ("%p %p" % StringSpecs::MyArray[1, 2]).should == "1 2"
  end

  it "allows positional arguments for width star and precision star arguments" do
    ("%*1$.*2$3$d" % [10, 5, 1]).should == "     00001"
  end

  it "allows negative width to imply '-' flag" do
    ("%*1$.*2$3$d" % [-10, 5, 1]).should == "00001     "
    ("%-*1$.*2$3$d" % [10, 5, 1]).should == "00001     "
    ("%-*1$.*2$3$d" % [-10, 5, 1]).should == "00001     "
  end

  it "ignores negative precision" do
    ("%*1$.*2$3$d" % [10, -5, 1]).should == "         1"
  end

  it "allows a star to take an argument number to use as the width" do
    ("%1$*2$s" % ["a", 8]).should == "       a"
    ("%1$*10$s" % ["a",0,0,0,0,0,0,0,0,8]).should == "       a"
  end

  it "calls to_int on width star and precision star tokens" do
    w = mock('10')
    w.should_receive(:to_int).and_return(10)

    p = mock('5')
    p.should_receive(:to_int).and_return(5)

    ("%*.*f" % [w, p, 1]).should == "   1.00000"


    w = mock('10')
    w.should_receive(:to_int).and_return(10)

    p = mock('5')
    p.should_receive(:to_int).and_return(5)

    ("%*.*d" % [w, p, 1]).should == "     00001"
  end

  it "does not call #to_a to convert the argument" do
    x = mock("string modulo to_a")
    x.should_not_receive(:to_a)
    x.should_receive(:to_s).and_return("x")

    ("%s" % x).should == "x"
  end

  it "calls #to_ary to convert the argument" do
    x = mock("string modulo to_ary")
    x.should_not_receive(:to_s)
    x.should_receive(:to_ary).and_return(["x"])

    ("%s" % x).should == "x"
  end

  it "wraps the object in an Array if #to_ary returns nil" do
    x = mock("string modulo to_ary")
    x.should_receive(:to_ary).and_return(nil)
    x.should_receive(:to_s).and_return("x")

    ("%s" % x).should == "x"
  end

  it "raises a TypeError if #to_ary does not return an Array" do
    x = mock("string modulo to_ary")
    x.should_receive(:to_ary).and_return("x")

    lambda { "%s" % x }.should raise_error(TypeError)
  end

  it "tries to convert the argument to Array by calling #to_ary" do
    obj = mock('[1,2]')
    def obj.to_ary() [1, 2] end
    def obj.to_s() "obj" end
    ("%s %s" % obj).should == "1 2"
    ("%s" % obj).should == "1"
  end

  it "doesn't return subclass instances when called on a subclass" do
    universal = mock('0')
    def universal.to_int() 0 end
    def universal.to_str() "0" end
    def universal.to_f() 0.0 end

    [
      "", "foo",
      "%b", "%B", "%c", "%d", "%e", "%E",
      "%f", "%g", "%G", "%i", "%o", "%p",
      "%s", "%u", "%x", "%X"
    ].each do |format|
      (StringSpecs::MyString.new(format) % universal).should be_an_instance_of(String)
    end
  end

  it "always taints the result when the format string is tainted" do
    universal = mock('0')
    def universal.to_int() 0 end
    def universal.to_str() "0" end
    def universal.to_f() 0.0 end

    [
      "", "foo",
      "%b", "%B", "%c", "%d", "%e", "%E",
      "%f", "%g", "%G", "%i", "%o", "%p",
      "%s", "%u", "%x", "%X"
    ].each do |format|
      subcls_format = StringSpecs::MyString.new(format)
      subcls_format.taint
      format.taint

      (format % universal).tainted?.should == true
      (subcls_format % universal).tainted?.should == true
    end
  end

  it "supports binary formats using %b for positive numbers" do
    ("%b" % 10).should == "1010"
    ("% b" % 10).should == " 1010"
    ("%1$b" % [10, 20]).should == "1010"
    ("%#b" % 10).should == "0b1010"
    ("%+b" % 10).should == "+1010"
    ("%-9b" % 10).should == "1010     "
    ("%05b" % 10).should == "01010"
    ("%*b" % [10, 6]).should == "       110"
    ("%*b" % [-10, 6]).should == "110       "
    ("%.4b" % 2).should == "0010"
    ("%.32b" % 2147483648).should == "10000000000000000000000000000000"
  end

  it "supports binary formats using %b for negative numbers" do
    ("%b" % -5).should == "..1011"
    ("%0b" % -5).should == "..1011"
    ("%.1b" % -5).should == "..1011"
    ("%.7b" % -5).should == "..11011"
    ("%.10b" % -5).should == "..11111011"
    ("% b" % -5).should == "-101"
    ("%+b" % -5).should == "-101"
    not_supported_on :opal do
      ("%b" % -(2 ** 64 + 5)).should ==
        "..101111111111111111111111111111111111111111111111111111111111111011"
    end
  end

  it "supports binary formats using %B with same behaviour as %b except for using 0B instead of 0b for #" do
    ("%B" % 10).should == ("%b" % 10)
    ("% B" % 10).should == ("% b" % 10)
    ("%1$B" % [10, 20]).should == ("%1$b" % [10, 20])
    ("%+B" % 10).should == ("%+b" % 10)
    ("%-9B" % 10).should == ("%-9b" % 10)
    ("%05B" % 10).should == ("%05b" % 10)
    ("%*B" % [10, 6]).should == ("%*b" % [10, 6])
    ("%*B" % [-10, 6]).should == ("%*b" % [-10, 6])

    ("%B" % -5).should == ("%b" % -5)
    ("%0B" % -5).should == ("%0b" % -5)
    ("%.1B" % -5).should == ("%.1b" % -5)
    ("%.7B" % -5).should == ("%.7b" % -5)
    ("%.10B" % -5).should == ("%.10b" % -5)
    ("% B" % -5).should == ("% b" % -5)
    ("%+B" % -5).should == ("%+b" % -5)
    not_supported_on :opal do
      ("%B" % -(2 ** 64 + 5)).should == ("%b" % -(2 ** 64 + 5))
    end

    ("%#B" % 10).should == "0B1010"
  end

  it "supports character formats using %c" do
    ("%c" % 10).should == "\n"
    ("%2$c" % [10, 11, 14]).should == "\v"
    ("%-4c" % 10).should == "\n   "
    ("%*c" % [10, 3]).should == "         \003"
    ("%c" % 42).should == "*"

    lambda { "%c" % Object }.should raise_error(TypeError)
  end

  it "supports single character strings as argument for %c" do
    ("%c" % 'A').should == "A"
  end

  it "raises an exception for multiple character strings as argument for %c" do
    lambda { "%c" % 'AA' }.should raise_error(ArgumentError)
  end

  it "calls to_str on argument for %c formats" do
    obj = mock('A')
    obj.should_receive(:to_str).and_return('A')

    ("%c" % obj).should == "A"
  end

  it "calls #to_ary on argument for %c formats" do
    obj = mock('65')
    obj.should_receive(:to_ary).and_return([65])
    ("%c" % obj).should == ("%c" % [65])
  end

  it "calls #to_int on argument for %c formats, if the argument does not respond to #to_ary" do
    obj = mock('65')
    obj.should_receive(:to_int).and_return(65)

    ("%c" % obj).should == ("%c" % 65)
  end

  %w(d i).each do |f|
    format = "%" + f

    it "supports integer formats using #{format}" do
      ("%#{f}" % 10).should == "10"
      ("% #{f}" % 10).should == " 10"
      ("%1$#{f}" % [10, 20]).should == "10"
      ("%+#{f}" % 10).should == "+10"
      ("%-7#{f}" % 10).should == "10     "
      ("%04#{f}" % 10).should == "0010"
      ("%*#{f}" % [10, 4]).should == "         4"
      ("%6.4#{f}" % 123).should == "  0123"
    end

    it "supports negative integers using #{format}" do
      ("%#{f}" % -5).should == "-5"
      ("%3#{f}" % -5).should == " -5"
      ("%03#{f}" % -5).should == "-05"
      ("%+03#{f}" % -5).should == "-05"
      ("%+.2#{f}" % -5).should == "-05"
      ("%-3#{f}" % -5).should == "-5 "
      ("%6.4#{f}" % -123).should == " -0123"
    end

    it "supports negative integers using #{format}, giving priority to `-`" do
      ("%-03#{f}" % -5).should == "-5 "
      ("%+-03#{f}" % -5).should == "-5 "
    end
  end

  it "supports float formats using %e" do
    ("%e" % 10).should == "1.000000e+01"
    ("% e" % 10).should == " 1.000000e+01"
    ("%1$e" % 10).should == "1.000000e+01"
    ("%#e" % 10).should == "1.000000e+01"
    ("%+e" % 10).should == "+1.000000e+01"
    ("%-7e" % 10).should == "1.000000e+01"
    ("%05e" % 10).should == "1.000000e+01"
    ("%*e" % [10, 9]).should == "9.000000e+00"
  end

  it "supports float formats using %e, but Inf, -Inf, and NaN are not floats" do
    ("%e" % 1e1020).should == "Inf"
    ("%e" % -1e1020).should == "-Inf"
    ("%e" % -Float::NAN).should == "NaN"
    ("%e" % Float::NAN).should == "NaN"
  end

  it "supports float formats using %E, but Inf, -Inf, and NaN are not floats" do
    ("%E" % 1e1020).should == "Inf"
    ("%E" % -1e1020).should == "-Inf"
    ("%-10E" % 1e1020).should == "Inf       "
    ("%10E" % 1e1020).should == "       Inf"
    ("%+E" % 1e1020).should == "+Inf"
    ("% E" % 1e1020).should == " Inf"
    ("%E" % Float::NAN).should == "NaN"
    ("%E" % -Float::NAN).should == "NaN"
  end

  it "supports float formats using %E" do
    ("%E" % 10).should == "1.000000E+01"
    ("% E" % 10).should == " 1.000000E+01"
    ("%1$E" % 10).should == "1.000000E+01"
    ("%#E" % 10).should == "1.000000E+01"
    ("%+E" % 10).should == "+1.000000E+01"
    ("%-7E" % 10).should == "1.000000E+01"
    ("%05E" % 10).should == "1.000000E+01"
    ("%*E" % [10, 9]).should == "9.000000E+00"
  end

  it "pads with spaces for %E with Inf, -Inf, and NaN" do
    ("%010E" % -1e1020).should == "      -Inf"
    ("%010E" % 1e1020).should == "       Inf"
    ("%010E" % Float::NAN).should == "       NaN"
  end

  it "supports float formats using %f" do
    ("%f" % 10).should == "10.000000"
    ("% f" % 10).should == " 10.000000"
    ("%1$f" % 10).should == "10.000000"
    ("%#f" % 10).should == "10.000000"
    ("%#0.3f" % 10).should == "10.000"
    ("%+f" % 10).should == "+10.000000"
    ("%-7f" % 10).should == "10.000000"
    ("%05f" % 10).should == "10.000000"
    ("%0.5f" % 10).should == "10.00000"
    ("%*f" % [10, 9]).should == "  9.000000"
  end

  it "supports float formats using %g" do
    ("%g" % 10).should == "10"
    ("% g" % 10).should == " 10"
    ("%1$g" % 10).should == "10"
    ("%#g" % 10).should == "10.0000"
    ("%#.3g" % 10).should == "10.0"
    ("%+g" % 10).should == "+10"
    ("%-7g" % 10).should == "10     "
    ("%05g" % 10).should == "00010"
    ("%g" % 10**10).should == "1e+10"
    ("%*g" % [10, 9]).should == "         9"
  end

  it "supports float formats using %G" do
    ("%G" % 10).should == "10"
    ("% G" % 10).should == " 10"
    ("%1$G" % 10).should == "10"
    ("%#G" % 10).should == "10.0000"
    ("%#.3G" % 10).should == "10.0"
    ("%+G" % 10).should == "+10"
    ("%-7G" % 10).should == "10     "
    ("%05G" % 10).should == "00010"
    ("%G" % 10**10).should == "1E+10"
    ("%*G" % [10, 9]).should == "         9"
  end

  it "supports octal formats using %o for positive numbers" do
    ("%o" % 10).should == "12"
    ("% o" % 10).should == " 12"
    ("%1$o" % [10, 20]).should == "12"
    ("%#o" % 10).should == "012"
    ("%+o" % 10).should == "+12"
    ("%-9o" % 10).should == "12       "
    ("%05o" % 10).should == "00012"
    ("%*o" % [10, 6]).should == "         6"
  end

  it "supports octal formats using %o for negative numbers" do
    # These are incredibly wrong. -05 == -5, not 7177777...whatever
    ("%o" % -5).should == "..73"
    ("%0o" % -5).should == "..73"
    ("%.4o" % 20).should == "0024"
    ("%.1o" % -5).should == "..73"
    ("%.7o" % -5).should == "..77773"
    ("%.10o" % -5).should == "..77777773"

    ("% o" % -26).should == "-32"
    ("%+o" % -26).should == "-32"
    not_supported_on :opal do
      ("%o" % -(2 ** 64 + 5)).should == "..75777777777777777777773"
    end
  end

  it "supports inspect formats using %p" do
    ("%p" % 10).should == "10"
    ("%1$p" % [10, 5]).should == "10"
    ("%-22p" % 10).should == "10                    "
    ("%*p" % [10, 10]).should == "        10"
    ("%p" % {capture: 1}).should == "{:capture=>1}"
    ("%p" % "str").should == "\"str\""
  end

  it "calls inspect on arguments for %p format" do
    obj = mock('obj')
    def obj.inspect() "obj" end
    ("%p" % obj).should == "obj"

    # undef is not working
    # obj = mock('obj')
    # class << obj; undef :inspect; end
    # def obj.method_missing(*args) "obj" end
    # ("%p" % obj).should == "obj"
  end

  it "taints result for %p when argument.inspect is tainted" do
    obj = mock('x')
    def obj.inspect() "x".taint end

    ("%p" % obj).tainted?.should == true

    obj = mock('x'); obj.taint
    def obj.inspect() "x" end

    ("%p" % obj).tainted?.should == false
  end

  it "supports string formats using %s" do
    ("%s" % "hello").should == "hello"
    ("%s" % "").should == ""
    ("%s" % 10).should == "10"
    ("%1$s" % [10, 8]).should == "10"
    ("%-5s" % 10).should == "10   "
    ("%*s" % [10, 9]).should == "         9"
  end

  it "respects a space padding request not as part of the width" do
    x = "% -5s" % ["foo"]
    x.should == "foo  "
  end

  it "calls to_s on non-String arguments for %s format" do
    obj = mock('obj')
    def obj.to_s() "obj" end

    ("%s" % obj).should == "obj"

    # undef doesn't work
    # obj = mock('obj')
    # class << obj; undef :to_s; end
    # def obj.method_missing(*args) "obj" end
    #
    # ("%s" % obj).should == "obj"
  end

  it "taints result for %s when argument is tainted" do
    ("%s" % "x".taint).tainted?.should == true
    ("%s" % mock('x').taint).tainted?.should == true
  end

  # MRI crashes on this one.
  # See http://groups.google.com/group/ruby-core-google/t/c285c18cd94c216d
  it "raises an ArgumentError for huge precisions for %s" do
    block = lambda { "%.25555555555555555555555555555555555555s" % "hello world" }
    block.should raise_error(ArgumentError)
  end

  # Note: %u has been changed to an alias for %d in 1.9.
  it "supports unsigned formats using %u" do
    ("%u" % 10).should == "10"
    ("% u" % 10).should == " 10"
    ("%1$u" % [10, 20]).should == "10"
    ("%+u" % 10).should == "+10"
    ("%-7u" % 10).should == "10     "
    ("%04u" % 10).should == "0010"
    ("%*u" % [10, 4]).should == "         4"
  end

  it "formats negative values with a leading sign using %u" do
    ("% u" % -26).should == "-26"
    ("%+u" % -26).should == "-26"
  end

  it "supports negative bignums with %u or %d" do
    ("%u" % -(2 ** 64 + 5)).should == "-18446744073709551621"
    ("%d" % -(2 ** 64 + 5)).should == "-18446744073709551621"
  end

  it "supports hex formats using %x for positive numbers" do
    ("%x" % 10).should == "a"
    ("% x" % 10).should == " a"
    ("%1$x" % [10, 20]).should == "a"
    ("%#x" % 10).should == "0xa"
    ("%+x" % 10).should == "+a"
    ("%-9x" % 10).should == "a        "
    ("%05x" % 10).should == "0000a"
    ("%*x" % [10, 6]).should == "         6"
    ("%.4x" % 20).should == "0014"
    ("%x" % 0xFFFFFFFF).should == "ffffffff"
  end

  it "supports hex formats using %x for negative numbers" do
    ("%x" % -5).should == "..fb"
    ("%0x" % -5).should == "..fb"
    ("%.1x" % -5).should == "..fb"
    ("%.7x" % -5).should == "..ffffb"
    ("%.10x" % -5).should == "..fffffffb"
    ("% x" % -26).should == "-1a"
    ("%+x" % -26).should == "-1a"
    not_supported_on :opal do
      ("%x" % -(2 ** 64 + 5)).should == "..fefffffffffffffffb"
    end
  end

  it "supports hex formats using %X for positive numbers" do
    ("%X" % 10).should == "A"
    ("% X" % 10).should == " A"
    ("%1$X" % [10, 20]).should == "A"
    ("%#X" % 10).should == "0XA"
    ("%+X" % 10).should == "+A"
    ("%-9X" % 10).should == "A        "
    ("%05X" % 10).should == "0000A"
    ("%*X" % [10, 6]).should == "         6"
    ("%X" % 0xFFFFFFFF).should == "FFFFFFFF"
  end

  it "supports hex formats using %X for negative numbers" do
    ("%X" % -5).should == "..FB"
    ("%0X" % -5).should == "..FB"
    ("%.1X" % -5).should == "..FB"
    ("%.7X" % -5).should == "..FFFFB"
    ("%.10X" % -5).should == "..FFFFFFFB"
    ("% X" % -26).should == "-1A"
    ("%+X" % -26).should == "-1A"
    not_supported_on :opal do
      ("%X" % -(2 ** 64 + 5)).should == "..FEFFFFFFFFFFFFFFFB"
    end
  end

  it "formats zero without prefix using %#x" do
    ("%#x" % 0).should == "0"
  end

  it "formats zero without prefix using %#X" do
    ("%#X" % 0).should == "0"
  end

  %w(b d i o u x X).each do |f|
    format = "%" + f

    it "behaves as if calling Kernel#Integer for #{format} argument, if it does not respond to #to_ary" do
      (format % "10").should == (format % Kernel.Integer("10"))
      (format % "0x42").should == (format % Kernel.Integer("0x42"))
      (format % "0b1101").should == (format % Kernel.Integer("0b1101"))
      (format % "0b1101_0000").should == (format % Kernel.Integer("0b1101_0000"))
      (format % "0777").should == (format % Kernel.Integer("0777"))
      lambda {
        # see [ruby-core:14139] for more details
        (format % "0777").should == (format % Kernel.Integer("0777"))
      }.should_not raise_error(ArgumentError)

      lambda { format % "0__7_7_7" }.should raise_error(ArgumentError)

      lambda { format % "" }.should raise_error(ArgumentError)
      lambda { format % "x" }.should raise_error(ArgumentError)
      lambda { format % "5x" }.should raise_error(ArgumentError)
      lambda { format % "08" }.should raise_error(ArgumentError)
      lambda { format % "0b2" }.should raise_error(ArgumentError)
      lambda { format % "123__456" }.should raise_error(ArgumentError)

      obj = mock('5')
      obj.should_receive(:to_i).and_return(5)
      (format % obj).should == (format % 5)

      obj = mock('6')
      obj.stub!(:to_i).and_return(5)
      obj.should_receive(:to_int).and_return(6)
      (format % obj).should == (format % 6)
    end
  end

  %w(e E f g G).each do |f|
    format = "%" + f

    it "tries to convert the passed argument to an Array using #to_ary" do
      obj = mock('3.14')
      obj.should_receive(:to_ary).and_return([3.14])
      (format % obj).should == (format % [3.14])
    end

    it "behaves as if calling Kernel#Float for #{format} arguments, when the passed argument does not respond to #to_ary" do
      (format % 10).should == (format % 10.0)
      (format % "-10.4e-20").should == (format % -10.4e-20)
      (format % ".5").should == (format % 0.5)
      (format % "-.5").should == (format % -0.5)
      # Something's strange with this spec:
      # it works just fine in individual mode, but not when run as part of a group
      (format % "10_1_0.5_5_5").should == (format % 1010.555)

      (format % "0777").should == (format % 777)

      lambda { format % "" }.should raise_error(ArgumentError)
      lambda { format % "x" }.should raise_error(ArgumentError)
      lambda { format % "." }.should raise_error(ArgumentError)
      lambda { format % "10." }.should raise_error(ArgumentError)
      lambda { format % "5x" }.should raise_error(ArgumentError)
      lambda { format % "0b1" }.should raise_error(ArgumentError)
      lambda { format % "10e10.5" }.should raise_error(ArgumentError)
      lambda { format % "10__10" }.should raise_error(ArgumentError)
      lambda { format % "10.10__10" }.should raise_error(ArgumentError)

      obj = mock('5.0')
      obj.should_receive(:to_f).and_return(5.0)
      (format % obj).should == (format % 5.0)
    end

    it "behaves as if calling Kernel#Float for #{format} arguments, when the passed argument is hexadecimal string" do
      (format % "0xA").should == (format % 0xA)
    end

    it "doesn't taint the result for #{format} when argument is tainted" do
      (format % "5".taint).tainted?.should == false
    end
  end

  describe "when format string contains %{} sections" do
    it "replaces %{} sections with values from passed-in hash" do
      ("%{foo}bar" % {foo: 'oof'}).should == "oofbar"
    end

    it "raises KeyError if key is missing from passed-in hash" do
      lambda {"%{foo}" % {}}.should raise_error(KeyError)
    end

    it "should raise ArgumentError if no hash given" do
      lambda {"%{foo}" % []}.should raise_error(ArgumentError)
    end
  end

  describe "when format string contains %<> formats" do
    it "uses the named argument for the format's value" do
      ("%<foo>d" % {foo: 1}).should == "1"
    end

    it "raises KeyError if key is missing from passed-in hash" do
      lambda {"%<foo>d" % {}}.should raise_error(KeyError)
    end

    it "should raise ArgumentError if no hash given" do
      lambda {"%<foo>" % []}.should raise_error(ArgumentError)
    end
  end
end
