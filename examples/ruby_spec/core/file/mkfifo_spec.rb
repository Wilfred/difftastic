require File.expand_path('../../../spec_helper', __FILE__)

ruby_version_is "2.3" do
  describe "File.mkfifo" do
    platform_is_not :windows do
      before do
        @path = tmp('fifo')
      end

      after do
        rm_r(@path)
      end

      context "when path passed responds to :to_path" do
        it "creates a FIFO file at the path specified" do
          File.mkfifo(@path)
          File.ftype(@path).should == "fifo"
        end
      end

      context "when path passed is not a String value" do
        it "raises a TypeError" do
          lambda { File.mkfifo(:"/tmp/fifo") }.should raise_error(TypeError)
        end
      end

      context "when path does not exist" do
        it "raises an Errno::ENOENT exception" do
          lambda { File.mkfifo("/bogus/path") }.should raise_error(Errno::ENOENT)
        end
      end

      it "creates a FIFO file at the passed path" do
        File.mkfifo(@path.to_s)
        File.ftype(@path).should == "fifo"
      end

      it "creates a FIFO file with passed mode & ~umask" do
        File.mkfifo(@path, 0755)
        File.stat(@path).mode.should == 010755 & ~File.umask
      end

      it "creates a FIFO file with a default mode of 0666 & ~umask" do
        File.mkfifo(@path)
        File.stat(@path).mode.should == 010666 & ~File.umask
      end

      it "returns 0 after creating the FIFO file" do
        File.mkfifo(@path).should == 0
      end
    end
  end
end
