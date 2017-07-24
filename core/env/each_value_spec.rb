require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "ENV.each_value" do

  it "returns each value" do
    e = []
    orig = ENV.to_hash
    begin
      ENV.clear
      ENV["1"] = "3"
      ENV["2"] = "4"
      ENV.each_value { |v| e << v }
      e.should include("3")
      e.should include("4")
    ensure
      ENV.replace orig
    end
  end

  it "returns an Enumerator if called without a block" do
    ENV.each_value.should be_an_instance_of(Enumerator)
  end

  it "uses the locale encoding" do
    ENV.each_value do |value|
      value.encoding.should == Encoding.find('locale')
    end
  end

  it_behaves_like :enumeratorized_with_origin_size, :each_value, ENV
end
