require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/enumerator/rewind', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Enumerator#rewind" do
  it_behaves_like(:enum_rewind, :rewind)

  it "calls the enclosed object's rewind method if one exists" do
    obj = mock('rewinder')
    enum = obj.to_enum
    obj.should_receive(:each).at_most(1)
    obj.should_receive(:rewind)
    enum.rewind
  end

  it "does nothing if the object doesn't have a #rewind method" do
    obj = mock('rewinder')
    enum = obj.to_enum
    obj.should_receive(:each).at_most(1)
    lambda { enum.rewind.should == enum }.should_not raise_error
  end
end

describe "Enumerator#rewind" do
  before :each do
    ScratchPad.record []
    @enum = EnumeratorSpecs::Feed.new.to_enum(:each)
  end

  it "clears a pending #feed value" do
    @enum.next
    @enum.feed :a
    @enum.rewind
    @enum.next
    @enum.next
    ScratchPad.recorded.should == [nil]
  end
end
