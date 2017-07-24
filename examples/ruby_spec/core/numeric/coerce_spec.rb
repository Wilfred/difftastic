require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Numeric#coerce" do
  before :each do
    @obj = NumericSpecs::Subclass.new
    @obj.should_receive(:to_f).any_number_of_times.and_return(10.5)
  end

  it "returns [other, self] if self and other are instances of the same class" do
    a = NumericSpecs::Subclass.new
    b = NumericSpecs::Subclass.new

    a.coerce(b).should == [b, a]
  end

  # I (emp) think that this behavior is actually a bug in MRI. It's here as documentation
  # of the behavior until we find out if it's a bug.
  quarantine! do
    it "considers the presense of a metaclass when checking the class of the objects" do
      a = NumericSpecs::Subclass.new
      b = NumericSpecs::Subclass.new

      # inject a metaclass on a
      class << a; true; end

      # watch it explode
      lambda { a.coerce(b) }.should raise_error(TypeError)
    end
  end

  it "calls #to_f to convert other if self responds to #to_f" do
    # Do not use NumericSpecs::Subclass here, because coerce checks the classes of the receiver
    # and arguments before calling #to_f.
    other = mock("numeric")
    lambda { @obj.coerce(other) }.should raise_error(TypeError)
  end

  it "returns [other.to_f, self.to_f] if self and other are instances of different classes" do
    result = @obj.coerce(2.5)
    result.should == [2.5, 10.5]
    result.first.should be_kind_of(Float)
    result.last.should be_kind_of(Float)

    result = @obj.coerce(3)
    result.should == [3.0, 10.5]
    result.first.should be_kind_of(Float)
    result.last.should be_kind_of(Float)

    result = @obj.coerce("4.4")
    result.should == [4.4, 10.5]
    result.first.should be_kind_of(Float)
    result.last.should be_kind_of(Float)

    result = @obj.coerce(bignum_value)
    result.should == [bignum_value.to_f, 10.5]
    result.first.should be_kind_of(Float)
    result.last.should be_kind_of(Float)
  end

  it "raises a TypeError when passed nil" do
    lambda { @obj.coerce(nil)     }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a boolean" do
    lambda { @obj.coerce(false)   }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a Symbol" do
    lambda { @obj.coerce(:symbol) }.should raise_error(TypeError)
  end

  it "raises an ArgumentError when passed a String" do
    lambda { @obj.coerce("test")  }.should raise_error(ArgumentError)
  end
end
