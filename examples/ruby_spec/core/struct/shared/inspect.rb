describe :struct_inspect, shared: true do
  it "returns a string representation without the class name for anonymous structs" do
    Struct.new(:a).new("").send(@method).should == '#<struct a="">'
  end
end
