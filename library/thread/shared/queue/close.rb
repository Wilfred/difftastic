describe :queue_close, shared: true do
  it "closes the queue and returns nil for further #pop" do
    q = @object.call
    q << 1
    q.close
    q.pop.should == 1
    q.pop.should == nil
    q.pop.should == nil
  end

  it "prevents further #push" do
    q = @object.call
    q.close
    lambda {
      q << 1
    }.should raise_error(ClosedQueueError)
  end

  it "may be called multiple times" do
    q = @object.call
    q.close
    q.closed?.should be_true
    q.close # no effect
    q.closed?.should be_true
  end
end
