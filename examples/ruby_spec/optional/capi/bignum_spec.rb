require File.expand_path('../spec_helper', __FILE__)

load_extension("bignum")

def ensure_bignum(n)
  raise "Bignum#coerce returned Fixnum" if fixnum_min <= n && n <= fixnum_max
  n
end

full_range_longs = (fixnum_max == 2**(0.size * 8 - 1) - 1)

describe "CApiBignumSpecs" do
  before :each do
    @s = CApiBignumSpecs.new

    if full_range_longs
      @max_long = 2**(0.size * 8 - 1) - 1
      @min_long = -@max_long - 1
      @max_ulong = ensure_bignum(2**(0.size * 8) - 1)
    else
      @max_long = ensure_bignum(2**(0.size * 8 - 1) - 1)
      @min_long = ensure_bignum(-@max_long - 1)
      @max_ulong = ensure_bignum(2**(0.size * 8) - 1)
    end
  end

  describe "rb_big2long" do
    unless full_range_longs
      it "converts a Bignum" do
        @s.rb_big2long(@max_long).should == @max_long
        @s.rb_big2long(@min_long).should == @min_long
      end
    end

    it "raises RangeError if passed Bignum overflow long" do
      lambda { @s.rb_big2long(ensure_bignum(@max_long + 1)) }.should raise_error(RangeError)
      lambda { @s.rb_big2long(ensure_bignum(@min_long - 1)) }.should raise_error(RangeError)
    end
  end

  describe "rb_big2ll" do
    unless full_range_longs
      it "converts a Bignum" do
        @s.rb_big2ll(@max_long).should == @max_long
        @s.rb_big2ll(@min_long).should == @min_long
      end
    end

    it "raises RangeError if passed Bignum overflow long" do
      lambda { @s.rb_big2ll(ensure_bignum(@max_long << 40)) }.should raise_error(RangeError)
      lambda { @s.rb_big2ll(ensure_bignum(@min_long << 40)) }.should raise_error(RangeError)
    end
  end

  describe "rb_big2ulong" do
    it "converts a Bignum" do
      @s.rb_big2ulong(@max_ulong).should == @max_ulong
    end

    unless full_range_longs
      it "wraps around if passed a negative bignum" do
        @s.rb_big2ulong(ensure_bignum(@min_long + 1)).should == -(@min_long - 1)
        @s.rb_big2ulong(ensure_bignum(@min_long)).should == -(@min_long)
      end
    end

    it "raises RangeError if passed Bignum overflow long" do
      lambda { @s.rb_big2ulong(ensure_bignum(@max_ulong + 1)) }.should raise_error(RangeError)
      lambda { @s.rb_big2ulong(ensure_bignum(@min_long - 1)) }.should raise_error(RangeError)
    end
  end

  describe "rb_big2dbl" do
    it "converts a Bignum to a double value" do
      @s.rb_big2dbl(ensure_bignum(Float::MAX.to_i)).eql?(Float::MAX).should == true
    end

    it "returns Infinity if the number is too big for a double" do
      huge_bignum = ensure_bignum(Float::MAX.to_i * 2)
      @s.rb_big2dbl(huge_bignum).should == infinity_value
    end

    it "returns -Infinity if the number is negative and too big for a double" do
      huge_bignum = -ensure_bignum(Float::MAX.to_i * 2)
      @s.rb_big2dbl(huge_bignum).should == -infinity_value
    end
  end

  describe "rb_big2str" do

    it "converts a Bignum to a string with base 10" do
      @s.rb_big2str(ensure_bignum(2**70), 10).eql?("1180591620717411303424").should == true
    end

    it "converts a Bignum to a string with a different base" do
      @s.rb_big2str(ensure_bignum(2**70), 16).eql?("400000000000000000").should == true
    end
  end

  describe "rb_big_cmp" do
    it "compares a Bignum with a Bignum" do
      @s.rb_big_cmp(bignum_value, bignum_value(1)).should == -1
    end

    it "compares a Bignum with a Fixnum" do
      @s.rb_big_cmp(bignum_value, 5).should == 1
    end
  end

  describe "rb_big_pack" do
    it "packs a Bignum into an unsigned long" do
      val = @s.rb_big_pack(@max_ulong)
      val.should == @max_ulong
    end

    platform_is wordsize: 64 do
      it "packs max_ulong into 2 ulongs to allow sign bit" do
        val = @s.rb_big_pack_length(@max_ulong)
        val.should == 2
        val = @s.rb_big_pack_array(@max_ulong, 2)
        val[0].should == @max_ulong
        val[1].should == 0
      end

      it "packs a 72-bit positive Bignum into 2 unsigned longs" do
        num = 2 ** 71
        val = @s.rb_big_pack_length(num)
        val.should == 2
      end

      it "packs a 72-bit positive Bignum into correct 2 longs" do
        num = 2 ** 71 + 1
        val = @s.rb_big_pack_array(num, 2)
        val[0].should == 1;
        val[1].should == 0x80;
      end

      it "packs a 72-bit negative Bignum into correct 2 longs" do
        num = -(2 ** 71 + 1)
        val = @s.rb_big_pack_array(num, @s.rb_big_pack_length(num))
        val[0].should == @max_ulong;
        val[1].should == @max_ulong - 0x80;
      end

      it "packs lower order bytes into least significant bytes of longs for positive bignum" do
        num = 0
        32.times { |i| num += i << (i * 8) }
        val = @s.rb_big_pack_array(num, @s.rb_big_pack_length(num))
        val.size.should == 4
        32.times do |i|
          a_long = val[i/8]
          a_byte = (a_long >> ((i % 8) * 8)) & 0xff
          a_byte.should ==  i
        end
      end

      it "packs lower order bytes into least significant bytes of longs for negative bignum" do
        num = 0
        32.times { |i| num += i << (i * 8) }
        num = -num
        val = @s.rb_big_pack_array(num, @s.rb_big_pack_length(num))
        val.size.should == 4
        expected_bytes = [0x00, 0xff, 0xfd, 0xfc, 0xfb, 0xfa, 0xf9, 0xf8,
                          0xf7, 0xf6, 0xf5, 0xf4, 0xf3, 0xf2, 0xf1, 0xf0,
                          0xef, 0xee, 0xed, 0xec, 0xeb, 0xea, 0xe9, 0xe8,
                          0xe7, 0xe6, 0xe5, 0xe4, 0xe3, 0xe2, 0xe1, 0xe0 ]
        32.times do |i|
          a_long = val[i/8]
          a_byte = (a_long >> ((i % 8) * 8)) & 0xff
          a_byte.should == expected_bytes[i]
        end
      end
    end
  end

  describe "rb_dbl2big" do
    it "returns a Fixnum for a Fixnum input value" do
      val = @s.rb_dbl2big(2)

      val.kind_of?(Fixnum).should == true
      val.should == 2
    end

    it "returns a Fixnum for a Float input value" do
      val = @s.rb_dbl2big(2.5)

      val.kind_of?(Fixnum).should == true
      val.should == 2
    end

    it "returns a Bignum for a large enough Float input value" do
      input = 219238102380912830988.5 # chosen by fair dice roll
      val   = @s.rb_dbl2big(input)

      val.kind_of?(Bignum).should == true

      # This value is based on the output of a simple C extension that uses
      # rb_dbl2big() to convert the above input value to a Bignum.
      val.should == 219238102380912836608
    end

    it "raises FloatDomainError for Infinity values" do
      inf = 1.0 / 0

      lambda { @s.rb_dbl2big(inf) }.should raise_error(FloatDomainError)
    end

    it "raises FloatDomainError for NaN values" do
      nan = 0.0 / 0

      lambda { @s.rb_dbl2big(nan) }.should raise_error(FloatDomainError)
    end
  end
end
