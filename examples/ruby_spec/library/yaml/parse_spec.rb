require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "YAML#parse with an empty string" do
  it "returns false" do
    YAML.parse('').should be_false
  end
end

describe "YAML#parse" do
  before :each do
    @string_yaml = "foo".to_yaml
  end

  it "returns the value from the object" do
    if YAML.to_s == "Psych"
      YAML.parse(@string_yaml).to_ruby.should == "foo"
    else
      YAML.parse(@string_yaml).value.should == "foo"
    end
  end
end
