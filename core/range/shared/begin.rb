describe :range_begin, shared: true do
  it "returns the first element of self" do
    (-1..1).send(@method).should == -1
    (0..1).send(@method).should == 0
    (0xffff...0xfffff).send(@method).should == 65535
    ('Q'..'T').send(@method).should == 'Q'
    ('Q'...'T').send(@method).should == 'Q'
    (0.5..2.4).send(@method).should == 0.5
  end
end
