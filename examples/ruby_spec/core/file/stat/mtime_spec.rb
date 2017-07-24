require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#mtime" do
  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.write "rubinius" }
  end

  after :each do
    rm_r @file
  end

  it "returns the mtime of a File::Stat object" do
    st = File.stat(@file)
    st.mtime.should be_kind_of(Time)
    st.mtime.should <= Time.now
  end
end
