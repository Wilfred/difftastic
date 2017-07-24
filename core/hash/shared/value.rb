describe :hash_value_p, shared: true do
  it "returns true if the value exists in the hash" do
    { a: :b }.send(@method, :a).should == false
    { 1 => 2 }.send(@method, 2).should == true
    h = Hash.new(5)
    h.send(@method, 5).should == false
    h = Hash.new { 5 }
    h.send(@method, 5).should == false
  end

  it "uses == semantics for comparing values" do
    { 5 => 2.0 }.send(@method, 2).should == true
  end
end
