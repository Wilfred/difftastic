require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe :kernel_float, shared: true do
  it "returns the identical Float for numeric Floats" do
    float = 1.12
    float2 = @object.send(:Float, float)
    float2.should == float
    float2.object_id.should == float.object_id
  end

  it "returns a Float for Fixnums" do
    @object.send(:Float, 1).should == 1.0
  end

  it "returns a Float for Complex with only a real part" do
    @object.send(:Float, Complex(1)).should == 1.0
  end

  it "returns a Float for Bignums" do
    @object.send(:Float, 1000000000000).should == 1000000000000.0
  end

  it "raises an ArgumentError for nil" do
    lambda { @object.send(:Float, nil) }.should raise_error(TypeError)
  end

  it "returns the identical NaN for NaN" do
    nan = nan_value
    nan.nan?.should be_true
    nan2 = @object.send(:Float, nan)
    nan2.nan?.should be_true
    nan2.should equal(nan)
  end

  it "returns the same Infinity for Infinity" do
    infinity = infinity_value
    infinity2 = @object.send(:Float, infinity)
    infinity2.should == infinity_value
    infinity.should equal(infinity2)
  end

  it "converts Strings to floats without calling #to_f" do
    string = "10"
    string.should_not_receive(:to_f)
    @object.send(:Float, string).should == 10.0
  end

  it "converts Strings with decimal points into Floats" do
    @object.send(:Float, "10.0").should == 10.0
  end

  it "raises an ArgumentError for a String of word characters" do
    lambda { @object.send(:Float, "float") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if there are two decimal points in the String" do
    lambda { @object.send(:Float, "10.0.0") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String of numbers followed by word characters" do
    lambda { @object.send(:Float, "10D") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String of word characters followed by numbers" do
    lambda { @object.send(:Float, "D10") }.should raise_error(ArgumentError)
  end

  it "is strict about the string form even across newlines" do
    lambda { @object.send(:Float, "not a number\n10") }.should raise_error(ArgumentError)
    lambda { @object.send(:Float, "10\nnot a number") }.should raise_error(ArgumentError)
  end

  it "converts String subclasses to floats without calling #to_f" do
    my_string = Class.new(String) do
      def to_f() 1.2 end
    end

    @object.send(:Float, my_string.new("10")).should == 10.0
  end

  it "returns a positive Float if the string is prefixed with +" do
    @object.send(:Float, "+10").should == 10.0
    @object.send(:Float, " +10").should == 10.0
  end

  it "returns a negative Float if the string is prefixed with +" do
    @object.send(:Float, "-10").should == -10.0
    @object.send(:Float, " -10").should == -10.0
  end

  it "raises an ArgumentError if a + or - is embedded in a String" do
    lambda { @object.send(:Float, "1+1") }.should raise_error(ArgumentError)
    lambda { @object.send(:Float, "1-1") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError if a String has a trailing + or -" do
    lambda { @object.send(:Float, "11+") }.should raise_error(ArgumentError)
    lambda { @object.send(:Float, "11-") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String with a leading _" do
    lambda { @object.send(:Float, "_1") }.should raise_error(ArgumentError)
  end

  it "returns a value for a String with an embedded _" do
    @object.send(:Float, "1_000").should == 1000.0
  end

  it "raises an ArgumentError for a String with a trailing _" do
    lambda { @object.send(:Float, "10_") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String of \\0" do
    lambda { @object.send(:Float, "\0") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String with a leading \\0" do
    lambda { @object.send(:Float, "\01") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String with an embedded \\0" do
    lambda { @object.send(:Float, "1\01") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String with a trailing \\0" do
    lambda { @object.send(:Float, "1\0") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String that is just an empty space" do
    lambda { @object.send(:Float, " ") }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError for a String that with an embedded space" do
    lambda { @object.send(:Float, "1 2") }.should raise_error(ArgumentError)
  end

  it "returns a value for a String with a leading space" do
    @object.send(:Float, " 1").should == 1.0
  end

  it "returns a value for a String with a trailing space" do
    @object.send(:Float, "1 ").should == 1.0
  end

  it "returns a value for a String with any leading whitespace" do
    @object.send(:Float, "\t\n1").should == 1.0
  end

  it "returns a value for a String with any trailing whitespace" do
    @object.send(:Float, "1\t\n").should == 1.0
  end

  %w(e E).each do |e|
    it "raises an ArgumentError if #{e} is the trailing character" do
      lambda { @object.send(:Float, "2#{e}") }.should raise_error(ArgumentError)
    end

    it "raises an ArgumentError if #{e} is the leading character" do
      lambda { @object.send(:Float, "#{e}2") }.should raise_error(ArgumentError)
    end

    it "returns Infinity for '2#{e}1000'" do
      @object.send(:Float, "2#{e}1000").should == Float::INFINITY
    end

    it "returns 0 for '2#{e}-1000'" do
      @object.send(:Float, "2#{e}-1000").should == 0
    end

    it "allows embedded _ in a number on either side of the #{e}" do
      @object.send(:Float, "2_0#{e}100").should == 20e100
      @object.send(:Float, "20#{e}1_00").should == 20e100
      @object.send(:Float, "2_0#{e}1_00").should == 20e100
    end

    it "raises an exception if a space is embedded on either side of the '#{e}'" do
      lambda { @object.send(:Float, "2 0#{e}100") }.should raise_error(ArgumentError)
      lambda { @object.send(:Float, "20#{e}1 00") }.should raise_error(ArgumentError)
    end

    it "raises an exception if there's a leading _ on either side of the '#{e}'" do
      lambda { @object.send(:Float, "_20#{e}100") }.should raise_error(ArgumentError)
      lambda { @object.send(:Float, "20#{e}_100") }.should raise_error(ArgumentError)
    end

    it "raises an exception if there's a trailing _ on either side of the '#{e}'" do
      lambda { @object.send(:Float, "20_#{e}100") }.should raise_error(ArgumentError)
      lambda { @object.send(:Float, "20#{e}100_") }.should raise_error(ArgumentError)
    end

    it "allows decimal points on the left side of the '#{e}'" do
      @object.send(:Float, "2.0#{e}2").should == 2e2
    end

    it "raises an ArgumentError if there's a decimal point on the right side of the '#{e}'" do
      lambda { @object.send(:Float, "20#{e}2.0") }.should raise_error(ArgumentError)
    end
  end

  describe "for hexadecimal literals with binary exponent" do
    %w(p P).each do |p|
      it "interprets the fractional part (on the left side of '#{p}') in hexadecimal" do
        @object.send(:Float, "0x10#{p}0").should == 16.0
      end

      it "interprets the exponent (on the right of '#{p}') in decimal" do
        @object.send(:Float, "0x1#{p}10").should == 1024.0
      end

      it "raises an ArgumentError if #{p} is the trailing character" do
        lambda { @object.send(:Float, "0x1#{p}") }.should raise_error(ArgumentError)
      end

      it "raises an ArgumentError if #{p} is the leading character" do
        lambda { @object.send(:Float, "0x#{p}1") }.should raise_error(ArgumentError)
      end

      it "returns Infinity for '0x1#{p}10000'" do
        @object.send(:Float, "0x1#{p}10000").should == Float::INFINITY
      end

      it "returns 0 for '0x1#{p}-10000'" do
        @object.send(:Float, "0x1#{p}-10000").should == 0
      end

      it "allows embedded _ in a number on either side of the #{p}" do
        @object.send(:Float, "0x1_0#{p}10").should == 16384.0
        @object.send(:Float, "0x10#{p}1_0").should == 16384.0
        @object.send(:Float, "0x1_0#{p}1_0").should == 16384.0
      end

      it "raises an exception if a space is embedded on either side of the '#{p}'" do
        lambda { @object.send(:Float, "0x1 0#{p}10") }.should raise_error(ArgumentError)
        lambda { @object.send(:Float, "0x10#{p}1 0") }.should raise_error(ArgumentError)
      end

      it "raises an exception if there's a leading _ on either side of the '#{p}'" do
        lambda { @object.send(:Float, "0x_10#{p}10") }.should raise_error(ArgumentError)
        lambda { @object.send(:Float, "0x10#{p}_10") }.should raise_error(ArgumentError)
      end

      it "raises an exception if there's a trailing _ on either side of the '#{p}'" do
        lambda { @object.send(:Float, "0x10_#{p}10") }.should raise_error(ArgumentError)
        lambda { @object.send(:Float, "0x10#{p}10_") }.should raise_error(ArgumentError)
      end

      it "allows hexadecimal points on the left side of the '#{p}'" do
        @object.send(:Float, "0x1.8#{p}0").should == 1.5
      end

      it "raises an ArgumentError if there's a decimal point on the right side of the '#{p}'" do
        lambda { @object.send(:Float, "0x1#{p}1.0") }.should raise_error(ArgumentError)
      end
    end
  end

  it "returns a Float that can be a parameter to #Float again" do
    float = @object.send(:Float, "10")
    @object.send(:Float, float).should == 10.0
  end

  it "otherwise, converts the given argument to a Float by calling #to_f" do
    (obj = mock('1.2')).should_receive(:to_f).once.and_return(1.2)
    obj.should_not_receive(:to_i)
    @object.send(:Float, obj).should == 1.2
  end

  it "returns the identical NaN if to_f is called and it returns NaN" do
    nan = nan_value
    (nan_to_f = mock('NaN')).should_receive(:to_f).once.and_return(nan)
    nan2 = @object.send(:Float, nan_to_f)
    nan2.nan?.should be_true
    nan2.should equal(nan)
  end

  it "returns the identical Infinity if to_f is called and it returns Infinity" do
    infinity = infinity_value
    (infinity_to_f = mock('Infinity')).should_receive(:to_f).once.and_return(infinity)
    infinity2 = @object.send(:Float, infinity_to_f)
    infinity2.should equal(infinity)
  end

  it "raises a TypeError if #to_f is not provided" do
    lambda { @object.send(:Float, mock('x')) }.should raise_error(TypeError)
  end

  it "raises a TypeError if #to_f returns a String" do
    (obj = mock('ha!')).should_receive(:to_f).once.and_return('ha!')
    lambda { @object.send(:Float, obj) }.should raise_error(TypeError)
  end

  it "raises a TypeError if #to_f returns an Integer" do
    (obj = mock('123')).should_receive(:to_f).once.and_return(123)
    lambda { @object.send(:Float, obj) }.should raise_error(TypeError)
  end

  it "raises a RangeError when passed a Complex argument" do
    c = Complex(2, 3)
    lambda { @object.send(:Float, c) }.should raise_error(RangeError)
  end
end

describe "Kernel.Float" do
  it_behaves_like :kernel_float, :Float, Kernel
end

describe "Kernel#Float" do
  it_behaves_like :kernel_float, :Float, Object.new
end

describe "Kernel#Float" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:Float)
  end
end
