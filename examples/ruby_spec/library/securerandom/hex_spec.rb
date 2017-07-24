require File.expand_path('../../../spec_helper', __FILE__)

require 'securerandom'

describe "SecureRandom.hex" do
  it "generates a random hex string of length twice the specified argement" do
    (1..64).each do |idx|
      hex = SecureRandom.hex(idx)
      hex.should be_kind_of(String)
      hex.length.should == 2 * idx
    end

    base64 = SecureRandom.hex(5.5)
    base64.should be_kind_of(String)
    base64.length.should eql(10)
  end

  it "returns an empty string when argument is 0" do
    SecureRandom.hex(0).should == ""
  end

  it "generates different hex strings with subsequent invocations" do
    # quick and dirty check, but good enough
    values = []
    256.times do
      hex = SecureRandom.hex
      # make sure the random values are not repeating
      values.include?(hex).should == false
      values << hex
    end
  end

  it "generates a random hex string of length 32 if no argument is provided" do
    SecureRandom.hex.should be_kind_of(String)
    SecureRandom.hex.length.should == 32
  end

  it "treats nil agrument as default one and generates a random hex string of length 32" do
    SecureRandom.hex(nil).should be_kind_of(String)
    SecureRandom.hex(nil).length.should == 32
  end

  it "raises ArgumentError on negative arguments" do
    lambda {
      SecureRandom.hex(-1)
    }.should raise_error(ArgumentError)
  end

  it "tries to convert the passed argument to an Integer using #to_int" do
    obj = mock("to_int")
    obj.should_receive(:to_int).and_return(5)
    SecureRandom.hex(obj).size.should eql(10)
  end
end
