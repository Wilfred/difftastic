require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_divide_rat, shared: true do
  it "returns self divided by other as a Rational" do
    Rational(3, 4).send(@method, Rational(3, 4)).should eql(Rational(1, 1))
    Rational(2, 4).send(@method, Rational(1, 4)).should eql(Rational(2, 1))

    Rational(2, 4).send(@method, 2).should == Rational(1, 4)
    Rational(6, 7).send(@method, -2).should == Rational(-3, 7)
  end

  it "raises a ZeroDivisionError when passed a Rational with a numerator of 0" do
    lambda { Rational(3, 4).send(@method, Rational(0, 1)) }.should raise_error(ZeroDivisionError)
  end
end

describe :rational_divide_int, shared: true do
  it "returns self divided by other as a Rational" do
    Rational(3, 4).send(@method, 2).should eql(Rational(3, 8))
    Rational(2, 4).send(@method, 2).should eql(Rational(1, 4))
    Rational(6, 7).send(@method, -2).should eql(Rational(-3, 7))
  end

  it "raises a ZeroDivisionError when passed 0" do
    lambda { Rational(3, 4).send(@method, 0) }.should raise_error(ZeroDivisionError)
  end
end

describe :rational_divide_float, shared: true do
  it "returns self divided by other as a Float" do
    Rational(3, 4).send(@method, 0.75).should eql(1.0)
    Rational(3, 4).send(@method, 0.25).should eql(3.0)
    Rational(3, 4).send(@method, 0.3).should eql(2.5)

    Rational(-3, 4).send(@method, 0.3).should eql(-2.5)
    Rational(3, -4).send(@method, 0.3).should eql(-2.5)
    Rational(3, 4).send(@method, -0.3).should eql(-2.5)
  end

  it "returns infinity when passed 0" do
    Rational(3, 4).send(@method, 0.0).infinite?.should eql(1)
    Rational(-3, -4).send(@method, 0.0).infinite?.should eql(1)

    Rational(-3, 4).send(@method, 0.0).infinite?.should eql(-1)
    Rational(3, -4).send(@method, 0.0).infinite?.should eql(-1)
  end
end

describe :rational_divide, shared: true do
  it "calls #coerce on the passed argument with self" do
    rational = Rational(3, 4)
    obj = mock("Object")
    obj.should_receive(:coerce).with(rational).and_return([1, 2])

    rational.send(@method, obj)
  end

  it "calls #/ on the coerced Rational with the coerced Object" do
    rational = Rational(3, 4)

    coerced_rational = mock("Coerced Rational")
    coerced_rational.should_receive(:/).and_return(:result)

    coerced_obj = mock("Coerced Object")

    obj = mock("Object")
    obj.should_receive(:coerce).and_return([coerced_rational, coerced_obj])

    rational.send(@method, obj).should == :result
  end
end
