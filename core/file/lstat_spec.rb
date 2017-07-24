require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/stat', __FILE__)

describe "File.lstat" do
  it_behaves_like :file_stat, :lstat
end

describe "File.lstat" do

  before :each do
    @file = tmp('i_exist')
    @link = tmp('i_am_a_symlink')
    touch(@file) { |f| f.write 'rubinius' }
    File.symlink(@file, @link)
  end

  after :each do
    rm_r @link, @file
  end

  platform_is_not :windows do
    it "returns a File::Stat object with symlink properties for a symlink" do
      st = File.lstat(@link)

      st.symlink?.should == true
      st.file?.should == false
    end
  end
end

describe "File#lstat" do
  it "needs to be reviewed for spec completeness"
end
