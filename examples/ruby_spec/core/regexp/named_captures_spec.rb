require File.expand_path('../../../spec_helper', __FILE__)

describe "Regexp#named_captures" do
  it "returns a Hash" do
    /foo/.named_captures.should be_an_instance_of(Hash)
  end

  it "returns an empty Hash when there are no capture groups" do
    /foo/.named_captures.should == {}
  end

  it "sets the keys of the Hash to the names of the capture groups" do
    rex = /this (?<is>is) [aA] (?<pat>pate?rn)/
    rex.named_captures.keys.should == ['is','pat']
  end

  it "sets the values of the Hash to Arrays" do
    rex = /this (?<is>is) [aA] (?<pat>pate?rn)/
    rex.named_captures.values.each do |value|
      value.should be_an_instance_of(Array)
    end
  end

  it "sets each element of the Array to the corresponding group's index" do
    rex = /this (?<is>is) [aA] (?<pat>pate?rn)/
    rex.named_captures['is'].should == [1]
    rex.named_captures['pat'].should == [2]
  end

  it "works with duplicate capture group names" do
    rex = /this (?<is>is) [aA] (?<pat>pate?(?<is>rn))/
    rex.named_captures['is'].should == [1,3]
    rex.named_captures['pat'].should == [2]
  end
end
