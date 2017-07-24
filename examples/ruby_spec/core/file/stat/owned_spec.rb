require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/owned', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#owned?" do
  it_behaves_like :file_owned, :owned?, FileStat
end

describe "File::Stat#owned?" do
  before :each do
    @file = tmp("i_exist")
    touch(@file)
  end

  after :each do
    rm_r @file
  end

  it "returns true if the file is owned by the user" do
    st = File.stat(@file)
    st.owned?.should == true
  end

  platform_is_not :windows do
    it "returns false if the file is not owned by the user" do
      system_file = '/etc/passwd'
      st = File.stat(system_file)
      st.owned?.should == false
    end
  end
end
