require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/file/owned', __FILE__)

describe "File.owned?" do
  it_behaves_like :file_owned, :owned?, File
end

describe "File.owned?" do
  before :each do
    @filename = tmp("i_exist")
    touch(@filename)
  end

  after :each do
    rm_r @filename
  end

  it "returns false if file does not exist" do
    File.owned?("I_am_a_bogus_file").should == false
  end

  it "returns true if the file exist and is owned by the user" do
    File.owned?(@filename).should == true
  end

  platform_is_not :windows do
    it "returns false when the file is not owned by the user" do
      system_file = '/etc/passwd'
      File.owned?(system_file).should == false
    end
  end

end
