require File.expand_path('../../../spec_helper', __FILE__)

describe "Integer#numerator" do
  before :all do
    @numbers = [
      0,
      29871,
      99999999999999**99,
      72628191273,
    ].map{|n| [-n, n]}.flatten
  end

  it "returns self" do
    @numbers.each do |number|
      number.numerator.should == number
    end
  end
end
