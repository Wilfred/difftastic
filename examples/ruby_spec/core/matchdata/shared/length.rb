describe :matchdata_length, shared: true do
  it "length should return the number of elements in the match array" do
    /(.)(.)(\d+)(\d)/.match("THX1138.").send(@method).should == 5
  end
end
