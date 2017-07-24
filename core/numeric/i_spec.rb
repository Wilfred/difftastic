require File.expand_path('../../../spec_helper', __FILE__)

describe "Numeric#i" do
  it "returns a Complex object" do
    34.i.should be_an_instance_of(Complex)
  end

  it "sets the real part to 0" do
    7342.i.real.should == 0
  end

  it "sets the imaginary part to self" do
    62.81.i.imag.should == 62.81
  end
end
