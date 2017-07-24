require File.expand_path('../../../spec_helper', __FILE__)

describe "Complex#-@" do
  it "sends #-@ to the real and imaginary parts and returns a Complex with the resulting respective parts" do
    real = mock_numeric('real')
    imag = mock_numeric('imag')
    real.should_receive(:-@).and_return(-1)
    imag.should_receive(:-@).and_return(-2)
    Complex(real, imag).send(:-@).should == Complex(-1, -2)
  end
end
