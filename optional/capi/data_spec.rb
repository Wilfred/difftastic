require File.expand_path('../spec_helper', __FILE__)

load_extension("data")

describe "CApiAllocSpecs (a class with an alloc func defined)" do
  it "calls the alloc func" do
    @s = CApiAllocSpecs.new
    @s.wrapped_data.should == 42 # not defined in initialize
  end
end

describe "CApiWrappedStruct" do
  before :each do
    @s = CApiWrappedStructSpecs.new
  end

  it "wraps with Data_Wrap_Struct and Data_Get_Struct returns data" do
    a = @s.wrap_struct(1024)
    @s.get_struct(a).should == 1024
  end

  it "allows for using NULL as the klass for Data_Wrap_Struct" do
    a = @s.wrap_struct_null(1024)
    @s.get_struct(a).should == 1024
  end

  describe "RDATA()" do
    it "returns the struct data" do
      a = @s.wrap_struct(1024)
      @s.get_struct_rdata(a).should == 1024
    end

    it "allows changing the wrapped struct" do
      a = @s.wrap_struct(1024)
      @s.change_struct(a, 100)
      @s.get_struct(a).should == 100
    end
  end

  describe "DATA_PTR" do
    it "returns the struct data" do
      a = @s.wrap_struct(1024)
      @s.get_struct_data_ptr(a).should == 1024
    end
  end
end
