describe :array_pack_hex, shared: true do
  it "encodes no bytes when passed zero as the count modifier" do
    ["abc"].pack(pack_format(0)).should == ""
  end

  it "raises a TypeError if the object does not respond to #to_str" do
    obj = mock("pack hex non-string")
    lambda { [obj].pack(pack_format) }.should raise_error(TypeError)
  end

  it "raises a TypeError if #to_str does not return a String" do
    obj = mock("pack hex non-string")
    obj.should_receive(:to_str).and_return(1)
    lambda { [obj].pack(pack_format) }.should raise_error(TypeError)
  end
end
