require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_cmp_rat, shared: true do
  it "returns 1 when self is greater than the passed argument" do
    (Rational(4, 4) <=> Rational(3, 4)).should equal(1)
    (Rational(-3, 4) <=> Rational(-4, 4)).should equal(1)
  end

  it "returns 0 when self is equal to the passed argument" do
    (Rational(4, 4) <=> Rational(4, 4)).should equal(0)
    (Rational(-3, 4) <=> Rational(-3, 4)).should equal(0)
  end

  it "returns -1 when self is less than the passed argument" do
    (Rational(3, 4) <=> Rational(4, 4)).should equal(-1)
    (Rational(-4, 4) <=> Rational(-3, 4)).should equal(-1)
  end
end

describe :rational_cmp_int, shared: true do
  it "returns 1 when self is greater than the passed argument" do
    (Rational(4, 4) <=> 0).should equal(1)
    (Rational(4, 4) <=> -10).should equal(1)
    (Rational(-3, 4) <=> -1).should equal(1)
  end

  it "returns 0 when self is equal to the passed argument" do
    (Rational(4, 4) <=> 1).should equal(0)
    (Rational(-8, 4) <=> -2).should equal(0)
  end

  it "returns -1 when self is less than the passed argument" do
    (Rational(3, 4) <=> 1).should equal(-1)
    (Rational(-4, 4) <=> 0).should equal(-1)
  end
end

describe :rational_cmp_float, shared: true do
  it "returns 1 when self is greater than the passed argument" do
    (Rational(4, 4) <=> 0.5).should equal(1)
    (Rational(4, 4) <=> -1.5).should equal(1)
    (Rational(-3, 4) <=> -0.8).should equal(1)
  end

  it "returns 0 when self is equal to the passed argument" do
    (Rational(4, 4) <=> 1.0).should equal(0)
    (Rational(-6, 4) <=> -1.5).should equal(0)
  end

  it "returns -1 when self is less than the passed argument" do
    (Rational(3, 4) <=> 1.2).should equal(-1)
    (Rational(-4, 4) <=> 0.5).should equal(-1)
  end
end

describe :rational_cmp_coerce, shared: true do
  it "calls #coerce on the passed argument with self" do
    rational = Rational(3, 4)

    obj = mock("Object")
    obj.should_receive(:coerce).with(rational).and_return([1, 2])

    rational <=> obj
  end

  it "calls #<=> on the coerced Rational with the coerced Object" do
    rational = Rational(3, 4)

    coerced_rational = mock("Coerced Rational")
    coerced_rational.should_receive(:<=>).and_return(:result)

    coerced_obj = mock("Coerced Object")

    obj = mock("Object")
    obj.should_receive(:coerce).and_return([coerced_rational, coerced_obj])

    (rational <=> obj).should == :result
  end
end

describe :rational_cmp_other, shared: true do
  it "returns nil" do
    (Rational <=> mock("Object")).should be_nil
  end
end
