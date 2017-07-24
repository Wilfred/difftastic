require File.expand_path('../spec_helper', __FILE__)

load_extension("gc")

describe "CApiGCSpecs" do
  before :each do
    @f = CApiGCSpecs.new
  end

  it "correctly gets the value from a registered address" do
    @f.registered_tagged_address.should == 10
    @f.registered_tagged_address.object_id.should == @f.registered_tagged_address.object_id
    @f.registered_reference_address.should == "Globally registered data"
    @f.registered_reference_address.object_id.should == @f.registered_reference_address.object_id
  end

  describe "rb_gc_enable" do

    after do
      GC.enable
    end

    it "enables GC when disabled" do
      GC.disable
      @f.rb_gc_enable.should be_true
    end

    it "GC stays enabled when enabled" do
      GC.enable
      @f.rb_gc_enable.should be_false
    end

    it "disables GC when enabled" do
      GC.enable
      @f.rb_gc_disable.should be_false
    end

    it "GC stays disabled when disabled" do
      GC.disable
      @f.rb_gc_disable.should be_true
    end
  end

end
