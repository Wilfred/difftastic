require File.expand_path('../../../../spec_helper', __FILE__)

describe :numeric_rect, shared: true do
  before :each do
    @numbers = [
      20,             # Integer
      398.72,         # Float
      Rational(3, 4), # Rational
      99999999**99, # Bignum
      infinity_value,
      nan_value
    ]
  end

  it "returns an Array" do
    @numbers.each do |number|
      number.send(@method).should be_an_instance_of(Array)
    end
  end

  it "returns a two-element Array" do
    @numbers.each do |number|
      number.send(@method).size.should == 2
    end
  end

  it "returns self as the first element" do
   @numbers.each do |number|
     if Float === number and number.nan?
       number.send(@method).first.nan?.should be_true
     else
       number.send(@method).first.should == number
     end
   end
  end

  it "returns 0 as the last element" do
   @numbers.each do |number|
     number.send(@method).last.should == 0
   end
  end

  it "raises an ArgumentError if given any arguments" do
   @numbers.each do |number|
     lambda { number.send(@method, number) }.should raise_error(ArgumentError)
   end
  end
end
