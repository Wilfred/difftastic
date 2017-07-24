describe :queue_length, shared: true do
  it "returns the number of elements" do
    q = @object.call
    q.send(@method).should == 0
    q << Object.new
    q << Object.new
    q.send(@method).should == 2
  end
end
