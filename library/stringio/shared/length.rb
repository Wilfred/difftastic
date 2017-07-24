describe :stringio_length, shared: true do
  it "returns the length of the wrapped string" do
    StringIO.new("example").send(@method).should == 7
  end
end
