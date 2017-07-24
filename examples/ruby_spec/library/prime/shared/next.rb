describe :prime_next, shared: true do
  it "returns the element at the current position and moves forward" do
    p = Prime.instance.each
    p.next.should == 2
    p.next.should == 3
    p.next.next.should == 6
  end
end
