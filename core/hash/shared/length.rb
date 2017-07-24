describe :hash_length, shared: true do
  it "returns the number of entries" do
    { a: 1, b: 'c' }.send(@method).should == 2
    h = { a: 1, b: 2 }
    h[:a] = 2
    h.send(@method).should == 2
    { a: 1, b: 1, c: 1 }.send(@method).should == 3
    {}.send(@method).should == 0
    Hash.new(5).send(@method).should == 0
    Hash.new { 5 }.send(@method).should == 0
  end
end
