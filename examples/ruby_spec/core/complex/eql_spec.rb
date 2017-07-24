require File.expand_path('../../../spec_helper', __FILE__)

describe "Complex#eql?" do
  it "returns false if other is not Complex" do
    Complex(1).eql?(1).should be_false
  end

  it "returns true when the respective parts are of the same classes and self == other" do
    Complex(1, 2).eql?(Complex(1, 2)).should be_true
  end

  it "returns false when the real parts are of different classes" do
    Complex(1).eql?(Complex(1.0)).should be_false
  end

  it "returns false when the imaginary parts are of different classes" do
    Complex(1, 2).eql?(Complex(1, 2.0)).should be_false
  end

  it "returns false when self == other is false" do
    Complex(1, 2).eql?(Complex(2, 3)).should be_false
  end

  it "does NOT send #eql? to real or imaginary parts" do
    real = mock_numeric('real')
    imag = mock_numeric('imag')
    real.should_not_receive(:eql?)
    imag.should_not_receive(:eql?)
    Complex(real, imag).eql?(Complex(real, imag)).should be_true
  end
end
