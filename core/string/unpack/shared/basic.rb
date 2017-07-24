describe :string_unpack_basic, shared: true do
  it "ignores whitespace in the format string" do
    "abc".unpack("a \t\n\v\f\r"+unpack_format).should be_an_instance_of(Array)
  end

  it "calls #to_str to coerce the directives string" do
    d = mock("unpack directive")
    d.should_receive(:to_str).and_return("a"+unpack_format)
    "abc".unpack(d).should be_an_instance_of(Array)
  end

  it "raises a TypeError when passed nil" do
    lambda { "abc".unpack(nil) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed an Integer" do
    lambda { "abc".unpack(1) }.should raise_error(TypeError)
  end
end

describe :string_unpack_no_platform, shared: true do
  it "raises an ArgumentError when the format modifier is '_'" do
    lambda { "abcdefgh".unpack(unpack_format("_")) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the format modifier is '!'" do
    lambda { "abcdefgh".unpack(unpack_format("!")) }.should raise_error(ArgumentError)
  end
end
