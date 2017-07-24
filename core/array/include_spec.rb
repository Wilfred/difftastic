require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#include?" do
  it "returns true if object is present, false otherwise" do
    [1, 2, "a", "b"].include?("c").should == false
    [1, 2, "a", "b"].include?("a").should == true
  end

  it "determines presence by using element == obj" do
    o = mock('')

    [1, 2, "a", "b"].include?(o).should == false

    def o.==(other); other == 'a'; end

    [1, 2, o, "b"].include?('a').should == true

    [1, 2.0, 3].include?(2).should == true
  end

  it "calls == on elements from left to right until success" do
    key = "x"
    one = mock('one')
    two = mock('two')
    three = mock('three')
    one.should_receive(:==).any_number_of_times.and_return(false)
    two.should_receive(:==).any_number_of_times.and_return(true)
    three.should_not_receive(:==)
    ary = [one, two, three]
    ary.include?(key).should == true
  end
end
