require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#mode" do
  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.write "rubinius" }
    File.chmod(0644, @file)
  end

  after :each do
    rm_r @file
  end

  it "returns the mode of a File::Stat object" do
    st = File.stat(@file)
    st.mode.is_a?(Integer).should == true
    (st.mode & 0777).should == 0644
  end
end
