require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_multiply_rat, shared: true do
  it "returns self divided by other as a Rational" do
    (Rational(3, 4) * Rational(3, 4)).should eql(Rational(9, 16))
    (Rational(2, 4) * Rational(1, 4)).should eql(Rational(1, 8))

    (Rational(3, 4) * Rational(0, 1)).should eql(Rational(0, 4))
  end
end

describe :rational_multiply_int, shared: true do
  it "returns self divided by other as a Rational" do
    (Rational(3, 4) * 2).should eql(Rational(3, 2))
    (Rational(2, 4) * 2).should eql(Rational(1, 1))
    (Rational(6, 7) * -2).should eql(Rational(-12, 7))

    (Rational(3, 4) * 0).should eql(Rational(0, 4))
  end
end

describe :rational_multiply_float, shared: true do
  it "returns self divided by other as a Float" do
    (Rational(3, 4) * 0.75).should eql(0.5625)
    (Rational(3, 4) * 0.25).should eql(0.1875)
    (Rational(3, 4) * 0.3).should be_close(0.225, TOLERANCE)

    (Rational(-3, 4) * 0.3).should be_close(-0.225, TOLERANCE)
    (Rational(3, -4) * 0.3).should be_close(-0.225, TOLERANCE)
    (Rational(3, 4) * -0.3).should be_close(-0.225, TOLERANCE)

    (Rational(3, 4) * 0.0).should eql(0.0)
    (Rational(-3, -4) * 0.0).should eql(0.0)

    (Rational(-3, 4) * 0.0).should eql(0.0)
    (Rational(3, -4) * 0.0).should eql(0.0)
  end
end

describe :rational_multiply, shared: true do
  it "calls #coerce on the passed argument with self" do
    rational = Rational(3, 4)
    obj = mock("Object")
    obj.should_receive(:coerce).with(rational).and_return([1, 2])

    rational * obj
  end

  it "calls #* on the coerced Rational with the coerced Object" do
    rational = Rational(3, 4)

    coerced_rational = mock("Coerced Rational")
    coerced_rational.should_receive(:*).and_return(:result)

    coerced_obj = mock("Coerced Object")

    obj = mock("Object")
    obj.should_receive(:coerce).and_return([coerced_rational, coerced_obj])

    (rational * obj).should == :result
  end
end
