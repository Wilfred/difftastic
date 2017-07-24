require File.expand_path('../../../spec_helper', __FILE__)

describe "IO" do
  it "includes File::Constants" do
    IO.include?(File::Constants).should == true
  end

  it "includes Enumerable" do
    IO.include?(Enumerable).should == true
  end
end
