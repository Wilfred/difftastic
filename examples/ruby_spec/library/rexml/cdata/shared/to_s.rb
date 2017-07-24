describe :rexml_cdata_to_s, shared: true do
  it "returns the contents of the CData" do
    c = REXML::CData.new("some text")
    c.send(@method).should == "some text"
  end

  it "does not escape text" do
    c1 = REXML::CData.new("some& text\n")
    c1.send(@method).should == "some& text\n"
  end
end
