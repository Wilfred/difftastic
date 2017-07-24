# -*- encoding: us-ascii -*-

require File.expand_path('../../../../spec_helper', __FILE__)

describe "Enumerator::Lazy" do
  it "is a subclass of Enumerator" do
    Enumerator::Lazy.superclass.should equal(Enumerator)
  end
end

describe "Enumerator::Lazy#lazy" do
  it "returns self" do
    lazy = (1..3).to_enum.lazy
    lazy.lazy.should equal(lazy)
  end
end
