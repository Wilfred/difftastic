describe :symbol_id2name, shared: true do
  it "returns the string corresponding to self" do
    :rubinius.send(@method).should == "rubinius"
    :squash.send(@method).should == "squash"
    :[].send(@method).should == "[]"
    :@ruby.send(@method).should == "@ruby"
    :@@ruby.send(@method).should == "@@ruby"
  end
end
