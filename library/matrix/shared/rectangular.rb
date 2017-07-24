require File.expand_path('../../fixtures/classes', __FILE__)
require 'matrix'

describe :matrix_rectangular, shared: true do
  it "returns [receiver.real, receiver.imag]" do
    m = Matrix[ [1.2, Complex(1,2)], [Complex(-2,0.42), 4] ]
    m.send(@method).should == [m.real, m.imag]

    m = Matrix.empty(3, 0)
    m.send(@method).should == [m.real, m.imag]
  end

  describe "for a subclass of Matrix" do
    it "returns instances of that subclass" do
      MatrixSub.ins.send(@method).each{|m| m.should be_an_instance_of(MatrixSub) }
    end
  end
end
