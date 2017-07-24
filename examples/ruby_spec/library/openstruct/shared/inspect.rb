describe :ostruct_inspect, shared: true do
  it "returns a String representation of self" do
    os = OpenStruct.new(name: "John Smith")
    os.send(@method).should == "#<OpenStruct name=\"John Smith\">"

    os = OpenStruct.new(age: 20, name: "John Smith")
    os.send(@method).should be_kind_of(String)
  end

  it "correctly handles self-referential OpenStructs" do
    os = OpenStruct.new
    os.self = os
    os.send(@method).should == "#<OpenStruct self=#<OpenStruct ...>>"
  end

  it "correctly handles OpenStruct subclasses" do
    os = OpenStructSpecs::OpenStructSub.new(name: "John Smith")
    os.send(@method).should == "#<OpenStructSpecs::OpenStructSub name=\"John Smith\">"
  end
end
