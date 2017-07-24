require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#sprintf" do
  it "is a private method" do
    Kernel.should have_private_instance_method(:sprintf)
  end

  it "treats nil arguments as zero-width strings in %s slots" do
    sprintf("%s%d%s%s", nil, 4, 'a', 'b').should == '4ab'
  end

  it "passes some tests for positive %x" do
    sprintf("%x", 123).should == "7b"
    sprintf("%0x", 123).should == "7b"
    sprintf("% x", 123).should == " 7b"
    sprintf("%+x", 123).should == "+7b"
    sprintf("%+0x", 123).should == "+7b"
    sprintf("%+ x", 123).should == "+7b"
    sprintf("% 0x", 123).should == " 7b"

    sprintf("%#x", 123).should == "0x7b"
    sprintf("%#0x", 123).should == "0x7b"
    sprintf("%# x", 123).should == " 0x7b"
    sprintf("%#+x", 123).should == "+0x7b"
    sprintf("%#+0x", 123).should == "+0x7b"
    sprintf("%#+ x", 123).should == "+0x7b"
    sprintf("%# 0x", 123).should == " 0x7b"

    sprintf("%8x", 123).should == "      7b"
    sprintf("%08x", 123).should == "0000007b"
    sprintf("% 8x", 123).should == "      7b"
    sprintf("%+8x", 123).should == "     +7b"
    sprintf("%+08x", 123).should == "+000007b"
    sprintf("%+ 8x", 123).should == "     +7b"
    sprintf("% 08x", 123).should == " 000007b"

    sprintf("%#8x", 123).should == "    0x7b"
    sprintf("%#08x", 123).should == "0x00007b"
    sprintf("%# 8x", 123).should == "    0x7b"
    sprintf("%#+8x", 123).should == "   +0x7b"
    sprintf("%#+08x", 123).should == "+0x0007b"
    sprintf("%#+ 8x", 123).should == "   +0x7b"
    sprintf("%# 08x", 123).should == " 0x0007b"

    sprintf("%8.10x", 123).should == "000000007b"
    sprintf("%08.10x", 123).should == "000000007b"
    sprintf("% 8.10x", 123).should == " 000000007b"
    sprintf("%+8.10x", 123).should == "+000000007b"
    sprintf("%+08.10x", 123).should == "+000000007b"
    sprintf("%+ 8.10x", 123).should == "+000000007b"
    sprintf("% 08.10x", 123).should == " 000000007b"

    sprintf("%10.8x", 123).should == "  0000007b"
    sprintf("%010.8x", 123).should == "  0000007b"
    sprintf("% 10.8x", 123).should == "  0000007b"
    sprintf("%+10.8x", 123).should == " +0000007b"
    sprintf("%+010.8x", 123).should == " +0000007b"
    sprintf("%+ 10.8x", 123).should == " +0000007b"
    sprintf("% 010.8x", 123).should == "  0000007b"
  end

  describe "with format string that contains %{} sections" do
    it "substitutes values for named references" do
      sprintf("%{foo}f", {foo: 1}).should == "1f"
    end

    it "raises KeyError when no matching key is in second argument" do
      lambda { sprintf("%{foo}f", {}) }.should raise_error(KeyError)
    end
  end

  describe "with format string that contains %<> sections" do
    it "formats values for named references" do
      sprintf("%<foo>f", {foo: 1}).should == "1.000000"
    end

    it "raises KeyError when no matching key is in second argument" do
      lambda { sprintf("%<foo>f", {}) }.should raise_error(KeyError)
    end

    it "raises ArgumentError if missing second named argument" do
      lambda { sprintf("%<key><foo>d", {key: 1}) }.should raise_error(ArgumentError)
    end
  end

  describe "with negative values" do
    describe "with format %x" do
      it "precedes the number with '..'" do
        sprintf("%0x", -123).should == "..f85"
        sprintf("%#0x", -123).should == "0x..f85"
        sprintf("%08x", -123).should == "..ffff85"
        sprintf("%#08x", -123).should == "0x..ff85"
        sprintf("%8.10x", -123).should == "..ffffff85"
        sprintf("%08.10x", -123).should == "..ffffff85"
        sprintf("%10.8x", -123).should == "  ..ffff85"
        sprintf("%010.8x", -123).should == "  ..ffff85"
      end
    end

    describe "with format %b or %B" do
      it "precedes the number with '..'" do
        sprintf("%.7b", -5).should == "..11011"
        sprintf("%.7B", -5).should == "..11011"
        sprintf("%0b", -5).should == "..1011"
      end
    end
  end

  it "passes some tests for negative %x" do
    sprintf("%x", -123).should == "..f85"
    sprintf("% x", -123).should == "-7b"
    sprintf("%+x", -123).should == "-7b"
    sprintf("%+0x", -123).should == "-7b"
    sprintf("%+ x", -123).should == "-7b"
    sprintf("% 0x", -123).should == "-7b"

    sprintf("%#x", -123).should == "0x..f85"
    sprintf("%# x", -123).should == "-0x7b"
    sprintf("%#+x", -123).should == "-0x7b"
    sprintf("%#+0x", -123).should == "-0x7b"
    sprintf("%#+ x", -123).should == "-0x7b"
    sprintf("%# 0x", -123).should == "-0x7b"

    sprintf("%8x", -123).should == "   ..f85"
    sprintf("% 8x", -123).should == "     -7b"
    sprintf("%+8x", -123).should == "     -7b"
    sprintf("%+08x", -123).should == "-000007b"
    sprintf("%+ 8x", -123).should == "     -7b"
    sprintf("% 08x", -123).should == "-000007b"

    sprintf("%#8x", -123).should == " 0x..f85"
    sprintf("%# 8x", -123).should == "   -0x7b"
    sprintf("%#+8x", -123).should == "   -0x7b"
    sprintf("%#+08x", -123).should == "-0x0007b"
    sprintf("%#+ 8x", -123).should == "   -0x7b"
    sprintf("%# 08x", -123).should == "-0x0007b"

    sprintf("% 8.10x", -123).should == "-000000007b"
    sprintf("%+8.10x", -123).should == "-000000007b"
    sprintf("%+08.10x", -123).should == "-000000007b"
    sprintf("%+ 8.10x", -123).should == "-000000007b"
    sprintf("% 08.10x", -123).should == "-000000007b"

    sprintf("% 10.8x", -123).should == " -0000007b"
    sprintf("%+10.8x", -123).should == " -0000007b"
    sprintf("%+010.8x", -123).should == " -0000007b"
    sprintf("%+ 10.8x", -123).should == " -0000007b"
    sprintf("% 010.8x", -123).should == " -0000007b"
  end

  it "passes some tests for negative %u" do
    sprintf("%u", -123).should == "-123"
    sprintf("%0u", -123).should == "-123"
    sprintf("%#u", -123).should == "-123"
    sprintf("%#0u", -123).should == "-123"
    sprintf("%8u", -123).should == "    -123"
    sprintf("%08u", -123).should == "-0000123"
    sprintf("%#8u", -123).should == "    -123"
    sprintf("%#08u", -123).should == "-0000123"

    sprintf("%30u", -123).should == "                          -123"
    sprintf("%030u", -123).should == "-00000000000000000000000000123"

    sprintf("%#30u", -123).should == "                          -123"
    sprintf("%#030u", -123).should == "-00000000000000000000000000123"

    sprintf("%24.30u", -123).should == "-000000000000000000000000000123"
    sprintf("%024.30u", -123).should == "-000000000000000000000000000123"

    sprintf("%#24.30u", -123).should == "-000000000000000000000000000123"
    sprintf("%#024.30u", -123).should == "-000000000000000000000000000123"


    sprintf("%30.24u", -123).should == "     -000000000000000000000123"
    sprintf("%030.24u", -123).should == "     -000000000000000000000123"

    sprintf("%#30.24u", -123).should == "     -000000000000000000000123"
    sprintf("%#030.24u", -123).should == "     -000000000000000000000123"
  end

  it "passes some tests for positive %u" do
    sprintf("%30u", 123).should == "                           123"
    sprintf("%030u", 123).should == "000000000000000000000000000123"

    sprintf("%#30u", 123).should == "                           123"
    sprintf("%#030u", 123).should == "000000000000000000000000000123"

    sprintf("%24.30u", 123).should == "000000000000000000000000000123"
    sprintf("%024.30u", 123).should == "000000000000000000000000000123"

    sprintf("%#24.30u", 123).should == "000000000000000000000000000123"
    sprintf("%#024.30u", 123).should == "000000000000000000000000000123"

    sprintf("%30.24u", 123).should == "      000000000000000000000123"
    sprintf("%030.24u", 123).should == "      000000000000000000000123"

    sprintf("%#30.24u", 123).should == "      000000000000000000000123"
    sprintf("%#030.24u", 123).should == "      000000000000000000000123"
  end

  it "passes some tests for positive %d" do
    sprintf("%30d", 123).should == "                           123"
    sprintf("%030d", 123).should == "000000000000000000000000000123"

    sprintf("%#30d", 123).should == "                           123"
    sprintf("%#030d", 123).should == "000000000000000000000000000123"

    sprintf("%24.30d", 123).should == "000000000000000000000000000123"
    sprintf("%024.30d", 123).should == "000000000000000000000000000123"

    sprintf("%#24.30d", 123).should == "000000000000000000000000000123"
    sprintf("%#024.30d", 123).should == "000000000000000000000000000123"

    sprintf("%30.24d", 123).should == "      000000000000000000000123"
    sprintf("%030.24d", 123).should == "      000000000000000000000123"

    sprintf("%#30.24d", 123).should == "      000000000000000000000123"
    sprintf("%#030.24d", 123).should == "      000000000000000000000123"
  end

  it "passes some tests for positive %f" do
    sprintf("%30f", 123.1).should == "                    123.100000"
    sprintf("%030f", 123.1).should == "00000000000000000000123.100000"

    sprintf("%#30f", 123.1).should == "                    123.100000"
    sprintf("%#030f", 123.1).should == "00000000000000000000123.100000"

    sprintf("%10.4f", 123.1).should == "  123.1000"
    sprintf("%010.4f", 123.1).should == "00123.1000"

    sprintf("%10.0f", 123.1).should == "       123"
    sprintf("%010.0f", 123.1).should == "0000000123"
  end

  it "passes some tests for negative %f" do
    sprintf("%30f", -123.5).should == "                   -123.500000"
    sprintf("%030f", -123.5).should == "-0000000000000000000123.500000"

    sprintf("%#30f", -123.5).should == "                   -123.500000"
    sprintf("%#030f", -123.5).should == "-0000000000000000000123.500000"

    sprintf("%10.4f", -123.5).should == " -123.5000"
    sprintf("%010.4f", -123.5).should == "-0123.5000"

    sprintf("%10.0f", -123.5).should == "      -124"
    sprintf("%010.0f", -123.5).should == "-000000124"
  end

  it "passes some tests for infinite and nan" do
    sprintf("%f", Float::INFINITY).should == "Inf"
    sprintf("%f", -Float::INFINITY).should == "-Inf"
    sprintf("%f", Float::NAN).should == "NaN"

    sprintf("%10f", Float::INFINITY).should == "       Inf"
    sprintf("%10f", -Float::INFINITY).should == "      -Inf"
    sprintf("%10f", Float::NAN).should == "       NaN"
  end

  it "passes kstephens's tests" do
    sprintf("%*1$.*2$3$d", 10, 5, 1).should == "     00001"
    sprintf("%b", 0).should == "0"
    sprintf("%B", 0).should == "0"
    sprintf("%b", -5).should == "..1011"
    sprintf("%B", -5).should == "..1011"
    sprintf("%+b", -5).should == "-101"
    sprintf("%+b", 10).should == "+1010"
    sprintf("%+b", 0).should == "+0"
    sprintf("%+o", -5).should == "-5"
    sprintf("%+o", 10).should == "+12"
    sprintf("%+o", 0).should == "+0"
    sprintf("%+d", -5).should == "-5"
    sprintf("%+d", 10).should == "+10"
    sprintf("%+d", 0).should == "+0"
    sprintf("%+x", -15).should == "-f"
    sprintf("%+x", 100).should == "+64"
    sprintf("%+x", 0).should == "+0"
    sprintf("%+X", -15).should == "-F"
    sprintf("%+X", 100).should == "+64"
    sprintf("%+X", 0).should == "+0"
    sprintf("=%02X", 1).should == "=01"
    sprintf("%+03d", 0).should == "+00"
    sprintf("%+03d", 5).should == "+05"
    sprintf("%+03d", -5).should == "-05"
    sprintf("%+03d", 12).should == "+12"
    sprintf("%+03d", -12).should == "-12"
    sprintf("%+03d", 123).should == "+123"
    sprintf("%+03d", -123).should == "-123"
  end

  with_feature :encoding do
    it "returns a String in the same encoding as the format String if compatible" do
      format = "%.2f %4s".force_encoding(Encoding::KOI8_U)
      result = sprintf(format, 1.2, "dogs")
      result.encoding.should equal(Encoding::KOI8_U)
    end

    it "returns a String in the argument encoding if format encoding is more restrictive" do
      format = "foo %s".force_encoding(Encoding::US_ASCII)
      arg = "b\303\274r".force_encoding(Encoding::UTF_8)

      result = sprintf(format, arg)
      result.encoding.should equal(Encoding::UTF_8)
    end
  end
end

describe "Kernel.sprintf" do
  it "needs to be reviewed for spec completeness"
end
