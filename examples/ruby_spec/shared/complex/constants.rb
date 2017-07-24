require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_I, shared: true do
  it "is Complex(0, 1)" do
    Complex::I.should eql(Complex(0, 1))
  end
end
