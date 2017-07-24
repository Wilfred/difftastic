require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Hash#values" do
  it "returns an array of values" do
    h = { 1 => :a, 'a' => :a, 'the' => 'lang' }
    h.values.should be_kind_of(Array)
    h.values.sort {|a, b| a.to_s <=> b.to_s}.should == [:a, :a, 'lang']
  end
end
