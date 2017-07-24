require File.expand_path('../../../spec_helper', __FILE__)

require 'securerandom'

describe "SecureRandom.random_bytes" do
  it "generates a random binary string of length 16 if no argument is provided" do
    bytes = SecureRandom.random_bytes
    bytes.should be_kind_of(String)
    bytes.length.should == 16
  end

  it "generates a random binary string of length 16 if argument is nil" do
    bytes = SecureRandom.random_bytes(nil)
    bytes.should be_kind_of(String)
    bytes.length.should == 16
  end

  it "generates a random binary string of specified length" do
    (1..64).each do |idx|
      bytes = SecureRandom.random_bytes(idx)
      bytes.should be_kind_of(String)
      bytes.length.should == idx
    end

    SecureRandom.random_bytes(2.2).length.should eql(2)
  end

  it "generates different binary strings with subsequent invocations" do
    # quick and dirty check, but good enough
    values = []
    256.times do
      val = SecureRandom.random_bytes
      # make sure the random bytes are not repeating
      values.include?(val).should == false
      values << val
    end
  end

  it "raises ArgumentError on negative arguments" do
    lambda {
      SecureRandom.random_bytes(-1)
    }.should raise_error(ArgumentError)
  end

  it "tries to convert the passed argument to an Integer using #to_int" do
    obj = mock("to_int")
    obj.should_receive(:to_int).and_return(5)
    SecureRandom.random_bytes(obj).size.should eql(5)
  end
end
