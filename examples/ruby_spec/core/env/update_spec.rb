require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.update" do

  it "adds the parameter hash to ENV" do
    ENV["foo"].should == nil
    ENV.update "foo" => "bar"
    ENV["foo"].should == "bar"
    ENV.delete "foo"
  end

  it "yields key, the old value and the new value when replacing entries" do
    ENV.update "foo" => "bar"
    ENV["foo"].should == "bar"
    ENV.update("foo" => "boo") do |key, old, new|
      key.should == "foo"
      old.should == "bar"
      new.should == "boo"
      "rab"
    end
    ENV["foo"].should == "rab"
    ENV.delete "foo"
  end

end
