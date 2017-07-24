require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.empty?" do

  it "returns true if the Environment is empty" do
    if ENV.keys.size > 0
      ENV.empty?.should == false
    end
    orig = ENV.to_hash
    begin
      ENV.clear
      ENV.empty?.should == true
    ensure
      ENV.replace orig
    end
  end

  it "returns false if not empty" do
    if ENV.keys.size > 0
      ENV.empty?.should == false
    end
  end
end
