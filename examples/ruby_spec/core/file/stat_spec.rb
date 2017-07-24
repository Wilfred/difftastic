require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/stat', __FILE__)

describe "File.stat" do
  it_behaves_like :file_stat, :stat
end

platform_is_not :windows do
  describe "File.stat" do
    before :each do
      @file = tmp('i_exist')
      @link = tmp('i_am_a_symlink')
      touch(@file) { |f| f.write "rubinius" }
    end

    after :each do
      rm_r @link, @file
    end

    it "returns information for a file that has been deleted but is still open" do
      File.open(@file) do |f|
        rm_r @file

        st = f.stat

        st.file?.should == true
        st.zero?.should == false
        st.size.should == 8
        st.size?.should == 8
        st.blksize.should >= 0
        st.atime.should be_kind_of(Time)
        st.ctime.should be_kind_of(Time)
        st.mtime.should be_kind_of(Time)
      end
    end

    it "returns a File::Stat object with file properties for a symlink" do
      File.symlink(@file, @link)
      st = File.stat(@link)

      st.file?.should == true
      st.symlink?.should == false
    end
  end
end
