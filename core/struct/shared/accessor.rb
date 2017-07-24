describe :struct_accessor, shared: true do
  it "does not override the instance accessor method" do
    struct = Struct.new(@method.to_sym)
    instance = struct.new 42
    instance.send(@method).should == 42
  end
end
