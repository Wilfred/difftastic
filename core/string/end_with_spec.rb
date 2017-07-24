# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#end_with?" do
  it "returns true only if ends match" do
    s = "hello"
    s.end_with?('o').should be_true
    s.end_with?('llo').should be_true
  end

  it 'returns false if the end does not match' do
    s = 'hello'
    s.end_with?('ll').should be_false
  end

  it "returns true if the search string is empty" do
    "hello".end_with?("").should be_true
    "".end_with?("").should be_true
  end

  it "returns true only if any ending match" do
    "hello".end_with?('x', 'y', 'llo', 'z').should be_true
  end

  it "converts its argument using :to_str" do
    s = "hello"
    find = mock('o')
    find.should_receive(:to_str).and_return("o")
    s.end_with?(find).should be_true
  end

  it "ignores arguments not convertible to string" do
    "hello".end_with?().should be_false
    lambda { "hello".end_with?(1) }.should raise_error(TypeError)
    lambda { "hello".end_with?(["o"]) }.should raise_error(TypeError)
    lambda { "hello".end_with?(1, nil, "o") }.should raise_error(TypeError)
  end

  it "uses only the needed arguments" do
    find = mock('h')
    find.should_not_receive(:to_str)
    "hello".end_with?("o",find).should be_true
  end

  it "works for multibyte strings" do
    "céréale".end_with?("réale").should be_true
  end

end
