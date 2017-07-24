require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.values" do

  it "returns an array of the values" do
    orig = ENV.to_hash
    begin
      ENV.replace "a" => "b", "c" => "d"
      a = ENV.values
      a.sort.should == ["b", "d"]
    ensure
      ENV.replace orig
    end
  end

  it "uses the locale encoding" do
    ENV.values.each do |value|
      value.encoding.should == Encoding.find('locale')
    end
  end
end
