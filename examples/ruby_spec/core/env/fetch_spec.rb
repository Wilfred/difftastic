require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.fetch" do
  it "returns a value" do
    ENV["foo"] = "bar"
    ENV.fetch("foo").should == "bar"
    ENV.delete "foo"
  end

  it "raises a TypeError if the key is not a String" do
    lambda { ENV.fetch :should_never_be_set }.should raise_error(TypeError)
  end

  it "raises a KeyError if the key is not found" do
    lambda { ENV.fetch "should_never_be_set" }.should raise_error(KeyError)
  end

  it "provides the given default parameter" do
    ENV.fetch("should_never_be_set", "default").should == "default"
  end

  it "provides a default value from a block" do
    ENV.fetch("should_never_be_set") { |k| "wanted #{k}" }.should == "wanted should_never_be_set"
  end

  it "warns on block and default parameter given" do
    lambda do
       ENV.fetch("should_never_be_set", "default") { 1 }.should == 1
    end.should complain(/block supersedes default value argument/)
  end

  it "uses the locale encoding" do
    ENV.fetch(ENV.keys.first).encoding.should == Encoding.find('locale')
  end
end
