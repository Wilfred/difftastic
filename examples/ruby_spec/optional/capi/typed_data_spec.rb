require File.expand_path('../spec_helper', __FILE__)

load_extension("typed_data")

describe "CApiAllocTypedSpecs (a class with an alloc func defined)" do
  it "calls the alloc func" do
    @s = CApiAllocTypedSpecs.new
    @s.typed_wrapped_data.should == 42 # not defined in initialize
  end
end

describe "CApiWrappedTypedStruct" do
  before :each do
    @s = CApiWrappedTypedStructSpecs.new
  end

  it "wraps and unwraps data" do
    a = @s.typed_wrap_struct(1024)
    @s.typed_get_struct(a).should == 1024
  end

  it "throws an exception for a wrong type" do
    a = @s.typed_wrap_struct(1024)
    lambda { @s.typed_get_struct_other(a) }.should raise_error(TypeError)
  end

  it "unwraps data for a parent type" do
    a = @s.typed_wrap_struct(1024)
    @s.typed_get_struct_parent(a).should == 1024
  end

  it "allows for using NULL as the klass for Data_Wrap_Struct" do
    a = @s.typed_wrap_struct_null(1024)
    @s.typed_get_struct(a).should == 1024
  end

  describe "RTYPEDATA" do
    it "returns the struct data" do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_rdata(a).should == 1024
    end

    it "can be used to change the wrapped struct" do
      a = @s.typed_wrap_struct(1024)
      @s.typed_change_struct(a, 100)
      @s.typed_get_struct(a).should == 100
    end
  end

  describe "DATA_PTR" do
    it "returns the struct data" do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_data_ptr(a).should == 1024
    end
  end
end
