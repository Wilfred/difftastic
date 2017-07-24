require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/take', __FILE__)

describe "Enumerable#take" do
  it "requires an argument" do
    lambda{ EnumerableSpecs::Numerous.new.take}.should raise_error(ArgumentError)
  end

  describe "when passed an argument" do
    it_behaves_like :enumerable_take, :take
  end
end
