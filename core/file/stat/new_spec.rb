require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#initialize" do

  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.write "rubinius" }
    File.chmod(0755, @file)
  end

  after :each do
    rm_r @file
  end

  it "raises an exception if the file doesn't exist" do
    lambda { File::Stat.new(tmp("i_am_a_dummy_file_that_doesnt_exist")) }.should raise_error
  end

  it "creates a File::Stat object for the given file" do
    st = File::Stat.new(@file)
    st.should be_kind_of(File::Stat)
    st.ftype.should == 'file'
  end

  it "calls #to_path on non-String arguments" do
    p = mock('path')
    p.should_receive(:to_path).and_return @file
    File::Stat.new p
  end
end
