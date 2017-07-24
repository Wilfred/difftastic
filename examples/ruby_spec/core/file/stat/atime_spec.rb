require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#atime" do
  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.write "rubinius" }
  end

  after :each do
    rm_r @file
  end

  it "returns the atime of a File::Stat object" do
    st = File.stat(@file)
    st.atime.should be_kind_of(Time)
    st.atime.should <= Time.now
  end
end
