require File.expand_path('../../../spec_helper', __FILE__)

describe "Regexp#names" do
  it "returns an Array" do
    /foo/.names.should be_an_instance_of(Array)
  end

  it "returns an empty Array if there are no named captures" do
    /needle/.names.should == []
  end

  it "returns each named capture as a String" do
    /n(?<cap>ee)d(?<ture>le)/.names.each do |name|
      name.should be_an_instance_of(String)
    end
  end

  it "returns all of the named captures" do
    /n(?<cap>ee)d(?<ture>le)/.names.should == ['cap', 'ture']
  end

  it "works with nested named captures" do
    /n(?<cap>eed(?<ture>le))/.names.should == ['cap', 'ture']
  end

  it "returns each capture name only once" do
    /n(?<cap>ee)d(?<cap>le)/.names.should == ['cap']
  end
end
