require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#tuesday?" do
  it "returns true if time represents Tuesday" do
    Time.local(2000, 1, 4).tuesday?.should == true
  end

  it "returns false if time doesn't represent Tuesday" do
    Time.local(2000, 1, 1).tuesday?.should == false
  end
end
