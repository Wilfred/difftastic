require File.expand_path('../../../spec_helper', __FILE__)

describe "Numeric#-@" do
  it "returns the same value with opposite sign (integers)" do
    0.send(:-@).should == 0
    100.send(:-@).should == -100
    -100.send(:-@).should == 100
  end

  it "returns the same value with opposite sign (floats)" do
    34.56.send(:-@).should == -34.56
    -34.56.send(:-@).should == 34.56
  end

  it "returns the same value with opposite sign (two complement)" do
    2147483648.send(:-@).should == -2147483648
    -2147483648.send(:-@).should == 2147483648
    9223372036854775808.send(:-@).should == -9223372036854775808
    -9223372036854775808.send(:-@).should == 9223372036854775808
  end

  describe "with a Numeric subclass" do
    it "calls #coerce(0) on self, then subtracts the second element of the result from the first" do
      ten  = mock_numeric('10')
      zero = mock_numeric('0')
      ten.should_receive(:coerce).with(0).and_return([zero, ten])
      zero.should_receive(:-).with(ten).and_return(-10)
      ten.send(:-@).should == -10
    end
  end
end
