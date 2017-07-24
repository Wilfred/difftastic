require File.expand_path('../../../spec_helper', __FILE__)

describe "Symbol#==" do
  it "only returns true when the other is exactly the same symbol" do
    (:ruby == :ruby).should == true
    (:ruby == :"ruby").should == true
    (:ruby == :'ruby').should == true
    (:@ruby == :@ruby).should == true

    (:ruby == :@ruby).should == false
    (:foo == :bar).should == false
    (:ruby == 'ruby').should == false
  end
end
