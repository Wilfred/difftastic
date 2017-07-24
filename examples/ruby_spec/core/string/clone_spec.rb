require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "String#clone" do
  before :each do
    ScratchPad.clear
    @obj = StringSpecs::InitializeString.new "string"
  end

  it "calls #initialize_copy on the new instance" do
    clone = @obj.clone
    ScratchPad.recorded.should_not == @obj.object_id
    ScratchPad.recorded.should == clone.object_id
  end

  it "copies instance variables" do
    clone = @obj.clone
    clone.ivar.should == 1
  end

  it "copies singleton methods" do
    def @obj.special() :the_one end
    clone = @obj.clone
    clone.special.should == :the_one
  end

  it "copies modules included in the singleton class" do
    class << @obj
      include StringSpecs::StringModule
    end

    clone = @obj.clone
    clone.repr.should == 1
  end

  it "copies constants defined in the singleton class" do
    class << @obj
      CLONE = :clone
    end

    clone = @obj.clone
    (class << clone; CLONE; end).should == :clone
  end

  it "copies frozen state" do
    @obj.freeze.clone.frozen?.should be_true
    "".freeze.clone.frozen?.should be_true
  end

  it "does not modify the original string when changing cloned string" do
    orig = "string"[0..100]
    clone = orig.clone
    orig[0] = 'x'
    orig.should == "xtring"
    clone.should == "string"
  end
end

