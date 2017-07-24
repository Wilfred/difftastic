require 'matrix'

describe :trace, shared: true do
  it "returns the sum of diagonal elements in a square Matrix" do
    Matrix[[7,6], [3,9]].trace.should == 16
  end

  it "returns the sum of diagonal elements in a rectangular Matrix" do
    lambda{ Matrix[[1,2,3], [4,5,6]].trace}.should raise_error(Matrix::ErrDimensionMismatch)
  end

end
