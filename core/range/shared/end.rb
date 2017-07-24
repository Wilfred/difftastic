describe :range_end, shared: true do
  it "end returns the last element of self" do
    (-1..1).send(@method).should == 1
    (0..1).send(@method).should == 1
    ("A".."Q").send(@method).should == "Q"
    ("A"..."Q").send(@method).should == "Q"
    (0xffff...0xfffff).send(@method).should == 1048575
    (0.5..2.4).send(@method).should == 2.4
  end
end
