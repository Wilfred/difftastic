require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#gid" do
  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.write "rubinius" }
    File.chown(nil, Process.gid, @file)
  end

  after :each do
    rm_r @file
  end

  it "returns the group owner attribute of a File::Stat object" do
    st = File.stat(@file)
    st.gid.is_a?(Integer).should == true
    st.gid.should == Process.gid
  end
end
