require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#uid" do
  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.write "rubinius" }
  end

  after :each do
    rm_r @file
  end

  it "returns the owner attribute of a File::Stat object" do
    st = File.stat(@file)
    st.uid.is_a?(Integer).should == true
    st.uid.should == Process.uid
  end
end
