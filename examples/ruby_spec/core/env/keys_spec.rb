require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.keys" do

  it "returns all the keys" do
    ENV.keys.sort.should == ENV.to_hash.keys.sort
  end

  it "returns the keys in the locale encoding" do
    ENV.keys.each do |key|
      key.encoding.should == Encoding.find('locale')
    end
  end
end
