require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#frozen?" do
  it "returns true if array is frozen" do
    a = [1, 2, 3]
    a.frozen?.should == false
    a.freeze
    a.frozen?.should == true
  end

  it "returns false for an array being sorted by #sort" do
    a = [1, 2, 3]
    a.sort { |x,y| a.frozen?.should == false; x <=> y }
  end
end
