describe :complex_arg, shared: true do
  it "returns the argument -- i.e., the angle from (1, 0) in the complex plane" do
    two_pi = 2 * Math::PI
    (Complex(1, 0).send(@method) % two_pi).should be_close(0, TOLERANCE)
    (Complex(0, 2).send(@method) % two_pi).should be_close(Math::PI * 0.5, TOLERANCE)
    (Complex(-100, 0).send(@method) % two_pi).should be_close(Math::PI, TOLERANCE)
    (Complex(0, -75.3).send(@method) % two_pi).should be_close(Math::PI * 1.5, TOLERANCE)
  end
end
