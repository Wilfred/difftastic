# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)

describe "Enumerator::Yielder#initialize" do
  before :each do
    @class = Enumerator::Yielder
    @uninitialized = @class.allocate
  end

  it "is a private method" do
    @class.should have_private_instance_method(:initialize, false)
  end

  it "returns self when given a block" do
    @uninitialized.send(:initialize) {}.should equal(@uninitialized)
  end
end
