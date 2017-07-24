require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Regexps with back-references" do
  it "saves match data in the $~ pseudo-global variable" do
    "hello" =~ /l+/
    $~.to_a.should == ["ll"]
  end

  it "saves captures in numbered $[1-9] variables" do
    "1234567890" =~ /(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)/
    $~.to_a.should == ["1234567890", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"]
    $1.should == "1"
    $2.should == "2"
    $3.should == "3"
    $4.should == "4"
    $5.should == "5"
    $6.should == "6"
    $7.should == "7"
    $8.should == "8"
    $9.should == "9"
  end

  it "will not clobber capture variables across threads" do
    cap1, cap2, cap3 = nil
    "foo" =~ /(o+)/
    cap1 = [$~.to_a, $1]
    Thread.new do
      cap2 = [$~.to_a, $1]
      "bar" =~ /(a)/
      cap3 = [$~.to_a, $1]
    end.join
    cap4 = [$~.to_a, $1]
    cap1.should == [["oo", "oo"], "oo"]
    cap2.should == [[], nil]
    cap3.should == [["a", "a"], "a"]
    cap4.should == [["oo", "oo"], "oo"]
  end

  it "supports \<n> (backreference to previous group match)" do
    /(foo.)\1/.match("foo1foo1").to_a.should == ["foo1foo1", "foo1"]
    /(foo.)\1/.match("foo1foo2").should be_nil
  end

  it "resets nested \<n> backreference before match of outer subexpression" do
    /(a\1?){2}/.match("aaaa").to_a.should == ["aa", "a"]
  end
end
