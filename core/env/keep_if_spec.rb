require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "ENV.keep_if" do
  before :each do
    ENV["foo"] = "bar"
  end

  after :each do
    ENV.delete "foo"
  end

  it "deletes pairs if the block returns false" do
    ENV.keep_if { |k, v| k != "foo" }
    ENV["foo"].should == nil
  end

  it "returns ENV even if nothing deleted" do
    ENV.keep_if { true }.should_not == nil
  end

  it "returns an Enumerator if no block given" do
    ENV.keep_if.should be_an_instance_of(Enumerator)
  end

  it "deletes pairs through enumerator" do
    enum = ENV.keep_if
    enum.each { |k, v| k != "foo" }
    ENV["foo"].should == nil
  end

  it_behaves_like :enumeratorized_with_origin_size, :keep_if, ENV
end
