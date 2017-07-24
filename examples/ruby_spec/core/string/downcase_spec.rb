# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#downcase" do
  it "returns a copy of self with all uppercase letters downcased" do
    "hELLO".downcase.should == "hello"
    "hello".downcase.should == "hello"
  end

  ruby_version_is ''...'2.4' do
    it "is locale insensitive (only replaces A-Z)" do
      "ÄÖÜ".downcase.should == "ÄÖÜ"

      str = Array.new(256) { |c| c.chr }.join
      expected = Array.new(256) do |i|
        c = i.chr
        c.between?("A", "Z") ? c.downcase : c
      end.join

      str.downcase.should == expected
    end
  end

  ruby_version_is '2.4' do
    it "works for all of Unicode" do
      "ÄÖÜ".downcase.should == "äöü"
    end
  end

  it "taints result when self is tainted" do
    "".taint.downcase.tainted?.should == true
    "x".taint.downcase.tainted?.should == true
    "X".taint.downcase.tainted?.should == true
  end

  it "returns a subclass instance for subclasses" do
    StringSpecs::MyString.new("FOObar").downcase.should be_an_instance_of(StringSpecs::MyString)
  end
end

describe "String#downcase!" do
  it "modifies self in place" do
    a = "HeLlO"
    a.downcase!.should equal(a)
    a.should == "hello"
  end

  it "returns nil if no modifications were made" do
    a = "hello"
    a.downcase!.should == nil
    a.should == "hello"
  end

  it "raises a RuntimeError when self is frozen" do
    lambda { "HeLlo".freeze.downcase! }.should raise_error(RuntimeError)
    lambda { "hello".freeze.downcase! }.should raise_error(RuntimeError)
  end

  with_feature :encoding do
    it "sets the result String encoding to the source String encoding" do
      "ABC".downcase.encoding.should equal(Encoding::UTF_8)
    end
  end
end
