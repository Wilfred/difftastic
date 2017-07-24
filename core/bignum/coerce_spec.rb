require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#coerce" do
  it "coerces other to a Bignum and returns [other, self] when passed a Fixnum" do
    a = bignum_value
    ary = a.coerce(2)

    ary[0].should be_kind_of(Bignum)
    ary[1].should be_kind_of(Bignum)
    ary.should == [2, a]
  end

  it "returns [other, self] when passed a Bignum" do
    a = bignum_value
    b = bignum_value
    ary = a.coerce(b)

    ary[0].should be_kind_of(Bignum)
    ary[1].should be_kind_of(Bignum)
    ary.should == [b, a]
  end

  it "raises a TypeError when not passed a Fixnum or Bignum" do
    a = bignum_value

    lambda { a.coerce(nil)         }.should raise_error(TypeError)
    lambda { a.coerce(mock('str')) }.should raise_error(TypeError)
    lambda { a.coerce(1..4)        }.should raise_error(TypeError)
    lambda { a.coerce(:test)       }.should raise_error(TypeError)
  end

  ruby_version_is ""..."2.4" do
    it "raises a TypeError when passed a String" do
      a = bignum_value
      lambda { a.coerce("123") }.should raise_error(TypeError)
    end

    it "raises a TypeError when passed a Float" do
      a = bignum_value
      lambda { a.coerce(12.3) }.should raise_error(TypeError)
    end
  end

  ruby_version_is "2.4" do
    it "coerces both values to Floats and returns [other, self] when passed a Float" do
      a = bignum_value
      a.coerce(1.2).should == [1.2, a.to_f]
    end

    it "coerces both values to Floats and returns [other, self] when passed a String" do
      a = bignum_value
      a.coerce("123").should == [123.0, a.to_f]
    end

    it "calls #to_f to coerce other to a Float" do
      b = mock("bignum value")
      b.should_receive(:to_f).and_return(1.2)

      a = bignum_value
      ary = a.coerce(b)

      ary.should == [1.2, a.to_f]
    end
  end
end
