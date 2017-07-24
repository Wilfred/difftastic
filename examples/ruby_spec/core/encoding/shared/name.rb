require File.expand_path('../../../../spec_helper', __FILE__)

describe :encoding_name, shared: true do
  it "returns a String" do
    Encoding.list.each do |e|
      e.send(@method).should be_an_instance_of(String)
    end
  end

  it "uniquely identifies an encoding" do
    Encoding.list.each do |e|
      e.should == Encoding.find(e.send(@method))
    end
  end
end
