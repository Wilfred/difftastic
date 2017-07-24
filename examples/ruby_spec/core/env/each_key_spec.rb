require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "ENV.each_key" do

  it "returns each key" do
    e = []
    orig = ENV.to_hash
    begin
      ENV.clear
      ENV["1"] = "3"
      ENV["2"] = "4"
      ENV.each_key { |k| e << k }
      e.should include("1")
      e.should include("2")
    ensure
      ENV.replace orig
    end
  end

  it "returns an Enumerator if called without a block" do
    ENV.each_key.should be_an_instance_of(Enumerator)
  end

  it "returns keys in the locale encoding" do
    ENV.each_key do |key|
      key.encoding.should == Encoding.find('locale')
    end
  end

  it_behaves_like :enumeratorized_with_origin_size, :each_key, ENV
end
