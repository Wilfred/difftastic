require File.expand_path('../../../../spec_helper', __FILE__)

describe "Process::Status#exitstatus" do

  before :each do
    ruby_exe("exit(42)")
  end

  it "returns the process exit code" do
    $?.exitstatus.should == 42
  end

end
