require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.to_a" do

  it "returns the ENV as an array" do
    ENV["foo"] = "bar"
    a = ENV.to_a
    a.is_a?(Array).should == true
    a.find { |e| e.first == "foo" }.should == ["foo", "bar"]
    ENV.delete "foo"
  end

  it "returns the entries in the locale encoding" do
    ENV.to_a.each do |key, value|
      key.encoding.should == Encoding.find('locale')
      value.encoding.should == Encoding.find('locale')
    end
  end
end
