require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "ENV.select!" do
  it "removes environment variables for which the block returns true" do
    ENV["foo"] = "bar"
    ENV.select! { |k, v| k != "foo" }
    ENV["foo"].should == nil
  end

  it "returns self if any changes were made" do
    ENV["foo"] = "bar"
    ENV.select! { |k, v| k != "foo" }.should == ENV
  end

  it "returns nil if no changes were made" do
    ENV.select! { true }.should == nil
  end

  it "returns an Enumerator if called without a block" do
    ENV.select!.should be_an_instance_of(Enumerator)
  end

  it_behaves_like :enumeratorized_with_origin_size, :select!, ENV
end

describe "ENV.select" do
  it "returns a Hash of names and values for which block return true" do
    ENV["foo"] = "bar"
    ENV.select { |k, v| k == "foo" }.should == {"foo" => "bar"}
    ENV.delete "foo"
  end

  it "returns an Enumerator when no block is given" do
    ENV.select.should be_an_instance_of(Enumerator)
  end

  it_behaves_like :enumeratorized_with_origin_size, :select, ENV
end
