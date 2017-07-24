require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../../../shared/file/pipe', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "File::Stat#pipe?" do
  it_behaves_like :file_pipe, :pipe?, FileStat
end

describe "File::Stat#pipe?" do
  it "returns false if the file is not a pipe" do
    filename = tmp("i_exist")
    touch(filename)

    st = File.stat(filename)
    st.pipe?.should == false

    rm_r filename
  end

  platform_is_not :windows do
    it "returns true if the file is a pipe" do
      filename = tmp("i_am_a_pipe")
      system "mkfifo #{filename}"

      st = File.stat(filename)
      st.pipe?.should == true

      rm_r filename
    end
  end

end
