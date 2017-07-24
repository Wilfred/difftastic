require File.expand_path('../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib.adler32" do
  it "calculates Adler checksum for string" do
    Zlib.adler32("").should == 1
    Zlib.adler32(" ").should == 2162721
    Zlib.adler32("123456789").should == 152961502
    Zlib.adler32("!@#\{$\}%^&**()").should == 365495023
    Zlib.adler32("to be or not to be" * 22).should == 3979904837
    Zlib.adler32("0").should == 3211313
    Zlib.adler32((2**32).to_s).should == 193331739
    Zlib.adler32((2**64).to_s).should == 723452953
  end

  it "calculates Adler checksum for string and initial Adler value" do
    test_string = "This is a test string! How exciting!%?"
    Zlib.adler32(test_string, 0).should == 63900955
    Zlib.adler32(test_string, 1).should == 66391324
    Zlib.adler32(test_string, 2**8).should == 701435419
    Zlib.adler32(test_string, 2**16).should == 63966491
    lambda { Zlib.adler32(test_string, 2**128) }.should raise_error(RangeError)
  end

  it "calculates the Adler checksum for string and initial Adler value for Bignums" do
    test_string = "This is a test string! How exciting!%?"
    Zlib.adler32(test_string, 2**30).should == 1137642779
  end

  it "assumes that the initial value is given to adler, if adler is omitted" do
    orig_crc = Zlib.adler32
    Zlib.adler32("").should == Zlib.adler32("", orig_crc)
    Zlib.adler32(" ").should == Zlib.adler32(" ", orig_crc)
    Zlib.adler32("123456789").should == Zlib.adler32("123456789", orig_crc)
    Zlib.adler32("!@#\{$\}%^&**()").should == Zlib.adler32("!@#\{$\}%^&**()", orig_crc)
    Zlib.adler32("to be or not to be" * 22).should == Zlib.adler32("to be or not to be" * 22, orig_crc)
    Zlib.adler32("0").should == Zlib.adler32("0", orig_crc)
    Zlib.adler32((2**32).to_s).should == Zlib.adler32((2**32).to_s, orig_crc)
    Zlib.adler32((2**64).to_s).should == Zlib.adler32((2**64).to_s, orig_crc)
  end

  it "it returns the CRC initial value, if string is omitted" do
    Zlib.adler32.should == 1
  end

end
