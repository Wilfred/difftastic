require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_abs2, shared: true do
  it "returns the sum of the squares of the real and imaginary parts" do
    Complex(1, -2).abs2.should == 1 + 4
    Complex(-0.1, 0.2).abs2.should be_close(0.01 + 0.04, TOLERANCE)
    # Guard against Mathn library
    conflicts_with :Prime do
      Complex(0).abs2.should == 0
    end
  end
end
