require File.expand_path('../../../spec_helper', __FILE__)

require 'securerandom'

describe "SecureRandom.random_number" do
  it "generates a random positive number smaller then the positive integer argument" do
    (1..64).each do |idx|
      num = SecureRandom.random_number(idx)
      num.should be_kind_of(Fixnum)
      (0 <= num).should == true
      (num < idx).should == true
    end
  end

  it "generates a random (potentially bignum) integer value for bignum argument" do
    max = 12345678901234567890
    11.times do
      num = SecureRandom.random_number max
      num.should be_kind_of(Integer)
      (0 <= num).should == true
      (num < max).should == true
    end
  end

  it "generates a random float number between 0.0 and 1.0 if no argument provided" do
    64.times do
      num = SecureRandom.random_number
      num.should be_kind_of(Float)
      (0.0 <= num).should == true
      (num < 1.0).should == true
    end
  end

  ruby_version_is "2.3" do
    it "generates a random value in given (integer) range limits" do
      64.times do
        num = SecureRandom.random_number 11...13
        num.should be_kind_of(Integer)
        (11 <= num).should == true
        (num < 13).should == true
      end
    end

    it "generates a random value in given big (integer) range limits" do
      lower = 12345678901234567890
      upper = 12345678901234567890 + 5
      32.times do
        num = SecureRandom.random_number lower..upper
        num.should be_kind_of(Integer)
        (lower <= num).should == true
        (num <= upper).should == true
      end
    end

    it "generates a random value in given (float) range limits" do
      64.times do
        num = SecureRandom.random_number 0.6..0.9
        num.should be_kind_of(Float)
        (0.6 <= num).should == true
        (num <= 0.9).should == true
      end
    end
  end

  it "generates a random float number between 0.0 and 1.0 if argument is negative" do
    num = SecureRandom.random_number(-10)
    num.should be_kind_of(Float)
    (0.0 <= num).should == true
    (num < 1.0).should == true
  end

  it "generates a random float number between 0.0 and 1.0 if argument is negative float" do
    num = SecureRandom.random_number(-11.1)
    num.should be_kind_of(Float)
    (0.0 <= num).should == true
    (num < 1.0).should == true
  end

  it "generates different float numbers with subsequent invocations" do
    # quick and dirty check, but good enough
    values = []
    256.times do
      val = SecureRandom.random_number
      # make sure the random values are not repeating
      values.include?(val).should == false
      values << val
    end
  end

  it "raises ArgumentError if the argument is non-numeric" do
    lambda {
      SecureRandom.random_number(Object.new)
    }.should raise_error(ArgumentError)
  end
end
