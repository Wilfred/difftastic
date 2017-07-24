require File.expand_path('../../../spec_helper', __FILE__)
require 'zlib'

describe "Zlib.crc32" do
  it "calculates CRC checksum for string" do
    Zlib.crc32("").should == 0
    Zlib.crc32(" ").should == 3916222277
    Zlib.crc32("123456789").should == 3421780262
    Zlib.crc32("!@#\{$\}%^&**()").should == 2824518887
    Zlib.crc32("to be or not to be" * 22).should == 1832379978
    Zlib.crc32("0").should == 4108050209
    Zlib.crc32((2**32).to_s).should == 3267533297
    Zlib.crc32((2**64).to_s).should == 653721760
  end

  it "calculates CRC checksum for string and initial CRC value" do
    test_string = "This is a test string! How exciting!%?"
    # Zlib.crc32(test_string, -2**28).should == 3230195786
    # Zlib.crc32(test_string, -2**20).should == 2770207303
    # Zlib.crc32(test_string, -2**16).should == 2299432960
    # Zlib.crc32(test_string, -2**8).should == 861809849
    # Zlib.crc32(test_string, -1).should == 2170124077
    Zlib.crc32(test_string, 0).should == 3864990561
    Zlib.crc32(test_string, 1).should == 1809313411
    Zlib.crc32(test_string, 2**8).should == 1722745982
    Zlib.crc32(test_string, 2**16).should == 1932511220
    lambda { Zlib.crc32(test_string, 2**128) }.should raise_error(RangeError)
  end

  it "calculates the CRC checksum for string and initial CRC value for Bignums" do
    test_string = "This is a test string! How exciting!%?"
    # Zlib.crc32(test_string, -2**30).should == 277228695
    Zlib.crc32(test_string, 2**30).should == 46597132
  end

  it "assumes that the initial value is given to crc, if crc is omitted" do
    orig_crc = Zlib.crc32
    Zlib.crc32("").should == Zlib.crc32("", orig_crc)
    Zlib.crc32(" ").should == Zlib.crc32(" ", orig_crc)
    Zlib.crc32("123456789").should == Zlib.crc32("123456789", orig_crc)
    Zlib.crc32("!@#\{$\}%^&**()").should == Zlib.crc32("!@#\{$\}%^&**()", orig_crc)
    Zlib.crc32("to be or not to be" * 22).should == Zlib.crc32("to be or not to be" * 22, orig_crc)
    Zlib.crc32("0").should == Zlib.crc32("0", orig_crc)
    Zlib.crc32((2**32).to_s).should == Zlib.crc32((2**32).to_s, orig_crc)
    Zlib.crc32((2**64).to_s).should == Zlib.crc32((2**64).to_s, orig_crc)
  end

  it "it returns the CRC initial value, if string is omitted" do
    Zlib.crc32.should == 0
  end

end
