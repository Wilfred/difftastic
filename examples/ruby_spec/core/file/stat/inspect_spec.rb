require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#inspect" do

  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.write "rubinius" }
  end

  after :each do
    rm_r @file
  end

  it "produces a nicely formatted description of a File::Stat object" do
    st = File.stat(@file)
    expected = "#<File::Stat dev=0x#{st.dev.to_s(16)}, ino=#{st.ino}, mode=#{sprintf("%07o", st.mode)}, nlink=#{st.nlink}"
    expected << ", uid=#{st.uid}, gid=#{st.gid}, rdev=0x#{st.rdev.to_s(16)}, size=#{st.size}, blksize=#{st.blksize.inspect}"
    expected << ", blocks=#{st.blocks.inspect}, atime=#{st.atime}, mtime=#{st.mtime}, ctime=#{st.ctime}"
    platform_is :bsd, :darwin do
      # Windows has File.birthtime but it's not here since already shown by ctime.
      expected << ", birthtime=#{st.birthtime}"
    end
    expected << ">"
    st.inspect.should == expected
  end
end
