# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../shared/collect', __FILE__)

describe "Enumerator::Lazy#map" do
  it_behaves_like :enumerator_lazy_collect, :map

  it "doesn't unwrap Arrays" do
    Enumerator.new {|y| y.yield([1])}.lazy.to_a.should == [[1]]
  end
end
