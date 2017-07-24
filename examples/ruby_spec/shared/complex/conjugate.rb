describe :complex_conjugate, shared: true do
  it "returns the complex conjugate: conj a + bi = a - bi" do
    Complex(3, 5).send(@method).should == Complex(3, -5)
    Complex(3, -5).send(@method).should == Complex(3, 5)
    Complex(-3.0, 5.2).send(@method).should be_close(Complex(-3.0, -5.2), TOLERANCE)
    Complex(3.0, -5.2).send(@method).should be_close(Complex(3.0, 5.2), TOLERANCE)
  end
end
